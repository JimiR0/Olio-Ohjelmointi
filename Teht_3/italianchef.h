#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

class ItalianChef: public Chef
{
public:
    ItalianChef(string chefName,int j,int v);
    ~ItalianChef();

    void makePasta();
    string getName();

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
