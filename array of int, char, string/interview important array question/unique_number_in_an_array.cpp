#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/find-unique-element-element-occurs-k-times-except-one/
                  https://leetcode.com/problems/unique-number-of-occurrences/
                  https://www.codingninjas.com/codestudio/problems/find-unique_625159
*/
int main()
{
    int arr[] = {6, 2, 5, 2, 3, 6, 3};

    int length = sizeof(arr)/sizeof(int);

    sort(arr, arr+length);

    for(int i=0; i<length; i++)
    {
        int count = 0;
        for(int j=length-1; j>=i; j--)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            cout<<"Unique number in given array is: "<<arr[i]<<endl;
        }
        else
        {
            i += (count-1);
        }
    }

    //output:
    //  Unique number in given array is: 5

    /*
     step 1: sort the array like arr[] = {2, 3, 2, 5, 3, 6, 6}
     step 2: then check the arr with reverse arr and do count
            2.1: if count is 1 this is unique element
    */
}
