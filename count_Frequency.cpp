/*8.	Write a program to count frequency of each number in an array.*/
#include <iostream>
#include <unordered_map>
using namespace std;
void count_Frequency(int a[],int size)
{
    unordered_map<int, int> mp; //use of HashMap to reduce the time complexity to O(n)
    for(int i=0;i<size;i++)
    {
       mp[a[i]]++; 
    }
    //HashMap is used because this consist of key-value pair where key is the element nd value is its frequency
    for(auto it=mp.begin();it!=mp.end();it++) 
    {
        cout<<it->first;   //it->first represent key
        cout<< " occurs " ;   
        cout<<it->second;     //it->second represent value
        cout<< " times\n" ;  
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
    count_Frequency(a,size);
    
    return 0;
}
