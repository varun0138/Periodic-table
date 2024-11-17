#pragma once

#include <SFML/Graphics/RenderWindow.hpp>

class Game {
private:
    const unsigned int m_windowWidth = 1000;
    const unsigned int m_windowHeight = 700;

    sf::RenderWindow m_window;

    void userInput();
    void update();
    void render();

public:
    Game();
    void run();
};