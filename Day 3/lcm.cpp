#include<bits/stdc++.h>
using namespace std;

int calLcm(int num1, int num2){
    int  lcm;
    lcm = (num1 > num2) ? num1 : num2;

    do
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            return lcm;
            break;
        }
        else
            ++lcm;
    } while (true);
    
    return 0;
}

int main(){
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    cout << "LCM of " << num1 << " and " << num2 << " is " << calLcm(num1, num2) << endl;
    return 0;
}