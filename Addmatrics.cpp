#include <iostream>
using namespace std;

int main() {
    int u[3][3] = {{1, 3, 4}, {2, 4, 3}, {3, 4, 5}};
    int v[3][3] = {{1, 3, 4}, {2, 4, 3}, {1, 2, 4}};
    int w[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            w[i][j] = u[i][j] + v[i][j];
            cout << w[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
