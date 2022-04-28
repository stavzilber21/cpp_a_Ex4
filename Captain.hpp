#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"
#pragma once
using namespace std;
namespace coup {
    class Captain: public Player {
    private:
        Game game;
    public:
        Captain (const Game &game, const string& name);
        void steal (const Contessa &con);
        void block(const Duke &duke);

        ~Captain();
    };
}