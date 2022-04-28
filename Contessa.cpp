#include "Contessa.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
#include "Assassin.hpp"
using namespace std;
namespace coup {

    Contessa::Contessa(const Game &game, const string& name): Player(game, name){

    }
    Contessa::~Contessa()
    {
    }
    void Contessa::block(const Player &p){

    }

}