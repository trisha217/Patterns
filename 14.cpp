

/*

14.  *********
      *     *
       *   *
        * *
         *
*/

#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int noOfSpacesBeforeN;
    int noOfSpacesAfterN;
    for (int row = 0; row < n; row++)
    {
        noOfSpacesBeforeN = row + 1;
        noOfSpacesAfterN = (2 * n) - row - 1;
        int flag = 0;
        for (int col = 1; col < (2 * n); col++)
        {
            if (row == 0)
            {
                cout << "*";
            }
            else if (col == noOfSpacesBeforeN || col == noOfSpacesAfterN)
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
}

int main()
{
    int n;
    cin >> n;
    pattern(n);
    return 0;
}