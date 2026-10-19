#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int an;//accountNumber
    double bb,tch,tcr,cl,nb;//beginningBalance,totalCharges,totalCredits,creditLimit,newBalance;

    cout << fixed<<setprecision(2);
    cout << "Enter account number (-1 to end):";

    while (cin >> an && an != -1) {
        cout << "Enter beginning balance:";
        cin >> bb;
        cout << "Enter total charges:";
        cin >> tch;
        cout << "Enter total credits:";
        cin >> tcr;
        cout << "Enter credit limit:";
        cin >> cl;

        nb = bb + tch - tcr;

        if (nb > cl) {
            cout << "Account:" << an << endl;
            cout << "Credit limit:" << cl << endl;
            cout << "Balance:" << nb << endl;
            cout << "Credit card limit exceeded." << endl;
        }

        cout << "Enter account number (-1 to end):" << endl;
    }

    return 0;
}