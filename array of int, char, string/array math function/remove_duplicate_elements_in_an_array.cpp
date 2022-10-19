#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/remove-duplicate-elements-in-an-array-using-stl-in-c/
                  https://www.sanfoundry.com/cpp-program-delete-repeated-elements/
*/

void removeDuplicates(int arr[], int length)
{
    int new_arr[1000], j=0;
    for(int i=0; i<length; i++)
    {
        int count = 0;

        // first store the value in new array
        new_arr[j] = arr[i];
        j++;

        // then count how many number has match
        // like an example i = 0 and after arr[0], here arr[1] and arr[2] also store 2.
        // so count is 2.
        for(int j=i+1; j<length; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        // increment the i for getting next number
        i += count;
    }

    cout<<"After removing duplicates, arr[]: ";
    for(int i=0; i<j; i++)
    {
        cout<<new_arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[] = {6, 2, 5, 2, 2, 6, 6};

    cout<<"Before removing duplicates, arr[]: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    int length = sizeof(arr)/sizeof(int);

    sort(arr, arr+length);

    removeDuplicates(arr, length);
}
