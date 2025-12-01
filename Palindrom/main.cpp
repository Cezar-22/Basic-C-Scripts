#include <iostream>
using namespace std;

int main() {
    int nr;
    int reverse = 0;
    cout << "Introduceti un numar: ", cin >> nr;
    nr = abs(nr);
    int temp = nr;
    while (temp != 0) {
        int cif = temp % 10;
        reverse = reverse * 10 + cif;
        temp = temp / 10;
    }
    if (reverse == nr)
        cout << "Numarul " << nr << " este palindrom." << endl;
    else
        cout << "Numarul " << nr << " nu este palindrom." << endl;
    return 0;
}