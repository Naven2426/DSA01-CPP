#include <iostream>
using namespace std;

int main() {
    char a;
    int s = 0, c = 0, flag = 0;

    while (true) {
        cin >> a;
        if (a == '*') {
            cout << "Value is * so input is terminate\n";
            break;
        } else if (a >= 65 && a <= 90) {
            c++;
        } else if (a >= 97 && a <= 122) {
            s++;
        } else {
            flag = 1;
            cout << "Invalid Input!!!";
            break;
        }
    }

    if (flag == 0) {
        cout << "Caps : " << c << "\n";
        cout << "Small : " << s;
    } else {
        cout << "Invalid Input!!!";
    }

    return 0;
}
