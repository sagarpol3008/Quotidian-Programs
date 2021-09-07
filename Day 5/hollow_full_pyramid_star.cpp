#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    int i, j, k = 0;
    for (i = 1; i <= rows; i++)
    {

        for (j = i; j < rows; j++)
        {
            cout << " ";
        }

        while (k != (2 * i - 1)) {
            if (k == 0 || k == 2 * i - 2)
                cout << "*";
            else
                cout << " ";
            k++;
                }
                k = 0;
                cout << endl; 
    }
    for (i = 0; i < 2 * rows - 1; i++)
    {
        cout << "*";
    }
}

/* OUTPUT:-
                *  
               * * 
              *   *
             *     *
            *       *
            *********

*/