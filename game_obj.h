//
// Created by denis on 22.03.18.
//
#include "SFML/Graphics.hpp"


class Base_obj
{
public:

    float x = 50;

    float y = 25;

    Base_obj(std::string way,x,y)
    {
        image.loadFromFile(way);

        texture.loadFromImage(image);

        sprite.setTexture(texture);

        sprite.setPosition(x,y);
    }

    sf::Color color;

protected:

    sf::Sprite sprite;

    sf::Texture texture;

    sf::Image image;

};

class Ball:protected Base_obj
{
    
};

#ifndef MIPT_APP_GAME_OBJ_H
#define MIPT_APP_GAME_OBJ_H

#endif //MIPT_APP_GAME_OBJ_H
