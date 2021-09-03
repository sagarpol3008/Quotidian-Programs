#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    //YEARS WHICH ARE PERFECTLY DIVISIBLE BY 4 IS LEAP YEAR
    //EXCEPT CENTTURY YEAR
    //IF CENTURY YEAR IS PERFECTLY DIVISIBLE BY 400 THEN IT IS A LEAP YEAR.

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}