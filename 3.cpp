/*
3.  *****
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
        for(int col=n;col>=row;col--){
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