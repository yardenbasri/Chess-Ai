#pragma once
#include "Piece.h"
class Queen :
    public Piece
{
public:
    Queen(sf::Texture& pieceTex, sf::Vector2f position, int isWhite, sf::Vector2i indexes, std::string type);
    int IsPossibleMove(sf::Vector2i dest, Piece* pieces[DIMENSIONS][DIMENSIONS]);
  
};
