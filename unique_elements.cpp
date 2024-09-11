/*7.	Write a program to print all unique numbers in an array.*/
#include <iostream>
#include <unordered_set>
using namespace std;
void distinctElements(int a[],int size)
{
    unordered_set<int> arr; //use of HashSet to reduce the time complexity to O(n)
    cout<<"\nDistinct elements are --> ";
    for(int i=0;i<size;i++)
    {
        if(arr.count(a[i])!=1) //If element is not present then it will be 0 otherwise 1
        {
            arr.insert(a[i]); 
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int a[50],size;
    cout<<"enter size of an array -> ";
    cin>>size;
    cout<<"\nenter array elements --> ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    distinctElements(a,size);
    
    return 0;
}
