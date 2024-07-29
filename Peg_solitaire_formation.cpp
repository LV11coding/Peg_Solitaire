#include <iostream>
using namespace std;

int main(){
    int tx[5] = {0, 0, 0, 0, 0};
    int ix[5] = {0, 0, 0, 0, 0};
    int en = 0;
    int var = 0;
   
    while (en < 5){
        
    cout << "Enter horizontal: ";
    cin >> tx[var];
    cout << endl << "Enter vertical: ";
    cin >> ix[var];
    
    for (int i = 0; i < 7; i++){
        for (int t = 0; t < 7; t++){
            if ( t < 2 && i < 2){
                cout << ' ';
            }
            else if ( t > 4 && i < 2){
                cout << ' ';
            }
            else if ( i > 4 && t < 2){
                cout << ' ';
            }
            else if ( i > 4 && t > 4){
                cout << ' ';
            }
            else if ( i == 3 && t == 3){
                cout << ' ';
            }
            else {
                if ( i == ix[var] && t == tx[var]){
                    cout << ' ';
                }
                else if ( i == ix[0] && t == tx[0]){
                    cout << ' ';
                }
                else if ( i == ix[1] && t == tx[1]){
                    cout << ' ';
                }
                else if ( i == ix[2] && t == tx[2]){
                    cout << ' ';
                }
                else if ( i == ix[3] && t == tx[3]){
                    cout << ' ';
                }
                else {
                    cout << '*';
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

// unomptimised, only for limited amount of removes
