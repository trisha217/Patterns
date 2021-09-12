/*

12.  * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * *
*/

#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for (int row = 0; row < (2 * n); row++)
    {
        if (row < n)
        {
            int noOfSpacesBeforeN = row;
            int noOfSpacesAfterN = (2 * n) - row;
            int flag = 0;
            for (int col = 1; col < (2 * n); col++)
            {
                if (col > noOfSpacesBeforeN && col < noOfSpacesAfterN)
                {
                    if (flag == 0)
                    {
                        cout << "*";
                        flag = 1;
                    }
                    else
                    {
                        cout << " ";
                        flag = 0;
                    }
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
            int row1 = row - n;
            int noOfStarsBeforeN = n - row1;
            int noOfStarsAfterN = n + row1;
            int flag = 0;
            for (int col = 1; col < (2 * n); col++)
            {
                if (col >= noOfStarsBeforeN && col <= noOfStarsAfterN)
                {
                    if (flag == 0)
                    {
                        cout << "*";
                        flag = 1;
                    }
                    else
                    {
                        cout << " ";
                        flag = 0;
                    }
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
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