#include "Ambassador.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
using namespace std;
namespace coup {
    Ambassador::Ambassador(const Game &game, const string& name): Player(game,name) {

    }
    Ambassador::~Ambassador()
    {
    }

    void  Ambassador::transfer(Duke &duke,Assassin &assassin){

    }


}