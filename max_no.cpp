/*2.	Write a program that takes integers as input from the user and print Max of all the numbers.*/
#include <iostream>
using namespace std;
int max_no(int array[],int size)
{
    int max=array[0];
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
           max=array[i];
    }
    return max;
}
int main()
{
    int arr[50],size;
    cout<<"Enter size of an array --> ";
    cin>>size;
    cout<<"\nEnter elements of an array --> ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nMax number in an array --> "<<max_no(arr,size);
    return 0;
}