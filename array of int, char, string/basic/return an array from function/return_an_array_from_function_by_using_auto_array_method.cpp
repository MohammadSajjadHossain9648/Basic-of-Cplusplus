#include<iostream>
#include<array>
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
    Using std:: array with auto method include header #include<array>
    C++ also offers another choice for returning an array from a function � std:: array.
    It is a structure template that wraps a regular array and it also provides extra methods
    like size() & empty(). We can return the array name to return the whole array at the time
    of the function call. We also need to include the header file �array� to use this method.
*/

auto function() //function declared with return type array<>
{
    array<int, 10> arr; //array declared

    int len = sizeof(arr)/sizeof(int);

    for(int i=0; i<len; i++)
    {
        arr[i] = i;
    }
    return arr;
}

int main()
{
    auto arr = function(); //function calling

    int len = sizeof(arr)/sizeof(int);

    cout<<"arr[]: ";
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    //output: arr[]: 0 1 2 3 4 5 6 7 8 9
}
