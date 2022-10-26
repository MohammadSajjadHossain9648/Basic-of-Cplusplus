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
    //sort both array
    sort(arr1, arr1+len1);
    sort(arr2, arr2+len2);

    int ans[1000], index=0;
    for(int i=0; i<len1; i++)
    {
        int element = arr1[i];
        for(int j=0; j<len2; j++)
        {
            //if element match in arr2, then store the value in answer and change the arr2 value as garbage.
            //cause next time same value didnot work.
            if(element == arr2[j])
            {
                ans[index] = element;
                arr2[j] = -123456789;
                index++;
                break;
            }
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
