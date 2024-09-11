/*14. Pattern Questions
12345
54321
12345
54321
12345
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
    int n=0;
    while(row!=0)
    {
        for(int j=1;j<=column;j++)
        {
            cout<<j;
        }
        cout<<endl;
        row--;
        if(row!=0)
        {
        for(int k=column;k>0;k--)
        {
            cout<<k;
        }
        row--;
        }
        cout<<endl;       
    }
    return 0;
}
