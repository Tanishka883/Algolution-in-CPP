/*4.	Write a program that takes 7 integers as input from the user 
then Reverse the order of numbers in the array, then print the numbers.
*/
#include <iostream>
using namespace std;
void reverse(int a[])
{
    int b[7];
    int j=6;
    for(int i=0;i<7;i++)
    {
        b[j]=a[i];
        j--;
    }
    for(int i=0;i<7;i++)
    {
        a[i]=b[i];
        cout<<a[i]<<" ";       
    }    
}
int main()
{
    int a[7];
    cout<<"Enter 7 numbers -->";
    for(int i=0;i<7;i++)
    {
        cout<<" ";
        cin>>a[i];
    }
    cout<<"\nReverse numbers --> ";
    reverse(a);   
    return 0;
}