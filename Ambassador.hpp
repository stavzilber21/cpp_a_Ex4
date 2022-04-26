#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
using namespace std;
namespace coup {
    class Ambassador: public Player {
    private:
        Game game;
    public:
        Ambassador(Game game1, string name);
        void transfer(string name1, string name2);
        ~Ambassador();
    };
}