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
/*  always remember:
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
    int arr[10000];
*/
/*
    how to store array in heap memory?
    int* arr = new int[5];

    we know, only we can dynamically memory allocation in heap. if we use heap memory, we use 'new' keyword.
    see the model:
        in stack                                            in heap
        ---------                                 ----------------------------------
        |-----  |                                 |   -------------                |
        ||710|  | <------------------------------ |   |  |  |  |  |                |
        |-----  |                                 |   -------------                |
        | arr   |                                 |    710 (starting heap address) |
        |       |                                 |                                |
        ---------                                 ----------------------------------
         4 bytes                                             5*4 bytes

        total bytes = (4 + 5*4) bytes = 24 bytes, which need for memory allocation in stack and heap memory.

        here, new int[5] -> create 5 size array in heap memory and return memory address which is 710
        and also int* arr -> it is arr pointer and point to address of heap memory and store in arr block

        in code, first create 5 size array in heap memory. then return first heap memory address which is 710.
        then in stack memory, create a block for arr with storing heap memory address (710).
*/
int main()
{
}
