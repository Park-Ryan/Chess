#ifndef _QUEEN_H
#define _QUEEN_H

#include "piece.h"
#include "grid.h"
#include <SFML/Graphics.hpp>

class Queen : public Piece
{
public:
    //member variables

    sf::Sprite sprite;
    sf::Texture texture;

    Queen(std::vector<int> pos, bool color1)
    {
        if (color1)
        {
            color = color1;
            texture.loadFromFile("Sprites/wqueen.png");
            sprite.setTexture(texture);

            sf::Vector2f targetSize(100.0f, 100.0f);
            sprite.setScale(
                targetSize.x / sprite.getGlobalBounds().width,
                targetSize.y / sprite.getGlobalBounds().height);
        }
        else
        {
            color = color1;
            texture.loadFromFile("Sprites/bqueen.png");
            sprite.setTexture(texture);

            sf::Vector2f targetSize(100.0f, 100.0f);
            sprite.setScale(
                targetSize.x / sprite.getGlobalBounds().width,
                targetSize.y / sprite.getGlobalBounds().height);
        }
        position = pos;
    }

    sf::Sprite getSprite()
    {
        return sprite;
    }

    std::vector<int> getPosition()
    {
        return position;
    }

    void setSpriteLocation(int x, int y)
    {
        sprite.setPosition(x, y);
    }
    void draw(sf::RenderWindow &window)
    {
        window.draw(sprite);
    }

 
};

#endif //_QUEEN_H