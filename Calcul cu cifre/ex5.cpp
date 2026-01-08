#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int c = 0;
    int count = 0;
    cout << "Introduceti un numar: ", cin >> n;
    int v[n];
    for(c=0; c<n; c++) {
        cout << "v[" << c << "] = ", cin >> v[c];
    }
    c = 0;
    while(c < n) {
        int primeCheck = 1;
        if (v[c] <= 1) {
            primeCheck = 0;
        } else if (v[c] > 2) {
            for (int i = 2; i <= v[c] / 2; i++) {
                if (v[c] % i == 0) {
                    primeCheck = 0;
                    break;
                }
            }
        }
        int fibCheck = 0;
        if (v[c] >= 0) {
            int a = 0, b = 1;
            while (a < v[c]) {
                int temp = a + b;
                a = b;
                b = temp;
            }
            if (a == v[c]) fibCheck = 1;
        }
        if (primeCheck == 1 && fibCheck == 1) {
            count++;
        }
        c++;
    }
    cout << "Count: " << count << endl;
    return 0;
}