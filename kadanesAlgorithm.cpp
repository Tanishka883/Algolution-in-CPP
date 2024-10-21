/*Given an integer array nums, find the
subarray with the largest sum, and return its sum.

Kadanes Algorithm solves the problem within linear time complexity
*/


#include <iostream>
#include <vector>
using namespace std;
int largestSumSubarray(vector<int> &array)
{
    
    int currentSum=array[0];
    int maxSum=array[0]; //initializing maximum sum as 1st element of the array
    for(int i=0;i<array.size();i++)
    {
        currentSum+=array[i];
        if(currentSum<array[i])
        {
            currentSum=array[i];  
        }
        if(maxSum<currentSum)
            maxSum=currentSum;
                   
    }
    return maxSum;
}

int main()
{
    vector<int> arr;
    int n,ele;
    cout<<"enter the length of an array -> ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<". ";
        cin>>ele;
        arr.push_back(ele);
    }
   
    cout<<"maximum sum => "<<largestSumSubarray(arr);
    return 0;

}