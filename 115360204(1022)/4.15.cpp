#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    double p = 5000.0;//principal
    double r;//rate
    int y;//years

    for(r = 0.10; r <= 0.12; r+=0.005){
        cout << fixed << setprecision(2);
        cout << "Interest Rate: " << r*100 << "%" << endl;
        cout << "Year\tAmount on deposit" << endl;

        for(y = 1; y <= 15; y++){
            double a = p * pow(1.0 + r, y);
            cout << y << "\t$" << a << endl;
        }
        cout << endl;

    }

    return 0;
}