# Pong

Dieses Projekt ist meine Umsetzung des Arcade-Klassikers Pong, ausgelegt als **lokales 2-Spieler-Spiel**. Entwickelt in C++ mit der SFML-Bibliothek, bietet es eine solide Basis, die gerne erweitert werden kann.

🕹️ Das Spiel

Pong simuliert ein Tischtennis-Duell. Der Ball prallt von Wänden und Paddles ab.

- **Reflexionsphysik**: Der Abprallwinkel wird dynamisch berechnet, je nachdem, wo der Ball das Paddle trifft.
- **Punktesystem**: Ein Punkt wird vergeben, wenn der Ball die hintere Spielfeldbegrenzung eines Spielers überschreitet.
- **Game-Loop**: Saubere Trennung von Input, Spiellogik und Rendering für flüssiges Gameplay.

> **Status-Hinweis**: Sound-Dateien befinden sich bereits im Ordner `assets/Sound/`, sind im Code aber aktuell noch nicht implementiert.

### Steuerung

Das Spiel ist für zwei Spieler an einer Tastatur konzipiert:

- **Linker Spieler**: Tasten `W` (hoch) und `S` (runter)
- **Rechter Spieler**: Pfeiltasten `Oben` und `Unten`

## 🚀 Download & Website

Du möchtest das Spiel direkt ausprobieren, ohne es selbst zu kompilieren? Die ausführbare Datei (.exe / App) sowie weitere Informationen findest du auf meiner Website:

[Website]: https://jjmercado.github.io/portfolioSite/games/pong
🔗 Hier geht's zur [Website] und zum Download

## 🛠️ Build-Anleitung (Lokal bauen)

Dieses Projekt verwendet CMake, um den Build-Prozess plattformübergreifend zu verwalten.

### Voraussetzungen

- Ein C++17 fähiger Compiler (GCC, Clang oder MSVC).
- CMake (Version 3.10 oder höher).
- SFML 2.6.2 (Update auf die aktuellste SFML-Version folgt, sobald Zeit dafür ist).

### Schritt-für-Schritt

1. **Repository klonen**:

```bash
git clone https://github.com/jjmercado/Pong.git
cd Pong
```

2. **Build-Verzeichnis erstellen:**

```bash
mkdir build
cd build
```

3. **CMake konfigurieren:**

```bash
cmake ..
```

4. **CMake konfigurieren:**

```bash
cmake --build .
```

5. **Spiel starten:**
Nach dem Build findest du die ausführbare Datei im build-Ordner (oder unter build/Debug / build/Release bei Windows).

## 👏 Credits & Lizenzen

- **Grafiken**: Die verwendeten Sprites wurden von [Name des Erstellers] erstellt und stehen unter der [CC-BY-SA 3.0](https://creativecommons.org/licenses/by-sa/3.0/deed.de) Lizenz.
  - Quelle: [Link zum Ersteller/Asset]