#include <iostream>
#include "pytanie.h"
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{
    int suma=0;

    Pytanie p[5];

    for (int i=0; i<5; ++i)
    {

        cout << "QUIZ O ZNAJOMOSCI REALU MADRYT"<<endl<<endl;p[i].nr=i+1;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        suma+=p[i].punkt;

        Sleep(500);
        system("cls");
    }





    cout <<"KONIEC QUIZU! PUNKTY="<<suma;


    return 0;
}
