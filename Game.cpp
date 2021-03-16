//
// Created by ruldane on 16/03/2021.
//

#include "Game.hpp"

//private functions
void Game::initWindow() {
    this->window = new sf::RenderWindow(sf::VideoMode(100, 600), "Swaglords of space", sf::Style::Close | sf::Style::Titlebar);
}

//constructor destructor
Game::Game() {
    this->initWindow();
}

Game::~Game() {
    delete this->window;
}

// Functions
void Game::run() {
    while (this->window->isOpen()) {
        this->update();
        this->render();
    }
}

void Game::update() {

}

void Game::render() {
    this->window->clear();
    // Draw all the stuffs
    this->window->display();
}


