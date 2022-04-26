#include "Game.hpp"
#include "Ambassador.hpp"
#include <iostream>
#include <vector>
#include <string>
#include "Player.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Duke.hpp"
#include "doctest.h"
using namespace std;
using namespace coup;
#include <stdexcept>
TEST_CASE("Good input"){
    Game game1{};
    Assassin as1{game1, "stav"};
    Assassin as2{game1, "noa"};
    as1.foreign_aid();
    as1.income();
    as1.income();
    CHECK((as1.coins() == 4));
    CHECK(as1.role()==Assassin);
    //now as1 have 4 coins
    as1.coup(Player(noa));

}