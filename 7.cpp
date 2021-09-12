/*

7.   ****
      ***
       **
        *
         
                         
*/

#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int noOfSpaces;
    for(int row=1;row<=n;row++)
    {
        noOfSpaces = row;
        for(int col = 1;col<=n;col++){
           if(col>=noOfSpaces)
           {
               cout<<"*";
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