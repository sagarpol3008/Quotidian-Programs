#include <bits/stdc++.h>  
using namespace std;  
int main()  { 
    int n,m,sum=0;
    cout << "Enter a number: " << endl;
    cin >> n;
    while(n>0)    
    {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    cout << "Sum is= " << sum << endl;
    return 0;  
}  
