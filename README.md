# Pong

Dieses Projekt ist eine moderne Umsetzung des Arcade-Klassikers Pong. Entwickelt in C++ mit der SFML-Bibliothek, liegt der Fokus auf präziser Physik-Berechnung, einer herausfordernden KI und einer sauberen Software-Architektur.

🕹️ Das Spiel

Pong simuliert ein Tischtennis-Duell. Der Ball prallt von Wänden und Paddles ab, wobei die Geschwindigkeit bei jedem Schlag zunimmt, um die Schwierigkeit stetig zu steigern.

- Reflexionsphysik: Der Abprallwinkel wird dynamisch berechnet, je nachdem, wo der Ball das Paddle trifft.

- Gegner-KI: Ein Computergegner verfolgt die Flugbahn des Balls in Echtzeit.

- Game-Loop: Saubere Trennung von Input, Spiellogik und Rendering für flüssiges Gameplay.

## 🚀 Download & Website

Du möchtest das Spiel direkt ausprobieren, ohne es selbst zu kompilieren? Die ausführbare Datei (.exe / App) sowie weitere Informationen findest du auf meiner Website:

[Website]: https://jjmercado.github.io/portfolioSite/games/pong
🔗 Hier zur [Website] und zum Download

## 🛠️ Build-Anleitung (Lokal bauen)

Dieses Projekt verwendet CMake, um den Build-Prozess plattformübergreifend zu verwalten.
Voraussetzungen

- Ein C++17 fähiger Compiler (GCC, Clang oder MSVC).

- CMake (Version 3.10 oder höher).

- SFML 2.6.1 (muss auf deinem System installiert sein).

Schritt-für-Schritt

1. Repository klonen:

```bash
git clone https://github.com/jjmercado/Pong.git
cd Pong
```

2. Build-Verzeichnis erstellen:

```bash
mkdir build
cd build
```

3. CMake konfigurieren:

```bash
cmake ..
```

4. CMake konfigurieren:

```bash
cmake --build .
```

5. Spiel starten: Nach dem Build findest du die ausführbare Datei im build-Ordner (oder unter build/Debug / build/Release bei Windows).