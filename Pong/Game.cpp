#include "Game.hpp"

Game::Game() : puck(), paddle1(sf::IntRect(0, 0, 50, 150), sf::Vector2f(50, 300)), paddle2(sf::IntRect(50, 0, 50, 150), sf::Vector2f(950, 300)), frameCount(0)
{
	if(backgroundTexture.loadFromFile("..\\bg.jpg"));
	{
		backgroundSprite.setTexture(backgroundTexture);
		backgroundSprite.setOrigin(backgroundSprite.getGlobalBounds().width / 2, backgroundSprite.getGlobalBounds().height / 2);
		backgroundSprite.setPosition(500, 300);
	}
}

Game::~Game()
{
}

void Game::Run(sf::RenderWindow& window)
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time TimePerFrame = sf::seconds(1.f / 60.f);

	while (window.isOpen())
	{
		sf::Time deltaTime = clock.restart();
		timeSinceLastUpdate += deltaTime;

		while (timeSinceLastUpdate > TimePerFrame)
		{
			timeSinceLastUpdate -= TimePerFrame;
			ProcessEvents(window);
			Update(TimePerFrame);
			Render(window);

			frameCount++;
			if (fpsClock.getElapsedTime().asSeconds() >= 1.0f)
			{
				std::cout << "FPS: " << frameCount << std::endl;
				frameCount = 0;
				fpsClock.restart();
			}
		}
	}
}

void Game::ProcessEvents(sf::RenderWindow& window)
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}
	}
}

void Game::Update(sf::Time deltaTime)
{
}

void Game::Render(sf::RenderWindow& window)
{
	window.clear();
	window.draw(backgroundSprite);
	puck.Render(window);
	paddle1.Render(window);
	paddle2.Render(window);
	window.display();
}
