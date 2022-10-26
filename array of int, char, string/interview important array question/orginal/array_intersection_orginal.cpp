#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.codespeedy.com/find-intersection-of-two-arrays-in-cpp/
                  https://www.tutorialspoint.com/cplusplus-program-to-find-union-and-intersection-of-two-unsorted-arrays
                  https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
                  https://www.geeksforgeeks.org/find-union-and-intersection-of-two-unsorted-arrays/
                  https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149
                  https://leetcode.com/problems/intersection-of-two-arrays/
*/
/*
    intersection of two arrays will be denoted by A ∩ B. It is an array of the elements
    that are present in both the given arrays.
*/
void arrayIntersection(int arr1[], int len1, int arr2[], int len2)
{
    int ans[1000], index=0, i=0, j=0;

    while(i<len1 && j<len2)
    {
        if(arr1[i] == arr2[j])
        {
            ans[index] = arr2[j];
            index++;
            i++;
            j++;
        }

        //if arr1 value is less than arr2, update arr1. so i++ means no need to check arr2 next element.
        else if(arr1[i] < arr2[j])
        {
            i++;
        }

        //if arr1 value is greater than arr2, update arr2. so j++ means need to update arr2 next element.
        else
        {
            j++;
        }
    }


    for(int i=0; i<index; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl<<endl;

}

int main()
{
    int arr1[] = {1, 2, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 3};

    int len1 = sizeof(arr1)/sizeof(int);
    int len2 = sizeof(arr2)/sizeof(int);

    arrayIntersection(arr1, len1, arr2, len2);

    //output:
    //  2 2 3
}
