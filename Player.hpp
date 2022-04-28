#include <iostream>
#include <vector>
#include <string>
#include "Game.hpp"
#pragma once
using namespace std;

namespace coup {
    class Player{
    private:
        int coin;
        string name;
        Game game;
//        bool turn;
    public:
        Player(const Game &game, const string& name);
        void income();
        void foreign_aid();
        void coup(const Player &play);
        int static coins();
        string static role();
        ~Player();
    };
}