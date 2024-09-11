/* 16. Pattern Question
12345
23455
34555
45555
55555
*/
#include <iostream>
using namespace std;
int main()
{
    int row;
    cout<<"enter no. of rows -> ";
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<row;j++)
        {
            cout<<j+1;
        }
        for(int k=i;k>0;k--)
        {
            cout<<row;
        }
        cout<<endl;
    }
    return 0;
}