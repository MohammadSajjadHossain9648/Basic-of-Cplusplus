#include<iostream>
using namespace std;
/*
    to know more: https://leetcode.com/problems/find-all-duplicates-in-an-array/
                  https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/
                  https://www.w3resource.com/cpp-exercises/array/cpp-array-exercise-21.php
                  https://www.geeksforgeeks.org/stdunique-in-cpp/
*/
int main()
{
    int arr[] = {6, 2, 5, 2, 2, 6, 6};

    int length = sizeof(arr)/sizeof(int);

    sort(arr, arr+length);

    cout<<"Duplicate number in given array: ";
    for(int i=0; i<length; i++)
    {
        int count = 0;
        for(int j=length-1; j>=i; j--)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > 1)
        {
            cout<<arr[i]<<" ";
            i += (count);
        }
    }

    //output:
    //  Duplicate number in given array: 2 6
}
