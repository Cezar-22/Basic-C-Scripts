#include <iostream>
using namespace std;

int main() {
    int nr;
    cout << "Introdu un numar: ", cin >> nr;
    nr = abs(nr);
    int temp = nr;
    int maxCif = 0;
    int counter = 0;
    while (temp != 0)
    {
        int cif = temp % 10;
        if (cif > maxCif)
        {
            maxCif = cif;
        }
        temp = temp / 10;
    }
    cout << "Cea mai mare cifra este " << maxCif << endl;
    while (nr != 0)
    {
        int cif = nr % 10;
        if (cif == maxCif)
        {
            counter++;
        }
        nr = nr / 10;
    }
    cout << "Aceasta apare de " << counter << " ori" << endl;
    return 0;
}