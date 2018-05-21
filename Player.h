#pragma once
#include "Board.h"
using Coordinate=Pair;


class Player{

public:
    char myChar;
    virtual const Coordinate play(const Board& board) =0;
    virtual const string name() const=0 ;
    virtual char getChar() const { return myChar;};
};