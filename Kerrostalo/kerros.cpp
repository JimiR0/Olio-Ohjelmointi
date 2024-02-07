#include "kerros.h"

Kerros::Kerros()
{
    cout << "kerros luotu" << endl;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4kpl kerroksen asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + as3.laskeKulutus(hinta) + as4.laskeKulutus(hinta);
    //cout << "Kerroksen kulutus kun hinta = " << hinta << " on " << kulutus << endl;
    return kulutus;
}

