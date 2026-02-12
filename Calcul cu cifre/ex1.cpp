#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Introduceti doua numere: " << endl;
    cout << "a = ", cin >> a;
    cout << "b = ", cin >> b;
    int divCount = 0;
    int maxDivCount = 0;
    int finalNumber;
    for(int n=a; n<=b; n++) {
        int div = 2;
        while(div <= n/2) {
            if(n % div == 0) {
                divCount++;
            }
            div++;
        }
        div = 2;
        if (divCount > maxDivCount) {
            maxDivCount = divCount;
            finalNumber = n;
        }
        divCount = 0;
    }
    cout << "Numarul cu cele mai multe divizori intre " << a << " si " << b << " este: " << finalNumber << " cu " << maxDivCount << " divizori." << endl;
    return 0;
}