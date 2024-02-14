#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include "kerros.h"
#include "asunto.h"
#include <iostream>

using namespace std;

class Kerrostalo
{
public:
    Kerrostalo();

    double laskeKulutus(double);
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};
#endif // KERROSTALO_H

