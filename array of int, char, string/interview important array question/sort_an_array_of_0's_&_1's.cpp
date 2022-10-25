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
int main()
{
//example 1: use direct sort function
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0, 1};
    int len = sizeof(arr) / sizeof(int);

    sort(arr, arr+len);

    cout<<"Sorted version of Array arr[]: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;


//example 2: use without sort function
    int arr2[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int len2 = sizeof(arr2) / sizeof(int);

    //first store all 0's in new array
    int new_arr[1000], j=0;
    for(int i=0; i<len2; i++)
    {
        if(arr2[i] == 0)
        {
            new_arr[j] = 0;
            j++;
        }
    }

    //after that just store all 1's in new array cause rest of number are 1
    for(int i=j; i<len2; i++)
    {
        new_arr[i] = 1;
    }

    cout<<"Sorted version of Array arr[]: ";
    for(int i=0; i<len2; i++)
    {
        cout<<new_arr[i]<<" ";
    }
    cout<<endl;

    //output:
    //    Sorted version of Array arr[]: 0 0 0 0 0 1 1 1 1 1 1
    //    Sorted version of Array arr[]: 0 0 0 0 0 1 1 1 1 1
}
