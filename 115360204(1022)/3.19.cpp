#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double p,r;//principal, rate
    int d;//days

    cout << fixed << setprecision(2);
    cout << "Enter loan principal(-1 to end):";

    while (cin >> p && p != -1) {
        cout << "Enter interest rate:";
        cin >> r;
        cout << "Enter term of the loan in days:";
        cin >> d;

        double i = p*r*d/365;
        cout << "The interest charge is:$" << i << endl;
        cout << endl <<"Enter loan principal(-1 to end):";
       
    }

    return 0;
}