/*3. Write a program to merge two sorted arrays to a third array */
#include <iostream>
using namespace std;
void merge_array(int a[],int b[],int c[],int n1,int n2)
{
   int i=0,j=0,k=0;
   while(i<n1 && j<n2)
   {
      if(a[i]<b[j])
         c[k++]=a[i++];
    else
       c[k++]=b[j++];
   }
    while (i < n1)
        c[k++] = a[i++];
    while(j<n2)
        c[k++]= b[j++];
   
}
int main()
{
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10,12,14};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    int c[n1+n2];
    merge_array(a,b,c,n1,n2);
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);
    return 0;
}