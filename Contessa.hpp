#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
#include "Assassin.hpp"
using namespace std;
namespace coup {
    class Contessa: public Player {
    private:
        Game game;
        string str;
    public:
        Contessa(Game game,string name);
        void block(Assassin assassin);
        ~Contessa();
    };
}