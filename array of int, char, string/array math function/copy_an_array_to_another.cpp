#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.techiedelight.com/create-a-copy-of-an-array-in-cpp/
                  https://cplusplus.com/forum/general/199358/
*/
int main()
{
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(int);

    //method 1: Using copy
    int new_arr[100];
    copy_n(arr, len, new_arr);
    //same as copy(begin(arr), end(arr), start(new_arr));
    //same as copy_n(arr, len, new_arr); and here use header #include<algorithm>


    /* method 2: using for loop
    for(int i=0; i<len; i++)
    {
        new_arr[i] = arr[i];
    }
    */


    /* method 3: using memcpy
    memcpy(&arr, &new_arr, sizeof(arr));
    */


    /* method 4: Using copy constructor
    const int n = 5;
    array<int, n> src = {1, 3, 5, 7, 9};

    array<int, n> dest = src;        // or, array<int, n> dest(src);
    */


    //print array
    cout<<"old -> int arr[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<setw(4);
    }

    cout<<"\n\nnew -> int new_arr[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<new_arr[i]<<setw(4);
    }

    //output:
    //    old -> int arr[] = 1   2   3   4   5
    //
    //    new -> int new_arr[] = 1   2   3   4   5

}
