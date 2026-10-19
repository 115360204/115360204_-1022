#include <iostream>
using namespace std;

int main() {

    int a,b,c;

    cout << "小於等於500的畢氏三元數" << endl;
    for (a = 1; a <= 500; a++) {
        for (b = a; b <= 500; b++) {
            for (c = b; c <= 500; c++) {
                if (a * a + b * b == c * c) {
                    cout << "(" << a << "," << b << "," << c << ")" << endl;
                }
            }
        }
    }

    return 0;
}