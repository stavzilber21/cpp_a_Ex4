#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
using namespace std;

namespace coup {
    Player::Player(const Game &game, const string &name) {
        this->name=name;
        this->game=game;
        this->coin=0;
    }
    Player::~Player()
    {
    }
    void Player::income() {

    }
    void Player::foreign_aid() {

    }
    void Player::coup(const Player &play) {

    }
    int Player::coins() {
        return 0;
    }
    string Player::role(){
        return "";
    }
}