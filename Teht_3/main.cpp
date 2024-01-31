#include <iostream>
#include "chef.h"
#include "italianchef.h"


using namespace std;

int main()
{
    Chef chef_olio("Jyrki");
    ItalianChef italian_olio("Mario",250,100);

    chef_olio.makeSalad();
    italian_olio.makePasta();
    chef_olio.makeSoup();
}
