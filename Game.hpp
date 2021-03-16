#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#ifndef GAME_GAME_H
#define GAME_GAME_H


class Game {
private:
    sf::RenderWindow* window;

    // private functions
    void initWindow();

public:
    Game();
    virtual ~Game();

    // Functions
    void run ();
    void update();
    void render();
};


#endif //GAME_GAME_H
