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
    what is dynamic memory allocation?
    Dynamic memory allocation in C/C++ refers to performing memory allocation manually by programmer.
    Dynamically allocated memory is allocated on Heap and non-static and local variables get
    memory allocated on Stack.

    For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated.
    For dynamically allocated memory like “int *p = new int[10]”, it is programmers responsibility
    to deallocate memory when no longer needed. If programmer doesn’t deallocate memory, it causes
    memory leak (memory is not deallocated until program terminates).

    Many times, you are not aware in advance how much memory you will need to store particular information
    in a defined variable and the size of required memory can be determined at run time.

    You can allocate memory at run time within the heap for the variable of a given type using a special operator
    in C++ which returns the address of the space allocated. This operator is called new operator.

    If you are not in need of dynamically allocated memory anymore, you can use delete operator, which
    de-allocates memory that was previously allocated by new operator.

    what is heap and stack?
    The stack − All variables declared inside the function will take up memory from the stack.
    The heap − This is unused memory of the program and can be used to allocate the memory dynamically
    when program runs.

    link: https://www.tutorialspoint.com/cplusplus/cpp_dynamic_memory.htm
          https://eng.libretexts.org/Courses/Delta_College/C_-_Data_Structures/03%3A_Arrays/3.01%3A_Dynamic_memory_allocation
          https://www.geeksforgeeks.org/how-do-dynamic-arrays-work/
          https://www.programiz.com/cpp-programming/memory-management
*/
/*
    Using dynamically allocated array
    Arrays can be dynamically allocated using malloc() or new and they will remain there until we delete them.
    We will delete the array after coming out of the function.
*/

int* dynamicArray()
{
    int* arr = new int[100];
    int i=0;
//    arr[0] = 1 ;
//    arr[1] = 2 ;
//    arr[2] = 3 ;
//    arr[3] = 4 ;
//    arr[4] = 5 ;
    while(i != 5)
    {
        arr[i] = i;
        i++;
    }
    return arr;
}

int main()
{
    int* arr = dynamicArray();
    cout<<"arr[]: "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;


    //output: arr[]: 0 1 2 3 4

    /* wrong issue
    for(int i:arr)
    {
        cout<<i<<" ";
    } -> give error
    cout<<endl;
    while(arr[i] != '\0')
    {
        cout<<arr[i]<<" ";
        i++;
    }
    -> it show nothing cause we dynamicallly call array size 100 in this line of code: int* arr = new int[100];
    */
}
