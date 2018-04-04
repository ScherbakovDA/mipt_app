//
// Created by denis on 22.03.18.
//

#include "SFML/Graphics.hpp"

#ifndef MIPT_APP_DRAW_OBJ_H
#define MIPT_APP_DRAW_OBJ_H

class Window
{
private:
    sf::RenderWindow window;

    sf::Event event;

public:

    Window(int length=800, int width=600,const std::string name = "mipt_app") {

        sf::VideoMode mode = sf::VideoMode(length, width);
        window = Application.window;
    }

    void draw()
    {
        while(window.isOpen())
        {

            while(window.pollEvent(event))
            {
                // Кроме обычного способа наше окно будет закрываться по нажатию на Escape
                if(event.type == sf::Event::Closed ||
                   (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                    window.close();
            }

        }

        window.clear();

        //window.draw(GameObject);//Реализовать класс отрисовки объектов на экране

        window.display();
    }

};

#endif //MIPT_APP_DRAW_OBJ_H
