#include<iostream>
using namespace std;
int isVowel(char c){
    if(c == 'a'|| c == 'A' || c == 'e' || c=='E' || c == 'i'|| c=='I' ||c == 'o'|| c == 'O' ||c == 'u' || c == 'U'){
        return 1;
    }
    return 0;
}
int main(){
    char c;
    cout << "Enter alphabet to check whether vowel or consonant" << endl;
    cin>>c;
    if(isVowel(c)){
        cout<<"Given character "<<c<<" is vowel";
    }else{
        cout<<"Given character "<<c<<" is consonant";
    }
    return 0;
}