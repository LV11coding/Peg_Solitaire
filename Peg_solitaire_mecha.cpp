#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int tx[32];
    int ix[32];
    fill_n(tx, 32, 0);
    fill_n(ix, 32, 0);
    int en = 0;
    int var = 0;
    bool test = true;

    while (en < 32) {
        cout << "Enter horizontal: ";
        cin >> tx[var];
        cout << "Enter vertical: ";
        cin >> ix[var];

        for (int i = 0; i < 7; i++) {
            for (int t = 0; t < 7; t++) {
                if (t < 2 && i < 2) {
                    cout << ' ';
                } else if (t > 4 && i < 2) {
                    cout << ' ';
                } else if (i > 4 && t < 2) {
                    cout << ' ';
                } else if (i > 4 && t > 4) {
                    cout << ' ';
                } else if (i == 3 && t == 3) {
                    cout << ' ';
                } else {
                    bool match = false;
                    for (int z = 0; z <= var; z++) {
                        if (i == ix[z] && t == tx[z]) {
                            match = true;
                            break;
                        }
                    }
                    if (match) {
                        cout << ' ';
                    } else {
                        cout << 'x';
                    }
                }
            }
            cout << endl;
        }
        var++;
        en++;
    }
    return 0;
}
