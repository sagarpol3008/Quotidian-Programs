#include<iostream>
using namespace std;
int main(){
    int m, n,temp;
    cout << "Enter two integer for swapping: " << endl;
    cin >> m>>n;
    cout << "Two numbers before swapping: " << endl;
    cout << m <<endl;
    cout << n << endl;
    temp = m;
    m = n;
    n = temp;
    cout << "Two numbers after swapping: " << endl;
    cout << m <<endl;
    cout << n << endl;
    
    return 0;
}
