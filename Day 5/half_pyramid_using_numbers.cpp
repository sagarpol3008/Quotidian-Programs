#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, i, j;

    cout << "Enter number of rows: " << endl;
    cin >> rows;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout <<endl;
    }
    return 0;
}

/* OUTPUT:- 
            1
            1 2       
            1 2 3     
            1 2 3 4   
            1 2 3 4 5 

*/