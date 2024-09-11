/*6.	Write a program to search a number (taken as input from user) in an array 
then print the index of the first occurrence of the input number in the array
If the input number is not present in the array then print -1
*/
//In this question the array is initialized at runtime
#include <iostream>
using namespace std;
void printIndex(int array[],int item,int size)
{
    int flagBit=0;
    for(int i=0;i<size;i++)
    {
        if(array[i]==item)
        {
            flagBit=1;
             cout<<"index = "<<i;
        }
    }
    if (flagBit==0)
       cout<<"-1";
}

int main()
{
    int a[5]={12,4,6,8,9};
    int item;
    cout<<"enter element to be searched --> ";
    cin>>item;
    printIndex(a,item,5);
    return 0;
}