#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/
                  https://www.geeksforgeeks.org/how-to-declare-a-2d-array-dynamically-in-c-using-new-operator/
                  https://www.geeksforgeeks.org/advantages-of-vector-over-array-in-c/
                  https://dotnettutorials.net/lesson/static-vs-dynamic-array/
                  https://www.javatpoint.com/dynamic-memory-allocation-in-cpp
                  https://www.techiedelight.com/dynamic-memory-allocation-in-c-for-2d-3d-array/
                  https://www.guru99.com/cpp-dynamic-array.html
                  https://cplusplus.com/doc/tutorial/dynamic/
                  https://www.codespeedy.com/how-to-create-a-dynamic-array-in-cpp/
                  https://www.tutorialspoint.com/how-to-create-a-dynamic-array-of-integers-in-cplusplus-using-the-new-keyword
                  https://linuxhint.com/dynamically-allocated-array-cpp/
                  https://linuxhint.com/cpp-change-array-size/
                  https://algorithmtutor.com/Data-Structures/Basic/Dynamic-Arrays/
                  https://www.codespeedy.com/how-to-create-a-dynamic-array-in-cpp/

    before start read this: github\Standard Template Library (STL)\memory allocation
                            github\Standard Template Library (STL)\Runtime and Compile-time
*/
int main()
{
//initialize an array and store in heap or dynamically allocate the value
    //creating 1d dynamic array
    int *arr = new int[5]{10,20,30,40,50}; //same as int *arr = new(nothrow) int[5]; and here, arr is a pointer

    /* same as above
    int *arr { new int[5]{10,20,30,40,50} };

    or,
    int *arr = NULL;
    arr = new int[5]{10,20,30,40,50};

    show error
    int *arr = new int(5){10,20,30,40,50};
    */

    /*initialize array value using for loop with condition
    int *arr = new int[5]; //same as, int *arr = new int(5);
    for(int i=0; i<5; i++)
    {
        arr[i] = (i+1)*10; //same as *(arr+i) = (i+1)*10;
    }

    or,
    int *arr = new int[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    */

    //showing output
    cout<<"\nint *arr = ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" "; //same as cout<<*(arr+i);
    }

    //releasing memory or deallocate memory
    delete[] arr; //same as delete arr; or free(arr);


    //output:
    //    int *arr = 10 20 30 40 50


    /*
    code:
    int *arr = new int[5]{10,20,30,40,50};

    The following figures show examples of what stack memory looks like when the corresponding above code is run:

        in stack                                            in heap
        ---------                                 ----------------------------------
        |-----  |                                 |   --------------------------   |
        ||710|  | <------------------------------ |   | 10 | 20 | 30 | 40 | 50 |   |
        |-----  |                                 |   --------------------------   |
        | arr   |                                 |    710 (starting heap address) |
        |       |                                 |                                |
        ---------                                 ----------------------------------
         4 bytes                                             5*4 bytes
    */
}
