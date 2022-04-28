#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
#include "Duke.hpp"
#include "Assassin.hpp"
#pragma once
using namespace std;
namespace coup {
    class Ambassador: public Player {
    private:
        Game game;
    public:
        Ambassador(const Game &game, const string& name);
        void transfer(Duke &duke,Assassin &assassin);
        ~Ambassador();
    };
}