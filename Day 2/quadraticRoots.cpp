#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, dcr, real, img;
    //HERE,
    // A, B AND C ARE COEFFICIANTS
    // DCR IS DESCRIMINANT
    //REAL IS REAL PART
    //IMAGINARY PART
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    dcr = b*b - 4*a*c;
    
    if (dcr > 0) {
        x1 = (-b + sqrt(dcr)) / (2*a);                          //FORMULA FOR FINDINING THE ROOTS
        x2 = (-b - sqrt(dcr)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (dcr == 0) {
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        real = -b/(2*a);
        img =sqrt(-dcr)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << real << "+" << img << "i" << endl;
        cout << "x2 = " << real << "-" << img << "i" << endl;
    }

    return 0;
}