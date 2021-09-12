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
void pattern1(int n)                     //using 2 nested for loops
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

void pattern2(int n)                            //using 1 nested for loop
{
    int totalColsInEachRow;
    for(int row=0;row<2*n;row++)
    {
        //for every row, run the col
        if(row<n)
        {        
            totalColsInEachRow = row;
        }
        else{
            totalColsInEachRow = (2*n) - row;
        }
        for(int col=0;col<totalColsInEachRow;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }   
}


int main()
{
    int n;
    cin>>n;
    pattern1(n);
    pattern2(n);
    return 0;
}
