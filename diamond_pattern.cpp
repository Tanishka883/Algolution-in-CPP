/*13. Pattern question

     *
   * * *
 * * * * *
   * * *
     *
*/
#include <iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"enter no. of rows -> ";
    cin>>row;
    if(row%2!=0)
    {
    int n=row;
    for(int i=1;i<n;i++)
    {
        if(row%2!=0)
        {
            for(int j=row;j>0;j--)
            {
                cout<<" ";
            }
            for(int k=0;k<i;k++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<endl;
        row--;
    }
    row=1;
    for(int i=n;i>0;i--)
    {
        if(row%2!=0)
        {
            for(int j=row;j>0;j--)
            {
                cout<<" ";
            }
            for(int k=0;k<i;k++)
            {
                cout<<"* ";
            }
        }
        else
            cout<<endl;
        row++;
    }
    }
    else
       cout<<"error";
    return 0;
}
