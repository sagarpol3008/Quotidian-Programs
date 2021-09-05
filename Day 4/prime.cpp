#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, n;
    bool isPrime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if(isPrime){
        cout << "Given number " << n << " is a prime number" << endl;
    }else{
        cout << "Given number " << n << "is not a prime number" << endl;
    }
}