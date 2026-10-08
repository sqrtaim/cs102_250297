#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int tens = num / 10;
    int ones = num % 10;
    if (tens == 9) {
        cout << "XC";
    } else if (tens == 4) {
        cout << "XL";
    } else {
        if (tens >= 5) {
            cout << "L";
            tens -= 5;
        }
        if (tens >= 1) cout << "X";
        if (tens >= 2) cout << "X";
        if (tens >= 3) cout << "X";
    }
    if (ones == 9) {
        cout << "IX";
    } else if (ones == 4) {
        cout << "IV";
    } else {
        if (ones >= 5) {
            cout << "V";
            ones -= 5;
        }
        if (ones >= 1) cout << "I";
        if (ones >= 2) cout << "I";
        if (ones >= 3) cout << "I";
    }
    cout << endl;
    return 0;
}