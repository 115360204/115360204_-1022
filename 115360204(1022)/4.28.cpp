#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int pc;//paycode
    int s;//salary

    cout << fixed << setprecision(2);
    cout << "Enter employee paycode (1:Manager, 2: Hourly Worker, 3: Commission Worker, 4: Pieceworker, -1 to end):";

    while (cin >> pc && pc != -1) {
        switch (pc) {
            case 1: {
                double ws;//weekly salary
                cout << "Enter weekly salary:";
                cin >> ws;
                cout << "Manager's weekly salary is:$" << ws << endl;
                break;
            }
            case 2: {
                double hw, h;
                cout << "Enter hourly wage:";
                cin >> hw;
                cout << "Enter total hours worked:";
                cin >> h;

                if (h <= 40) {
                   cout << "Hourly Worker's weekly salary is:$" << hw * h << endl;
                } 
                else {
                   cout << "Hourly Worker's weekly salary is:$" << 40 * hw + (h - 40) * hw * 1.5 << endl;
                }
break;
            } 
            case 3: {
                double gs;//gross sales
                cout << "Enter gross weekly sales:";
                cin >> gs;

                double s = 250 + 0.057 * gs;
                cout << "Commission Worker's weekly salary is:$" << s << endl;
                break;
            }
            case 4: {
                double wp;//wagePerItem
                int ip;//itemsProduced
                cout << "Enter amount paid per item:";
                cin >> wp;
                cout << "Enter total number of items produced:";
                cin >> ip;
                double s = wp * ip;
                cout << "Pieceworker's weekly salary is:$" << s << endl;
                break;
            }
            default:
                cout << "Invalid paycode entered." << endl;
        }

        cout << endl <<"Enter employee paycode (1:Manager, 2: Hourly Worker, 3: Commission Worker, 4: Pieceworker, -1 to end):";
    }
    return 0;
}