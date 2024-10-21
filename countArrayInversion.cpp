/*
 Given an integer array arr[] of size n, the task is to find the count inversions of the given array.
Two array elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.
*/

#include <iostream>
#include <vector>
using namespace std;

//inversion can be of any length so thats why long long is used
long long merge(vector<int> &arr,int l,int mid,int r)
{
    long long inv=0;
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 and j<n2)
    {
        if(a[i]<=b[j])
        {
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            //counting inversion if element of 1st array is greater than element of 2nd sorted subarray
            inv+=n1-i;  
            k++;j++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
            k++;
            i++;
    }
    while(j<n2)
    {
        arr[k]=b[j];
            k++;
            j++;
    }
    return inv;
}

//using the concept of mergesort to reduce time complexity
//and fining the count of inversion in an array

//pass array,lower and higher index as arguments
long long mergeSort(vector<int> &arr,int l,int r)
{
    long long inv=0;
    if(l<r)
    {
        int mid=(l+r)/2;
        inv+=mergeSort(arr,l,mid);
        inv+=mergeSort(arr,mid+1,r);
        inv+=merge(arr,l,mid,r);
    }
    return inv;
}
int main()
{
     vector<int> arr;
     int n,ele;
     cout<<"enter length of an array ";
     cin>>n;
     for(int i=0;i<n;i++)
     {
        cin>>ele;
        arr.push_back(ele);
     }
    cout<<mergeSort(arr,0,n-1);
    return 0;
}