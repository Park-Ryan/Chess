#ifndef _KING_H
#define _KING_H

#include "piece.h"
#include "grid.h"
#include <SFML/Graphics.hpp>

class King: public Piece{
public:
//member variables

sf::Sprite sprite; 
sf::Texture texture;
    King(std::vector<int> pos, bool color1){ 
        if (color1){
        color = color1;
        texture.loadFromFile("Sprites/wking.png");
        sprite.setTexture(texture);

        sf::Vector2f targetSize(100.0f, 100.0f);
        sprite.setScale(
        targetSize.x / sprite.getGlobalBounds().width,
        targetSize.y / sprite.getGlobalBounds().height
        );
        }
        else{
        color = color1;
        texture.loadFromFile("Sprites/bking.png");
        sprite.setTexture(texture);

        sf::Vector2f targetSize(100.0f, 100.0f);
        sprite.setScale(
        targetSize.x / sprite.getGlobalBounds().width,
        targetSize.y / sprite.getGlobalBounds().height
        );
        }
        position = pos;
    }
            
    sf::Sprite getSprite(){
        return sprite;
    }

    std::vector<int> getPosition(){
        return position;
    }
    
    void setPosition(int x, int y){
        sprite.setPosition(x,y);
    }
    void draw(sf::RenderWindow& window){
            window.draw(sprite);
        }

        void move(int a, int b){
        sprite.setPosition(a, b);
    }

    std::vector<std::vector<int>> getAvailableMoves(Board* board)
    {
        std::vector<std::vector<int>> AvailableMoves;
        //horizontal check
        if(board->getGrid({this->position[0]+1,this->position[1]})->getPiece() == nullptr)
        {
            AvailableMoves.push_back({this->position[0]+1,this->position[1]});
        }
        if(board->getGrid({this->position[0]-1,this->position[1]})->getPiece() == nullptr)
        {
            AvailableMoves.push_back({this->position[0]-1,this->position[1]});
        }
        //vertical check
        if(board->getGrid({this->position[0],this->position[1]+1})->getPiece() == nullptr)
        {
            AvailableMoves.push_back({this->position[0],this->position[1]+1});
        }
        if(board->getGrid({this->position[0],this->position[1]-1})->getPiece() == nullptr)
        {
            AvailableMoves.push_back({this->position[0],this->position[1]-1});
        }
        //diagonal check
        if(board->getGrid({this->position[0]+1,this->position[1]+1})->getPiece() == nullptr)
        {
            AvailableMoves.push_back({this->position[0]+1,this->position[1]+1});
        }
        if(board->getGrid({this->position[0]-1,this->position[1]-1})->getPiece() == nullptr)
        {
            AvailableMoves.push_back({this->position[0]-1,this->position[1]-1});
        }
        if(board->getGrid({this->position[0]-1,this->position[1]+1})->getPiece() == nullptr)
        {
            AvailableMoves.push_back({this->position[0]-1,this->position[1]+1});
        }
        if(board->getGrid({this->position[0]+1,this->position[1]-1})->getPiece() == nullptr)
        {
            AvailableMoves.push_back({this->position[0]+1,this->position[1]-1});
        }
        return AvailableMoves;
    }
};

#endif //_KING_H