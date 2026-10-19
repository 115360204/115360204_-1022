#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h;//hours
    double hr;//hourlyRate
    double s = 0;//salary

    cout << fixed << setprecision(2);
    cout << "Enter number of hours worked(-1 to end):";

    while (cin >> h && h != -1) {
        cout << "Enter hourly rate of the worker($00.00):";
        cin >> hr;

        if (h <= 40) {
            s = h * hr;
        }

        else {
            s = 40 * hr + (h - 40) * hr * 1.5;
        }

        cout << "Salary is:$" << s << endl;
        cout << endl << "Enter number of hours worked(-1 to end):";
    }
     return 0;
}