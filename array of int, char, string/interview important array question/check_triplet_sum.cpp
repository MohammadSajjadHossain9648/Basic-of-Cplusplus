#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/find-a-triplet-that-sum-to-a-given-value/
                  https://www.codespeedy.com/cpp-program-to-find-the-triplets-with-a-given-sum-in-an-array/
                  https://www.techiedelight.com/find-triplet-given-with-given-sum/
                  https://leetcode.com/problems/3sum/
*/

bool find_sumPair(int arr[], int len, int target)
{
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            for(int k=j+1; k<len; k++)
            {
                if(arr[i]+arr[j]+arr[k] == target)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {2,11,7,15};
    int target = 23;

    int len = sizeof(arr)/sizeof(int);

    //example 1: Check for pair in an array with a given sum
    find_sumPair(arr, len, target) ? (cout<<"true"<<endl<<endl) : (cout<<"false"<<endl<<endl);

    //output: false

    //example 2: if want to print index position
    //    for(int i=0; i<len; i++)
    //    {
    //        for(int j=i+1; j<len; j++)
    //        {
    //            for(int k=j+1; k<len; k++)
    //            {
    //                if(arr[i]+arr[j]+arr[k] == target)
    //                {
    //                    cout<<"index position of array: "<<i<<" & "<<j<<" & "<<k<<endl<<endl;
    //                }
    //            }
    //        }
    //    }

    //example 3: if want to print array value
    //    for(int i=0; i<len; i++)
    //    {
    //        for(int j=i+1; j<len; j++)
    //        {
    //            for(int k=j+1; k<len; k++)
    //            {
    //                if(arr[i]+arr[j]+arr[k] == target)
    //                {
    //                    cout<<"numbers of array: "<<arr[i]<<" & "<<arr[j]<<" & "<<arr[k]<<endl<<endl;
    //                }
    //            }
    //        }
    //    }
}
