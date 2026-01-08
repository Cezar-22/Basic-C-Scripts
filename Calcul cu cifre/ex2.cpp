#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Introduceti un numar: ", cin >> n;
    int temp = n;
    int div = 2;
    int divCount = 1;
    int power = 0;
    while(div <= n / 2)
    {
        power = 0;
        if (temp % div == 0)
        {
            while (temp % div == 0)
            {
                temp = temp / div;
                power++;
            }
        }
        div++;
        divCount = divCount * (power + 1);
    }
    cout << "Numarul " << n << " are " << divCount << " divizori." << endl;
    return 0;
}