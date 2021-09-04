#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin>> n;
    int num1 = 0;
    int num2 = 1;
    int num3;
    
    while(num1 != n){
        cout<<num1<<" ";
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    cout<<num1;
  return 0;
}