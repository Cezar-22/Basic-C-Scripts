#include <iostream>

using namespace std;

int main() {
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int b[5][5] = {2, 4, 6, 8, 10,
                   12, 14, 16, 18, 20,
                   22, 24, 26, 28, 30,
                   32, 34, 36, 38, 40,
                   42, 44, 46, 48, 50};
    int row, col;
    for (int i = 0; i <5; i++) {
        for (int j = 0; j <5; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Introdu numarul randului: ", cin >> row;
    cout << "Introdu numarul coloanei: ", cin >> col;
    cout << "Elementul de la pozitia (" << row << ", " << col << ") este: " << b[row-1][col-1] << endl;
    cout << "Introdu numarul randului (max 5): ", cin >> row;
    cout << "Introdu numarul coloanei (max 5): ", cin >> col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}