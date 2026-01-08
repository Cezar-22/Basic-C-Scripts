#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int divSum = 1;
    cout << "Introduceti un numar: ", cin >> n;
    int temp = n;
    int div = 2;
    int power = 0;
    while (div <= n / 2)
        {
            while (temp % div == 0)
            {
                power++;
                temp = temp / div;
            }
            power++;
            divSum = divSum * (pow(div, power) - 1) / (div - 1);
            power = 0;
            div++;
        }
    cout << "Suma divizorilor numarului " << n << " este: " << divSum << endl;
    return 0;
}