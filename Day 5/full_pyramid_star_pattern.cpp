#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows;
    cout << "Enter number of rows: " << endl;
    cin >> rows;
    int k = 2 * rows - 2;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < k; j++)
            cout << " ";
 
    
        k = k - 1;

        for (int j = 0; j <= i; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}
 

/* OUTPUT:-
         *
        * *
       * * *
      * * * *
     * * * * *
    * * * * * *
*/
