
#include "TicTacToe.h"


TicTacToe::TicTacToe(uint size) : myBoard(size){

}


void TicTacToe::play(Player& xPlayer , Player& oPlayer){

    myBoard = '.';
    xPlayer.myChar = 'X';
    oPlayer.myChar = 'O';
    for(uint i=0; i<myBoard.size()*myBoard.size(); i++){
        try {
            Pair pr = xPlayer.play(myBoard);
            if (myBoard[pr] != '.') {
                Winner = &oPlayer;
                return;
            }

            myBoard[pr] = xPlayer.myChar;
            if (check(pr)) {
                Winner = &xPlayer;
                return;
            }

            if (isFull()) {
                Winner = &oPlayer;
                return;
            }

        }
        catch(...){
            Winner = &oPlayer;
            return;
        }


        try{
            Pair pr = oPlayer.play(myBoard);
            if(myBoard[pr]!='.'){
                Winner = &xPlayer;
                return;
            }

            myBoard[pr] = oPlayer.myChar;
            if(check(pr)){
                Winner = &oPlayer;
                return;;
            }
        }
        catch(...){
            Winner = &xPlayer;
            return;
        }
   }

}


bool TicTacToe::check(Pair pr){

    bool state = true;
    for(uint i=0; i<myBoard.size(); i++){
        if(myBoard[pr].getChar()!=myBoard[{pr.getX(),i}].getChar())
            state = false;
    }

    if(state) return state;
    state = true;
    for(uint i=0; i<myBoard.size(); i++){
        if(myBoard[pr].getChar()!=myBoard[{i,pr.getY()}])
            state = false;
    }

    if(state) return state;
    state = true;
    for(uint i=0; i<myBoard.size(); i++){
        if(myBoard[pr].getChar()!=myBoard[{i,i}])
            state = false;
    }

    if(state) return state;
    state = true;
    for(uint i=0; i<myBoard.size(); i++) {
        if (myBoard[pr].getChar() != myBoard[{i, myBoard.size()-1- i}])
            state = false;

    }
    if(state) return state;
    return false;

}


bool TicTacToe:: isFull() {

    for(uint i=0; i<myBoard.size(); i++){
        for(uint j=0; j<myBoard.size(); j++){
            if(myBoard[{i,j}]=='.')
                return false;
        }
    }

    return true;

}