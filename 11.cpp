
/*
11.  * * * * *
      * * * *
       * * *
        * *
         *
*/

#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int noOfSpacesBeforeN;
    int noOfSpacesAfterN;
    for(int row=0;row<n;row++)
    {
        noOfSpacesBeforeN = row;
        noOfSpacesAfterN = (2*n)-row;
        int flag =0;
        for(int col = 1;col<(2*n);col++){
           if(col>noOfSpacesBeforeN && col<noOfSpacesAfterN)
           {
               if(flag==0)
                {
                    cout<<"*";
                    flag=1;
                }
                else
                {
                    cout<<" ";
                    flag=0;
                }
           }
           else{
               cout<<" ";
           }
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