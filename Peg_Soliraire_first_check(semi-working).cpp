#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int tx[33];
    int ix[33];
    fill_n(tx, 33, 0);
    fill_n(ix, 33, 0);
    tx[0] = 3;
    ix[0] = 3;
    int en = 0;
    int var = 1;

    while (en < 32)
    {
        cout << "Enter vertical: ";
        cin >> tx[var];
        cout << "Enter horizontal: ";
        cin >> ix[var];

        for (int i = 0; i < 7; i++)
        {
            for (int t = 0; t < 7; t++)
            {
                if (t < 2 && i < 2)
                {
                    cout << ' ';
                }
                else if (t > 4 && i < 2)
                {
                    cout << ' ';
                }
                else if (i > 4 && t < 2)
                {
                    cout << ' ';
                }
                else if (i > 4 && t > 4)
                {
                    cout << ' ';
                }
                else if (i == 3 && t == 3)
                {
                    cout << ' ';
                }
                else
                {
                    bool match = false;
                    for (int z = 0; z <= var; z++)
                    {
                        if (i == ix[z] && t == tx[z])
                        {
                            match = true;
                            break;
                        }
                    }
                    if (match)
                    {
                        for (int f = 0; f < 33; f++)
                        {
                            if (tx[var] == tx[f] && ix[var] - 2 == ix[f])
                            {
                                cout << ' ';
                                break;
                            }
                            else if (tx[var] + 2 == tx[f] && ix[var] == ix[f])
                            {
                                cout << ' ';
                                break;
                            }
                            else if (tx[var] == tx[f] && ix[var] + 2 == ix[var])
                            {
                                cout << ' ';
                                break;
                            }
                            else if (tx[var] - 2 == tx[f] && ix[var] == ix[f])
                            {
                                cout << ' ';
                                break;
                            }
                            else if (f > 31)
                            {
                                cout << 'x';
                                break;
                            }
                        }
                    }
                    else
                    {
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

// the code checks all positions, it needs to check just the active one
