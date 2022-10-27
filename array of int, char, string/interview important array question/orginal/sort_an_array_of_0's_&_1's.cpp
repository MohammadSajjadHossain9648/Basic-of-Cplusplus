#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/segregate-0s-and-1s-in-an-array-by-traversing-array-once/
                  https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/
                  https://www.javatpoint.com/sort-an-array-of-0s-1s-and-2s
                  https://takeuforward.org/data-structure/sort-an-array-of-0s-1s-and-2s/
                  https://www.enjoyalgorithms.com/blog/sort-an-array-of-0s-1s-and-2s
*/

void printArray(int arr[], int len)
{
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

int sortArray(int arr[], int len)
{
    int left=0, right=len-1;

    while(left<right)
    {
        /* Increment left index while we see 0 at left */
        while(arr[left] == 0 && left<right)
        {
            left++;
        }

        /* Decrement right index while we see 1 at right */
        while(arr[right] == 1 && left<right)
        {
            right--;
        }

        /* If left is smaller than right then there is a 1 at left
        and a 0 at right. Exchange arr[left] and arr[right]*/
        swap(arr[left], arr[right]);
        left++;
        right--;
        cout<<1<<endl;
    }
}

int main()
{
    int arr[] = {0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1};
    int len = sizeof(arr) / sizeof(int);

    sortArray(arr, len);
    printArray(arr, len);

    //output:
    //      0 0 0 0 0 1 1 1 1 1 1

    /*
        how code works?
        0 1 1 1 0 1 1 0 0 0 1 -> initial array

        0 0 1 1 0 1 1 0 0 1 1 -> start processing

        0 0 0 1 0 1 1 0 1 1 1

        0 0 0 0 0 1 1 1 1 1 1 -> finish processing

        0 0 0 0 0 1 1 1 1 1 1
    */
}
