/*11. Pattern Question

*
**
***
****
*****
*/
#include <iostream>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter number of rows -> ";
    cin>>row;
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}
