#include <iostream>
using namespace std;

int main() {
    int amt, r2000 = 0, r500 = 0, r200 = 0, r100 = 0, count = 0;

    cout << "Enter The Amount in Rupees : \n\n";
    cin >> amt;

    if (amt >= 2000) {
        r2000 = amt / 2000;
        amt %= 2000;
        cout << "\nTotal Number Of 2000 Rupees Notes : " << r2000;
    }

    if (amt >= 500) {
        r500 = amt / 500;
        amt %= 500;
        cout << "\nTotal Number Of 500 Rupees Notes : " << r500;
    }

    if (amt >= 200) {
        r200 = amt / 200;
        amt %= 200;
        cout << "\nTotal Number Of 200 Rupees Notes : " << r200;
    }

    if (amt >= 100) {
        r100 = amt / 100;
        amt %= 100;
        cout << "\nTotal Number Of 100 Rupees Notes : " << r100;
    }

    count = r2000 + r500 + r200 + r100;
    cout << "\n\nTotal Number Of Notes Require : \n\n" << count;

    return 0;
}
