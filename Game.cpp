#include <SFML/Window/Event.hpp>

#include "Game.hpp"

Game::Game() {
    m_window.create(sf::VideoMode(m_windowWidth, m_windowHeight), "", sf::Style::Close | sf::Style::Titlebar);
}

void Game::run() {
    while(m_window.isOpen()) {
        userInput();
        update();
        render();
    }
}

void Game::userInput() {
    sf::Event event;
    while(m_window.pollEvent(event)) {
        switch(event.type) {
            case sf::Event::Closed:
                m_window.close();
                break;

            default:
                break;
        }
    }
}

void Game::update() {
    
}

void Game::render() {
    m_window.clear();

    m_window.display();
}