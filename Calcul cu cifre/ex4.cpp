#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Introduceti un numar: ", cin >> n;
    int Euler = n;
    int temp = n;
    int div = 2;
    while(div <= n / 2)
    {
        if (temp % div == 0)
        {
            while (temp % div == 0)
            {
                temp = temp / div;
            }
            Euler = Euler*(1-float(1)/div);
        }
        div++;
    } 
    cout << "Functia Euler pentru numarul " << n << " este: " << Euler << endl;
    return 0;
}