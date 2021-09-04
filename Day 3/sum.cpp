#include<bits/stdc++.h>
using namespace std;

//USING TRADITIONAL METHOD
int sumOfNum(int n){   
    return(n * (n + 1) / 2); //FORMULA TO CALCULATE SUM OF N NATURAL NUMBERS   
}

//USING FOR LOOP
int sumOfNaturalNumber(int n)
{
   int sum = 0;
   for (int i=1; i<=n; i++)
     sum = sum + i;
   return sum;
}
 

int main(){
    int n;
    cout << "Enter the first n number of natural number" << endl;
    cin >> n;
    cout << "Using traditional method: " << endl;
    cout << "Sum of first " << n << " natural number is " << sumOfNum(n) << endl;
    cout << "Using for loop: " << endl;
    cout << "Sum of first " << n << " natural number is " << sumOfNaturalNumber(n)<< endl;
    return 0;
}
