#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
#pragma once
using namespace std;
namespace coup {
    class Assassin: public Player {
    private:
        Game game;
    public:
        Assassin(const Game &game, const string& name);
//        void coup(Player play);
        ~Assassin();
    };
}