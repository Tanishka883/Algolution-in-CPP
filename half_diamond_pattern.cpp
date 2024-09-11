/* 12. Pattern Question
*
**
***
****
*****
****
***
**
*
*/
#include <iostream>
using namespace std;
int main()
{
    int column;
    cout<<"Enter no. of column -> ";
    cin>>column;
    for(int i=0;i<column;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=0;i<column;i++)
    {
       
        for(int k=column-1;k>i;k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}