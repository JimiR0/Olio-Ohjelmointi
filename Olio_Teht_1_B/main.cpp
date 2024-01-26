#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum)
{
    int arvaus;
    int maara=0;
    int satluku;

    srand(static_cast<unsigned int>(time(0)));
    satluku = rand() % maxnum + 1;
    cout << satluku << endl;

    do
    {
        cout << "Guess a number between 1-" << maxnum << endl;
        cin >> arvaus;
        maara++;

        if(arvaus == satluku)
        {
            cout << "Correct!" << endl;
            cout << "You took " << maara << " guesses" << endl;
        }
        else
        {
            cout << "Wrong... Try again" << endl;
        }
    }
    while (arvaus != satluku);
}

int main()
{
    int maxnum = 40;
    game(maxnum);


    return 0;
}
