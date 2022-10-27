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
    cout<<endl;
}

int sortArray(int arr[], int len)
{
    int left=0, mid=0, right=len-1;

    while(mid<=right)
    {
        switch(arr[mid])
        {
        case 0:
            swap(arr[left++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[right--]);
            break;
        }
    }

}

int main()
{
//example 1: use direct sort function
    int arr[] = {0, 1, 0, 1, 0, 0, 2, 1, 2, 0, 1};
    int len = sizeof(arr) / sizeof(int);

    sortArray(arr, len);
    printArray(arr, len);

    //output:
    //      0 0 0 0 0 1 1 1 1 2 2


    /*
        how code works?
        0 1 0 1 0 0 2 1 2 0 1

        0 1 0 1 0 0 2 1 2 0 1

        0 1 0 1 0 0 2 1 2 0 1

        0 0 1 1 0 0 2 1 2 0 1

        0 0 1 1 0 0 2 1 2 0 1

        0 0 0 1 1 0 2 1 2 0 1

        0 0 0 0 1 1 2 1 2 0 1

        0 0 0 0 1 1 1 1 2 0 2

        0 0 0 0 1 1 1 1 2 0 2

        0 0 0 0 1 1 1 1 2 0 2

        0 0 0 0 1 1 1 1 0 2 2

        0 0 0 0 0 1 1 1 1 2 2
    */
}
