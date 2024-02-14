#include "katutaso.h"

Katutaso::Katutaso()
{
    cout <<"Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl kerroksen asuntoja" << endl;
    katuas1.maarita(2,100);
    katuas2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta)
{
    double kulutus = katuas1.laskeKulutus(hinta) + katuas2.laskeKulutus(hinta) + Kerros::laskeKulutus(hinta);
    //cout << "Katutason ja perityn kerroksen kulutus, kun hinta on = " << hinta << " on " << kulutus << endl;
    return kulutus;
}

