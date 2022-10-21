#include<iostream>
using namespace std;
/*
    to know more: https://java2blog.com/return-array-from-function-cpp/
                  https://codeforwin.org/2017/12/pass-return-array-function-c.html
                  https://devenum.com/how-to-return-an-array-from-a-function-in-c/
                  https://linuxhint.com/return-array-from-function-c/
                  https://www.digitalocean.com/community/tutorials/return-array-in-c-plus-plus-function
                  https://www.geeksforgeeks.org/how-to-return-a-local-array-from-a-cpp-function/
*/
/*
    Using Pointer return an array from Function in C++
    In this example, we are going to see how we can pass an array to a function, and then this function
    will work on this array and return this array back to us.
    We will pass the array by reference and we will get the array pointer back from the function
    with the modified values.
*/


//global variable
#define length 10  // can be write -> int length = 10;

int* Square(int arr[], int length)
{
    for(int i=0; i<length; i++)
    {
        arr[i] *= arr[i];
    }
    return arr;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout<<"arr[]: ";
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int *sqrArr = Square(arr, length);

    cout<<"sqrArr[]: ";
    for(int i=0; i <length; ++i)
    {
        cout<<sqrArr[i]<<" ";
    }
    cout<<endl;


    //output:
    //    arr[]: 1 2 3 4 5 6 7 8 9 10
    //    sqrArr[]: 1 4 9 16 25 36 49 64 81 100
}
