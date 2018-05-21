

#include "Player.h"
using Coordinate=Pair;



class Champion : public Player{

public:
    const string name() const override { return "Naor&Shoval"; }
    const Coordinate play(const Board& board) override;

};