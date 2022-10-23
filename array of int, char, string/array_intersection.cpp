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

    int new_arr1[1000], new_arr2[1000];

    //remove duplicates number from both array
    int index1 = 0;
    for(int i=0; i<len1; i++)
    {
        int count = 0;
        new_arr1[index1] = arr1[i];
        index1++;
        for(int j=i+1; j<len1; j++)
        {
            if( arr1[i] == arr1[j] )
            {
                count++;
            }
        }
        i += count;
    }

    int index2 = 0;
    for(int i=0; i<len2; i++)
    {
        int count = 0;
        new_arr2[index2] = arr2[i];
        index2++;
        for(int j=i+1; j<len2; j++)
        {
            if( arr2[i] == arr2[j] )
            {
                count++;
            }
        }
        i += count;
    }

    // check the duplicate number and print them
    cout<<"Array Intersection common number once of two array: ";
    for(int i=0; i<index1; i++)
    {
        for(int j=0; j<index2; j++)
        {
            if(new_arr1[i] == new_arr2[j])
            {
                cout<<new_arr1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl<<endl;

}

int main()
{
    int arr1[] = {6, 2, 5, 2, 2, 6, 6};
    int arr2[] = {1, 2, 5, 2, 3, 3, 4};

    int len1 = sizeof(arr1)/sizeof(int);
    int len2 = sizeof(arr2)/sizeof(int);

    arrayIntersection(arr1, len1, arr2, len2);

    //output:
    //  Array Intersection common number once of two array: 2 5
}
