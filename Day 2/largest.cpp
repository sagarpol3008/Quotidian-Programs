#include<iostream>
using namespace std;
int is_Largest_Number(int a, int b, int c){
    if(a >= b && a >= c){
        return a;
    }else if(b >= a && b >= c){
        return b;
    }
    return c;
}
int main(){
    int a, b, c;
    cout << "Enter three integer numbers to check which is largest among them" << endl;
    cin>>a>>b>>c;
    cout<<"Largest number among three is: "<<is_Largest_Number(a, b, c);
    return 0;
}