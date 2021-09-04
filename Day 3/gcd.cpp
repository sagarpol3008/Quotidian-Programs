#include<bits/stdc++.h>
using namespace std;

int calGcd(int num1, int num2){
     int hcf;
     if (num2 > num1)
     {
         int temp = num2;
         num2 = num1;
         num1 = temp;
     }
    
    for (int i = 1; i <=  num2; ++i) {
        if (num1 % i == 0 && num2 % i ==0) {
            hcf = i;
        }
    }

        return hcf;
}

int main(){
    int n1, n2;
    cout << "Enter two numbers: " << endl;
    cin >> n1 >> n2;

    cout << "HCF of " << n1 << " and " << n2 << " is " << calGcd(n1, n2) << endl;
    return 0;
}