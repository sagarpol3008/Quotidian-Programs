#include<iostream>
using namespace std;
int main(){
    int m;
    cout << "Enter a number: " << endl;
    cin >> m;
    if(m %2 == 0){
        cout << "Given number " << m << " is a Even number" << endl;
    } else{
        cout << "Given number " << m << " is a Odd number" << endl;
    }
    return 0;
}
