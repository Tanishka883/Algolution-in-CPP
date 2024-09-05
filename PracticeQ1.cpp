#include <iostream>
using namespace std;
int negative_no_count(int* a,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]<0)
        {
          count++;
        }
    }
    return count;
}
int main()
{
   int array[50];
   int n;
   cout<<"Enter size of array\n";
   cin>>n;
   cout<<"Enter array elements\n";
   for(int i=0;i<n;i++)
   {
    cout<<i+1<<". = ";
    cin>>array[i];
   }
   cout<<"Negative numbers = "<<negative_no_count(array,n);
   return 0;
}
