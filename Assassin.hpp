#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
using namespace std;
namespace coup {
    class Assassin: public Player {
    private:
        Game game;
    public:
        Assassin(Game game,string name);
        virtual void coup(Player play);
        ~Assassin();
    };
}