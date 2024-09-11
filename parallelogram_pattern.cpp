/* Q10. pattern question
    ****
   ****
  ****
 ****
****
*/
#include <iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter number of rows -> ";
    cin>>row;
    cout<<"Enter number of columns -> ";
    cin>>column;
    for (int i=row;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout<<" ";
        }
        for(int k=0;k<column;k++)
        {
             cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}