#include <bits/stdc++.h>
using namespace std;

void prime_interval(int low_val, int high_val){
    bool isPrime = true;

    cout << "Prime numbers between " << low_val << " and " << high_val << " are: " << endl;
     while (low_val < high_val) {
        isPrime = true;
        if (low_val == 0 || low_val == 1) {
            isPrime = false;
        }
        else {
            for (int i = 2; i <= low_val / 2; ++i) {
                if (low_val % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime)
            cout << low_val << " ";

        ++low_val;
    }
    
}

int main() {
    int low_val, high_val;

    cout << "Enter two numbers : "<<endl;
    cin >> low_val >> high_val;
    prime_interval(low_val, high_val);

    return 0;
}
