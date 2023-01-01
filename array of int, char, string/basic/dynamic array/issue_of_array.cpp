#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/runtime-and-compile-time-constants-in-c/
                  https://www.javatpoint.com/compile-time-vs-runtime
                  https://nus-cs1010.github.io/2223-s1/14-array.html
                  https://www.learncpp.com/cpp-tutorial/compile-time-constants-constant-expressions-and-constexpr/
                  https://www.learncpp.com/cpp-tutorial/arrays-part-i/
                  https://www.techrepublic.com/article/from-compile-time-constants-to-runtime-constants-and-back/
                  https://www.geeksforgeeks.org/memory-layout-of-c-program/
                  https://www.baeldung.com/cs/runtime-vs-compile-time
*/
/*
    We now look at the first of the two compound data types in C -- arrays.

    An array is a data type that can hold one or more values. An array variable can only store values of the same
    type. We say that the array variable is an array of . For instance, we can declare a variable list to be an array
    of long, in which case, list can hold one or more long values.

    There are three different types of arrays in C:

    1.A fixed-size array is an array in which the size is known during compile time.
    2.A variable-length array (VLA) is an array in which the size is variable (known only during run-time) and
    is allocated on the stack.
    3.A dynamically allocated array is an array in which the size is variable (known only during run-time) and
    is allocated on the heap.

    In this unit, we will focus on fixed-size arrays. We will explain why VLA should not be used. We will leave our
    discussion of dynamically allocated arrays to later units.
*/
/*
    example 1:
    int testScore[30]{}; // allocate 30 integer variables in a fixed array

    In an array variable declaration, we use square brackets ([]) to tell the compiler both that this is an array
    variable (instead of a normal variable), as well as how many variables to allocate (called the array length).

    In the above example, we declare a fixed array named testScore, with a length of 30. A fixed array (also called
    a fixed length array or fixed size array) is an array where the length is known at compile time. When testScore
    is instantiated, 30 integers will be allocated.
*/
/*
    A note on dynamic arrays:
    Because fixed arrays have memory allocated at compile time, that introduces two limitations:
    Fixed arrays cannot have a length based on either user input or some other value calculated at runtime.
    Fixed arrays have a fixed length that can not be changed.
    In many cases, these limitations are problematic. Fortunately, C++ supports a second kind of array known as a
    dynamic array. The length of a dynamic array can be set at runtime, and their length can be changed.
*/
int main()
{
/*
    always remember:
    1. when we use stack memory, it is called static memory allocation.
    2. when we use heap memory, it is called dynamic memory allocation.

    //main theme of array
    //bad practice and never do that (see example 1)

    example 1:
    int x;
    cin>>x;
    int arr[n];

    here in example 1, first we dont know the array size in code. so we take input x as array size. after that we know
    the size of int arr. so it is a bad practice.

    solution: we need to know the array size in compile-time. so we need fixed the array size in code.
    like, int arr[100000];


    reason behind it?
    when a program start, memory create for program execution. there are two types of memory. one is stack and another
    is heap.
    stack memory like(limitate storage):
        -------
        |     |
        |     |
        |     |
        |     |
        -------

    heap memory like(unlimitate storage):
        ----------------------------------
        |                                |
        |                                |
        |                                |
        |                                |
        |                                |
        |                                |
        |                                |
        ----------------------------------

    like when we take -> int arr[10000]; so stack memory size will be 10000. so program never crashed.
    so it is a good practice.

    but in example 1,
        int x;
        cin>>x;
        int arr[n];

    normal stack size / stack available memory will be like 500. but, we input x = 10000 which is almost like heap size.
    so that, we cannot initialize the array with size 10000 in runtime. cause array size is big than normal stack size.
    so, program crashed easily.

    but if we input, x = 10; which is not big than normal stack size. so program never crashed.



    note: good practice is initialize array size in code or in compile time. like
    int arr[10000]; -> it stores in stack memory.
*/
}
