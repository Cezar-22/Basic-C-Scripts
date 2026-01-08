#include <iostream>

using namespace std;

int main() {
    int n, x;
    cout << "Introdu un numar (2-50): ", cin >> n;
    cout << "Introdu un numar: ", cin >> x;
    int v[n];
    for (int i = 0; i < n; i++) {
        cout << "v[" << i << "] = ", cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            v[i] -= x;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}