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
//take input from user
    int *x = new int;
    cout<<"enter an interger: ";
    cin>>*x;

    cout<<"input value of x = "<<*x;

    delete x; //same as free(x);



//initialize a value and store in heap or dynamically allocate the value
    int *num = new int; //same as int *num = new(nothrow) int; and here, num is a pointer
    *num = 10;

    /* same as above
    int *num = new int(10);

    or,
    int *num = NULL;
    num = new int;
    *num = 10;


    never write:
    int *num = new int[10]; -> it indicates 1d array with fixed size 10
    */

    cout<<"\n\nvalue of num = "<<*num;

    //deallocate or delete heap memory after
    delete num; //same as free(num);

    cout<<"\nafter deallocation, value of num = "<<*num;


    //output:
    //    enter an interger: 500
    //    input value of x = 500
    //
    //    value of num = 10
    //    after deallocation, value of num = -1290331632




//check memory before dynamically allocate the value
    int *num2 = new int; //same as int *num2 = new(nothrow) int; and here, num2 is a pointer

    if(!num)
    {
        cout<<"\nallocation of memory failed.";
    }
    else
    {
        *num2 = 20;
        cout<<"\n\nvalue of num2 = "<<*num2;

        //deallocate or delete heap memory after
        delete num2; //same as free(num2);

        cout<<"\nafter deallocation, value of num2 = "<<*num2;
    }


    //output:
    //
    //    value of num2 = 20
    //    after deallocation, value of num2 = -2095965680

    /*
    code:
        int *num = new int;
        *num = 10;
    The following figures show examples of what stack memory looks like when the corresponding above code is run:

            main()
        |           |       -------------
        |           |   |-->|  int  10  |
        |           |   |   -------------
        -------------   |   |           |
        | int* num .-|---   |           |
        -------------       -------------
            stack               heap
    */
}
