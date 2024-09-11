/*9.Write a program to count total number of duplicate numbers in an array.*/
#include <iostream>
#include <unordered_map>
using namespace std;
void duplicate_Number(int a[],int size)
{
    int count=0;
    unordered_map<int, int> mp; //use of HashMap to reduce the time complexity to O(n)
    for(int i=0;i<size;i++)
    {
       mp[a[i]]++; 
    }
    //HashMap is used because this consist of key-value pair where key is the element nd value is its frequency
    for(auto it=mp.begin();it!=mp.end();it++) 
    {
           if(it->second>1)
               count++;
            //it->second represent value     
    }
    cout<<"\n No. of Duplicate Numbers in an array --> "<<count;
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
    duplicate_Number(a,size);
    
    return 0;
}
