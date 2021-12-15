#include <iostream>

using namespace std;

class Pytanie
{
public:
    string tresc;
    string a, b, c, d;
    int nr;
    string poprawna;
    string odp;
    int punkt;

    void wczytaj();
    void zadaj();
    void sprawdz();
};
