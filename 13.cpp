
/*

13.      *
        * *
       *   *
      *     *
     *********


*/

#include <bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int noOfStarsBeforeN;
    int noOfStarsAfterN;
    for (int row = 0; row < n; row++)
    {
        noOfStarsBeforeN = n - row;
        noOfStarsAfterN = n + row;
        int flag =0;
        for (int col = 1; col < (2 * n); col++)
        {
            if(row==(n-1))
            {
                cout<<"*";
            }
            else if (col == noOfStarsBeforeN || col == noOfStarsAfterN)
            {
                cout<<"*";
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