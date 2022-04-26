#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Assassin.hpp"
#include "Game.hpp"
using namespace std;
namespace coup {
    class Duke: public Player{
    private:
        Game game;
    public:
        Duke(Game game,string name);
        void tax();
        void block(Assassin assassin);
        ~Duke();
    };
}