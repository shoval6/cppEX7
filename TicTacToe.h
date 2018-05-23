#pragma once
#include "Board.h"
#include "Player.h"

class TicTacToe{

    Board myBoard;
    Player* Winner;

public:

    TicTacToe(uint size);
    void play(Player& xPlayer , Player& oPlayer);
    const Board& board() const {return myBoard;};
    const Player& winner() const {return *Winner;}
    bool check(Pair pr);
    bool isFull();

};