#include "asunto.h"

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

void Asunto::maarita(int asukasMaara, int neliot)
{
    cout << "Asunto maaritetty ";
    cout << "asukkaita " << asukasMaara << " nelioita " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    double kulutus = hinta * asukasMaara * neliot;
    //cout << "Asunnon kulutus kun hinta=" << hinta << " on " << kulutus << endl;
    return kulutus;
}
