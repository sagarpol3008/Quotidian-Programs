#include <bits/stdc++.h>
 
using namespace std;
  
int main(){
    int base, exp, i, res = 1;

    cout << "Enter base and exponent " << endl;
    cin >> base >> exp;

    for (i = 0; i < exp; i++)
    {
        res = res * base;
    }
      
    cout << base << "^" << exp << " = " << res;
     
    return 0;
}