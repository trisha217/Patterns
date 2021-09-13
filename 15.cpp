/*

15.      *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         *

*/
#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{

    for (int row = 0; row < (2 * n); row++)
    {
        if (row < n)
        {
            int noOfStarsBeforeN = n - row;
            int noOfStarsAfterN = n + row;
            int flag = 0;
            for (int col = 1; col < (2 * n); col++)
            {
                if (col == noOfStarsBeforeN || col == noOfStarsAfterN)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else if (row > n)
        {
            int row1 = row-n;
            int noOfSpacesBeforeN = row1 + 1;
            int noOfSpacesAfterN = (2 * n) - row1 - 1;
            int flag = 0;
            for (int col = 1; col < (2 * n); col++)
            {
                if (col == noOfSpacesBeforeN || col == noOfSpacesAfterN)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        else
        {
            
        }
    }
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}