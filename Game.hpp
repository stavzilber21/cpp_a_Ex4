#include <iostream>
#include <vector>
#include <string>
#pragma once
using namespace std;

namespace coup {

    class Game {
    private:
        vector<string> Players;
    public:
        Game();
        string static turn();
        vector<string>players();
        string static winner();
        ~Game();
    };
}



