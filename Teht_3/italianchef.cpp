#include "italianchef.h"

ItalianChef::ItalianChef(string chefName,int j,int v) : Chef(chefName)
{
    cout << "Italian chef " << name << " konstruktori" << endl;
    jauhot = j;
    vesi = v;
}

ItalianChef::~ItalianChef()
{

}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;

}

string ItalianChef::getName()
{
    return name;
}
