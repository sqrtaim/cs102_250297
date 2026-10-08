#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 6 || n == 28 || n == 496 || n == 8128 || n == 33550336) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}