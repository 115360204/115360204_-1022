#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 7;
    int b = (a+1)/2;

    for (int i = 1; i <= b; i++){
        for (int space = 1; space <= b-i; space++){
            cout << " ";
        }
        for (int star = 1; star <= 2*i-1; star++){
            cout << "*";
        }
        cout << endl;
    }

    for (int i = b-1; i >= 1; i--){
        for (int space = 1; space <= b-i; space++){
            cout << " ";
        }
        for (int star = 1; star <= 2*i-1; star++){
            cout << "*";
        }
        cout << endl;
    }
}
