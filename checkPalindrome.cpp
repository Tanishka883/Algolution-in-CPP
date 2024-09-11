/*5.	Write a program that takes 5 integers as input from the user 
and finds out if the order of numbers in array is palindrome */
#include <iostream>
using namespace std;
void checkPalindrome(int array[])
{
    int flagBit=0;
    for(int i=0;i<3;i++)
    {
        if(array[i]!=array[5-i-1])
        {
           flagBit=1;
           break;
        }
    }
    if (flagBit==0)
      cout<<"Its a Palindrome no.";
    else
       cout<<"Not a palindrome no.";
}
int main()
{
    int a[5];
    cout<<"Enter 5 numbers --> ";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    checkPalindrome(a);
    return 0;
}