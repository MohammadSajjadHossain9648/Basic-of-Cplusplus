#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://codescracker.com/cpp/program/cpp-program-merge-two-arrays.htm
                  https://www.geeksforgeeks.org/merge-two-sorted-arrays/
                  https://www.geeksforgeeks.org/quickly-merging-two-sorted-arrays-using-stdmerge-c-stl/
                  https://www.sanfoundry.com/cpp-program-merge-two-arrays/
*/
int main()
{
    int arr1[] = {6, 2, 5, 2, 2, 6, 6};
    int arr2[] = {1, 2, 5, 2, 3, 3, 4};

    //print array
    cout<<"arr1[]: ";
    for(int i: arr1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"arr2[]: ";
    for(int i: arr2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    

    int len1 = sizeof(arr1)/sizeof(int);
    int len2 = sizeof(arr2)/sizeof(int);

    int new_arr[len1+len2];

    //merge two array
    merge( arr1, arr1+len1, arr2, arr2+len2, new_arr);

    //another way to merge
    //    for(int i=0; i<len1; i++){
    //        new_arr[i] = arr1[i];
    //    }
    //    int j=len1;
    //    for(int i=0; i<len2; i++){
    //        new_arr[j] = arr2[i];
    //        j++;
    //    }

    cout<<"After merge arr1[]+arr2[] = new_arr[]: ";
    for(int i: new_arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output:
    //    arr1[]: 6 2 5 2 2 6 6
    //    arr2[]: 1 2 5 2 3 3 4
    //    After merge arr1[]+arr2[] = new_arr[]: 1 2 5 2 3 3 4 6 2 5 2 2 6 6
}
