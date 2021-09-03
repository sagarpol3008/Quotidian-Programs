#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout << "Enter two integer for division: " << endl;
    cin >> n>>m;
    int q = n / m;
    int r = n % m;
    cout << "Quotient is: " << q<<endl;
    cout << "Remainder is: " << r<<endl;
    return 0;
}
