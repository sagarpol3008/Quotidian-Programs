#include<bits/stdc++.h>
using namespace std;

void fibonacciSeries(int n){
    int num1 = 0, num2 = 1, num3;
    cout<<num1<<" "<<num2<<" ";    
    for(int i=2;i<n;++i){ 
      
         num3=num1+num2;    
         cout<<num3<<" ";    
         num1=num2;    
         num2=num3;    
    }    
}

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    fibonacciSeries(n);
    return 0;
}