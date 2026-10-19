#include <iostream>
using namespace std;

int main() {
const int rows = 10;

cout << "(A)" << endl;

for (int i = 1; i <= rows; ++i) 
{
    for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }
    cout << endl;
}

cout << "\n(B)" << endl;

for (int i = rows; i >= 1; --i)
 {
    for (int j = 1; j <= i; ++j)   
        {
         cout << "*";
        }
    cout << endl;
}

cout << "\n(C)" << endl;

for (int i = rows; i >= 1; --i) {

    for (int j = 1; j <= rows - i; ++j) 
{
cout << " ";
}

    for (int j = 1; j <= i; ++j) 
        {
            cout << "*";
        }
    cout << endl;
}

cout << "\n(D)" << endl;

for (int i = 1; i <= rows; ++i) 
{
    for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }

    for (int j = 1; j <= i; ++j)
        {
            cout << "*";
        }

    cout << endl;
}
return 0;
}

