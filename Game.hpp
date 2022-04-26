#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace coup {
    class Game {
    private:
        vector<string> Players;
    public:
        Game();
        void turn();
        vector<string> players();
        string winner();
        ~Game();
    };
}



