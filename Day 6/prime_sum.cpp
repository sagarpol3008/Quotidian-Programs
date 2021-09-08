#include <bits/stdc++.h>
using namespace std;

int sum_of_two_primes(int n)
{
    int i, isPrime = 1;

    for(i = 2; i <= n/2; ++i){
    
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
        return isPrime;
}

int main(){
    int n, i;

    cout << "Enter the number: " << endl;
    cin >> n;
    int flag = 0;
    for (i = 2; i <= n / 2; ++i)
    {
        if (sum_of_two_primes(i) == 1){

            if (sum_of_two_primes(n-i) == 1){
            
                cout << n << " = " << i << " + " << n-i << endl;
                flag = 1;
            }

        }
    }

        if (flag == 0)
            cout << n << "Sum is not possible in prime numbers" << endl;
        return 0;
}

