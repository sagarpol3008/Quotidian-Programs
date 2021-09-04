#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++) {
		fact=fact*i;
	}
    return fact;
}

int main() {
    int n;
    cout<<" Enter number to find factorial:  "<<endl;
	cin>>n;
	cout<<"Factorial of Given Number is "<<factorial(n)<<endl;
	return 0;
}