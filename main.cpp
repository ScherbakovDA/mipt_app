#include <iostream>
#include "SFML/Graphics.hpp"
#include "draw_obj.h"
#include "simple_physics.h"
#include "game_obj.h"

int main() {

    sf::RenderWindow window(sf::VideoMode(800,600), "mipt_app");

    while(window.isOpen())
    {
        sf::Event event;

        while(window.pollEvent(event))
        {
            // Кроме обычного способа наше окно будет закрываться по нажатию на Escape
            if(event.type == sf::Event::Closed ||
               (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                window.close();
        }

    }

    window.clear();

    //Реализовать класс отрисовки объектов

    window.display();


    return 0;
}