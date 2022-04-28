#include "Game.hpp"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace coup {
    Game::Game(){

    }
    Game::~Game(){

    }

    string Game::turn(){
        return "";
    }
    vector<string> Game:: players(){
        return this->Players;
    }
    string Game::winner(){
        return "";
    }


}
