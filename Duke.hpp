#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Assassin.hpp"
#include "Game.hpp"
#pragma once
using namespace std;
namespace coup {
    class Duke: public Player{
    private:
        Game game;
    public:
        Duke(const Game &game, const string& name);
        void tax();
        void block(const Assassin &assassin);
        ~Duke();
    };
}