#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class Asunto
{
public:
    Asunto();

    int asukasMaara = 2;
    int neliot = 100;

    void maarita(int, int);
    double laskeKulutus(double);
};

#endif // ASUNTO_H
