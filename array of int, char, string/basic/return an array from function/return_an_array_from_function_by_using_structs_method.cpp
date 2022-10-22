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
    We often come around situations where we need to store a group of data whether of similar
    data types or non-similar data types. We have seen Arrays in C++ which are used
    to store set of data of similar data types at contiguous memory locations.
    Unlike Arrays, Structures in C++ are user defined data types which are used
    to store group of items of non-similar data types.

    What is a structure?

    A structure is a user-defined data type in C/C++. A structure creates a data type
    that can be used to group items of possibly different types into a single type.

    link:  https://www.w3schools.com/cpp/cpp_structs.asp#:~:text=Structures%20(also%20called%20structs)%20are,%2C%20bool%2C%20etc.).
           https://www.geeksforgeeks.org/structures-in-cpp/

*/
/*
    Using structs
    We can declare an array inside a structure in C++. We can return an instance of the struct
    because the elements in the array of structures are copied deeply.
*/

struct myStructure //-> struct variable_name
{
    int arr[100]; //Declaring an array inside struct with size 100.
};

struct myStructure structArray() //Here the return type is struct myStructure
{
    struct myStructure a; //myStructure structure member declared

    for(int i=0; i<5; i++)
    {
        a.arr[i] = i;
    }
    return a; //address of structure member returned
};

int main()
{
    struct myStructure a;
    a = structArray();

    cout<<"arr[]: "<<a.arr[0]<<" "<<a.arr[1]<<" "<<a.arr[2]<<" "<<a.arr[3]<<" "<<a.arr[4]<<endl;


    //output: arr[]: 0 1 2 3 4

    /*give error
    int i=0;
    while(a.arr[i] != '\0')
    {
        cout<<a.arr[i]<<" ";
    }
    cout<<endl;
    show nothing cause we dynamicallly call array size 100 in this line of code: int arr[100];
    */
}
