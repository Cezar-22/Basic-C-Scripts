#include <iostream>

using namespace std;

int main() {
    int v[20] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int counter;
    int arrayCounter;
    cout << v[0] << endl;
    cout << v[5] << endl;
    cout << v[10] << endl;
    cout << "Introdu un numar: ", cin >> counter;
    cout << "Elementul de la pozitia " << counter << " este: " << v[counter] << endl;
    cout << "Introdu un numar mai mic decat 20: ", cin >> arrayCounter;
    for (int i=0; i<=arrayCounter; i++) {
        cout << v[i] << " " << endl;
    }
    return 0;
}