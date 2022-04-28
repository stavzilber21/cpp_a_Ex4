#include "Captain.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
using namespace std;
namespace coup {

    Captain::Captain(const Game &game, const string& name): Player(game,name){

    }
    Captain::~Captain()
    {
    }
    void Captain::steal (const Contessa &con) {

    }
    void Captain::block(const Duke &duke){

    }
}