#include <iostream>
using namespace std;

int main() {
    int nr1, nr2;;
    cout << "introduceti un numar: ", cin >> nr1;
    cout << "introduceti un numar: ", cin >> nr2;
    while (nr1 != nr2)
    {
        if (nr1 > nr2)
            nr1 = nr1 - nr2;
        else
            nr2 = nr2 - nr1;
    } 
    cout << "CMMDC este: " << nr1 << endl;
    return 0;
}

