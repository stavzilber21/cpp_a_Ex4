#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Game.hpp"
using namespace std;
namespace coup {
    class Captain: public Player {
    private:
        Game game;
    public:
        Captain (Game game,string name);
        void steal (string name);

        ~Captain();
    };
}