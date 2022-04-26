#include <iostream>
#include <vector>
#include <string>
#include "Game.hpp"
using namespace std;

namespace coup {
    class Player{
    private:
        int coin;
        string name;
        bool turn;
    public:
        Player(Game game, string name);
        void income();
        void foreign_aid();
        void coup(Player play);
        int coins();
        string role();
        ~Player();
    };
}