#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/
                  https://www.geeksforgeeks.org/print-all-pairs-with-given-sum/
                  https://www.geeksforgeeks.org/count-pairs-with-given-sum/
                  https://www.techiedelight.com/find-pair-with-given-sum-array/
                  https://afteracademy.com/blog/check-for-pair-in-an-array-with-a-given-sum
                  https://leetcode.com/problems/two-sum/
*/

bool find_sumPair(int arr[], int len, int target)
{
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(arr[i]+arr[j] == target)
            {
                return true;
            }
        }
    }
    return false;

    // same as
    //    for(int i=0; i<len-1; i++)
    //    {
    //        for(int j=len-1; j>=i+1; j--)
    //        {
    //            if(arr[i]+arr[j] == target)
    //            {
    //                return true;
    //            }
    //        }
    //    }
    //    return false;
}
int main()
{
    int arr[] = {2,11,6,15};
    int target = 9;

    int len = sizeof(arr)/sizeof(int);

    //example 1: Check for pair in an array with a given sum
    find_sumPair(arr, len, target) ? (cout<<"true"<<endl<<endl) : (cout<<"false"<<endl<<endl);

    //output: false

    //example 2: if want to print index position
    //    for(int i=0; i<len; i++)
    //    {
    //        for(int j=i+1; j<len; j+)
    //        {
    //            if(arr[i]+arr[j] == target)
    //            {
    //                cout<<"index of arr: "<<i<<" & "<<j<<endl;
    //            }
    //        }
    //    }
    // or same as
    //    for(int i=0; i<len-1; i++)
    //    {
    //        for(int j=len-1; j>=i+1; j--)
    //        {
    //            if(arr[i]+arr[j] == target)
    //            {
    //                cout<<"index of arr: "<<i<<" & "<<j<<endl;
    //            }
    //        }
    //    }

    //example 3: if want to print array value
    //    for(int i=0; i<len; i++)
    //    {
    //        for(int j=i+1; j<len; j+)
    //        {
    //            if(arr[i]+arr[j] == target)
    //            {
    //                cout<<"numbers of arr: "<<arr[i]<<" & "<<arr[j]<<endl;
    //            }
    //        }
    //    }
    // or same as
    //    for(int i=0; i<len-1; i++)
    //    {
    //        for(int j=len-1; j>=i+1; j--)
    //        {
    //            if(arr[i]+arr[j] == target)
    //            {
    //                cout<<"numbers of arr: "<<arr[i]<<" & "<<arr[j]<<endl;
    //            }
    //        }
    //    }
}
