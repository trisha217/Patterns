/*

16.           1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1

*/
#include <bits/stdc++.h>
using namespace std;
int fact(int n);
 
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 
// Returns factorial of n
int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

void pattern(int n)
{
    for (int row = 0; row < n; row++)
    {
        int noOfStarsBeforeN = n - row;
        int noOfStarsAfterN = n + row;
        int flag = 0;
        int cnt =0;
        for (int col = 1; col < (2 * n); col++)
        {
            if (col >= noOfStarsBeforeN && col <= noOfStarsAfterN)
            {
                if(flag==0)
                {
                    cout<<nCr(row,cnt);
                    flag=1;
                    cnt++;
                }
                else
                {
                    cout<<" ";
                    flag=0;
                }
            }
            else
            {
                cout <<" ";
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