#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int base, exp;

    cout << "Enter base and exponent" << endl;
    cin >> base >> exp;
 
    cout << base << "^" << exp << " = " << pow(base, exp);
    return 0;
}