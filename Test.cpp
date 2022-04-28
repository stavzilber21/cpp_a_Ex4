#include "Game.hpp"
#include "Ambassador.hpp"
#include "Player.hpp"
#include "Assassin.hpp"
#include "Captain.hpp"
#include "Duke.hpp"
#include "Contessa.hpp"
#include "doctest.h"
#include <iostream>
#include <vector>
#include <string>
#include <exception>
using namespace std;
using namespace coup;
#include <stdexcept>
TEST_CASE("Tests"){
    Game game1{};
    Assassin as1{game1, "stav"};
    Duke duke(game1, "noa");
    Ambassador ambassador{game1, "Meirav"};
    Captain captain{game1, "Reut"};
    Contessa contessa{game1, "Gilad"};

    CHECK(game1.turn() == "stav");

    CHECK_EQ(as1.coins(), 0);
    CHECK_EQ(captain.coins(), 0);
    CHECK(game1.players().size()==5);


    as1.foreign_aid();
    as1.income();
    as1.income();

    CHECK(as1.coins() == 4); //now as1 have 4 coins
    CHECK_FALSE(as1.coins() == 1);
    CHECK(as1.role()=="Assassin");
    CHECK_EQ(ambassador.role(), "Ambassador");


    CHECK_THROWS(ambassador.transfer(duke,as1)); //duke.coins == 0 he cant transfer

    duke.tax();
    CHECK(duke.coins()==3);

    duke.income(); //now duke have 4 coins

    CHECK_THROWS(as1.coup(duke)); //he dont have 7 coins

    as1.foreign_aid();
    as1.income();
    as1.income(); //now as1 have 8 coins

    as1.coup(duke); //now it is ok
    CHECK_THROWS(duke.coins());

    CHECK(game1.players().size()==4); //duke isnt in play

    contessa.income();
    contessa.foreign_aid();
    CHECK(contessa.coins()==3); //now contessa have 3 coins

    captain.steal(contessa);
    CHECK(captain.coins()==1);
    CHECK(contessa.coins()==1); //now contessa have 1 coins

    captain.foreign_aid();
    captain.foreign_aid();
    captain.foreign_aid(); //now captain have 8 coins
    CHECK(captain.coins()==8);
    captain.coup(contessa);
    CHECK_THROWS(contessa.coins());
    CHECK(game1.players().size()==3);

    CHECK_FALSE(game1.winner()=="stav");

    CHECK_THROWS(game1.winner()); //there are more one player



}
