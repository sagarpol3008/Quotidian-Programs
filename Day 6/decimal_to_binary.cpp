#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}


int main()
{
    int n, binaryNumber;

    cout << "Enter a decimal number: " << endl;
    cin >> n;

    cout << n << " in decimal = " << decimalToBinary(n) << " in binary" << endl;
    return 0;
}

