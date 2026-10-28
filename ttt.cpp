```cpp
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    cout << "Крестики-нолики" << endl << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "---+---+---" << endl;
    }

    int row, col;
    cout << endl << "Введите номер строки (0-2) и столбца (0-2) для хода X: ";
    cin >> row >> col;

    board[row][col] = 'X';

    cout << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << board[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "---+---+---" << endl;
    }

    return 0;
}

