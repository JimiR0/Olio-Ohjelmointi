#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"
#include <iostream>

using namespace std;

class Katutaso : public Kerros
{
public:
    Katutaso();

    void maaritaAsunnot();
    double laskeKulutus(double hinta);
private:
    Asunto katuas1;
    Asunto katuas2;
};

#endif // KATUTASO_H

