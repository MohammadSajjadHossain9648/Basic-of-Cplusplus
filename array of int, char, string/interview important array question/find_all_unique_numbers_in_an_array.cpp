#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/find-unique-element-element-occurs-k-times-except-one/
                  https://www.codespeedy.com/how-to-find-unique-numbers-in-an-array-using-cpp/
                  https://www.geeksforgeeks.org/print-distinct-elements-given-integer-array/
                  https://www.w3resource.com/cpp-exercises/array/cpp-array-exercise-26.php
*/
int main()
{
    int arr[] = {6, 2, 5, 2, 2, 6, 6};

    int length = sizeof(arr)/sizeof(int);

    sort(arr, arr+length);

    cout<<"Unique numbers in given array are: ";
    for (int i=0; i<length; i++)
    {
        if(arr[i]==arr[i+1])
        {
            continue;
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }



    // or can be write this more efficient way

    // Finding unique numbers
    //    cout<<"Unique numbers in given array are: ";
    //    for(int i=0; i<length; i++)
    //    {
    //        int count = 0;
    //        for(int j=length-1; j>=i; j--)
    //        {
    //            if(arr[i] == arr[j])
    //            {
    //                count++;
    //            }
    //        }
    //
    //        cout<<arr[i]<<" ";
    //        i += (count-1);
    //    }

    //output:
    //  Unique numbers in given array are: 2 5 6

    /*
     step 1: sort the array like arr[] = {2, 2, 2, 5, 6, 6, 6}
     step 2: then check the arr with reverse arr and do count
            2.1: just print the arr number and increase the value of i with count
    */
}
