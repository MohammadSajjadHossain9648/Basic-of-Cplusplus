#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.codespeedy.com/find-intersection-of-two-arrays-in-cpp/
                  https://www.tutorialspoint.com/cplusplus-program-to-find-union-and-intersection-of-two-unsorted-arrays
                  https://www.geeksforgeeks.org/union-and-intersection-of-two-sorted-arrays-2/
*/
/*
    The union of two arrays: is the set of all elements that are either in A or in B.
    The union of given two arrays: { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }.
    Because all these elements are present either in Array1 or in Array2.
    (*Note: Array should not contain 1 element twice.)
*/
void arrayUnion(int arr1[], int len1, int arr2[], int len2)
{
    //first sort both array
    sort(arr1, arr1+len1);
    sort(arr2, arr2+len2);

    int len = len1+len2;
    int new_arr[len], arr[len];

    //merge both array
    merge(arr1, arr1+len1, arr2, arr2+len2, new_arr);

    //remove duplicates number from new array
    int index = 0;
    for(int i=0; i<len; i++)
    {
        int count = 0;
        arr[index] = new_arr[i];
        index++;

        for(int j=i+1; j<len; j++)
        {
            if( new_arr[i] == new_arr[j] )
            {
                count++;
            }
            else if( new_arr[i] != new_arr[j] )
            {
                break;
            }
        }
        i += count;
    }

    // check the duplicate number and print them
    cout<<"Array Union of two array: ";
    for(int i=0; i<index; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;

}

int main()
{
    int arr1[] = {6, 2, 5, 2, 2, 6, 6};
    int arr2[] = {1, 2, 5, 2, 3, 3, 4};

    int len1 = sizeof(arr1)/sizeof(int);
    int len2 = sizeof(arr2)/sizeof(int);

    arrayUnion(arr1, len1, arr2, len2);

    //output:
    //  Array Union of two array: 1 2 3 4 5 6
}
