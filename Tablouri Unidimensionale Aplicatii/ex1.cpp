#include <iostream>

using namespace std;

int main() {
    int n;
    int c = 0;
    cout << "Introdu un numar (2-50): ", cin >> n;
    int v[n];
    while (c < n) {
        cout << "v[" << c << "] = ", cin >> v[c];
        c++;
    }
    c = 0;
    int max = v[0];
    while (c < n) {
        if (v[c] <= max) {
            v[c] = 0;
        }
        c++;
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}