/*

5.  *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *

*/

#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int row=1;row<=n;row++)
    {
        //for every row, run the col
        for(int col=1;col<=row;col++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }   
    for(int row=1;row<n;row++)
    {
        //for every row, run the col
        for(int col=(n-1);col>=row;col--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    pattern(n);
    return 0;
}