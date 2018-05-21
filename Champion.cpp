#include "Champion.h"

const Coordinate Champion::play(const Board& board){
    uint x = 0;
    uint y = board.size()-1;
    uint temp;
    uint count = 0;
    while(x<board.size() && y>=0) {
        Coordinate c{x, y};
        if (board[c] == '.')
            return c;

        if(count<2) {
            temp = x;
            x = y;
            y = temp;
            count++;
        }
        else if(count == 2){
            x++;
            y--;
            count = 0;
        }

    }

    return {0,0};  // did not find an empty square - play on the top-left

}

