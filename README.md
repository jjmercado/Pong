# Pong

This project is my implementation of the arcade classic Pong, designed as a **local 2-player game**. Developed in C++ using the SFML library, it provides a solid foundation that is open to further expansion.

> Read this in [German](README.de.md).

🕹️ The Game

Pong simulates a table tennis duel. The ball bounces off walls and paddles.

- **Reflection Physics**: The rebound angle is calculated dynamically depending on where the ball hits the paddle.
- **Scoring System**: A point is awarded when the ball crosses a player's back boundary.
- **Game Loop**: Clean separation of input, game logic, and rendering for smooth gameplay.

> **Status Note**: Sound files are already present in the `assets/Sound/` folder but are not yet implemented in the code.

### Controls

The game is designed for two players sharing one keyboard:

- **Left Player**: Keys `W` (up) and `S` (down)
- **Right Player**: Arrow keys `Up` and `Down`

## 🚀 Download & Website

Want to try the game immediately without compiling it yourself? You can find the executable (.exe / App) and more information on my website:

[Website]: https://jjmercado.github.io/portfolioSite/games/pong
🔗 Go to [Website] and Download

## 🛠️ Build Instructions (Build Locally)

This project uses CMake to manage the build process across platforms.

### Prerequisites

- A C++17 capable compiler (GCC, Clang, or MSVC).
- CMake (Version 3.10 or higher).
- SFML 2.6.2 (Update to the latest SFML version is planned when time permits).

### Step-by-Step

1. **Clone Repository**:
```bash
git clone https://github.com/jjmercado/Pong.git
cd Pong
```

2. **Create Build Directory:**

```bash
mkdir build
cd build
```

3. **Configure CMake:**

```bash
cmake ..
```

4. **Compile**:

```bash
cmake --build .
```

5. **Start Game:**
After the build, you will find the executable in the build folder (or under build/Debug / build/Release on Windows).

## 👏 Credits & Licenses

- **Graphics**: The sprites used in this game are created by Nicolás A. Ortega (Deathsbreed) and licensed under [CC-BY-SA 3.0](https://creativecommons.org/licenses/by-sa/3.0/).
  - Source: [\[Asset\]](https://opengameart.org/content/pong-graphics)