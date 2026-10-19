#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double s;//sales

    cout << fixed << setprecision(2);
    cout << "Enter sales in dollars(-1 to end):";

    while (cin >> s && s != -1) {
        double salary = 200+0.09*s;
        cout << "Salary is:$" << salary << endl;
        cout << endl <<"Enter sales in dollars(-1 to end):";
       
    }

    return 0;
}