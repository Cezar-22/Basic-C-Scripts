#include <iostream>

using namespace std;

int main() {
    // Definirea unui vector de intregi cu 5 elemente
    int v[5] = {10, 20, 30, 40, 50};
    int counter;
    cout << "Introdu un numar mai mic decat 5: ", cin >> counter;
    cout << "Elementul de la pozitia " << counter << " este: " << v[counter];
    return 0;
}