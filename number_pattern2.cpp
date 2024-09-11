/* 15. Pattern Questions
11111
10001
10001
10001
11111
*/
#include <iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"enter no. of rows -> ";
    cin>>row;
    cout<<"enter no. of column -> ";
    cin>>column;
    for(int j=0;j<column;j++)
        {
            cout<<1;
        }
    cout<<endl;
    
    for(int i=0;i<row-2;i++)
    {
        
        {
        for(int j=i;j<=i;j++)
        {
            cout<<1;
        }
        for(int k=column-2;k>0;k--)
        {
            cout<<0;
        }
         for(int j=i;j<=i;j++)
        {
            cout<<1;
        }
        cout<<endl;
        }
        
    }
    for(int j=0;j<column;j++)
        {
            cout<<1;
        }
    return 0;
}