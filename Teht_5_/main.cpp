/*#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"*/
#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{
    Kerrostalo *kerrostalo_olio = new Kerrostalo();
    kerrostalo_olio->laskeKulutus(1);
    delete kerrostalo_olio;



    return 0;
}
