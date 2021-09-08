#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
int main()
{
    int n;

    cout << "Enter a binary number: " << endl;
    cin >> n;
 
    cout << n << " in binary = " << binaryToDecimal(n) << " in decimal";
    return 0;
}
