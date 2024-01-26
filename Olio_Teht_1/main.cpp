#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int arvaus;
    int määrä = 0;

    srand(static_cast<unsigned int>(time(0)));
    int satluku = rand() % 39+1;
    cout << satluku << endl;

    do
    {
        cout << "Arvaa luku väliltä 1-40" << endl;
        cin >> arvaus;
        määrä++;

        if(arvaus == satluku)
        {
            cout << "Arvasit oikein!" << endl;
        }
        else
        {
            cout << "Väärin... Yritä uudelleen" << endl;
        }
    }
    while (arvaus != satluku);

    return 0;
}
