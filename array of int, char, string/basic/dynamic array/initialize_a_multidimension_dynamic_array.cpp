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
/*  how initialize in heap?
    step 1: intialize row in heap memory
    step 2: intialize column of every individual row in heap memory
*/
int main()
{
//initialize an 2d dynamic array and store in heap or dynamically allocate the value
    int row = 3, col = 4;

    //intialize row in heap memory
    int **arr = new int * [row];

    //intialize column of every individual row in heap memory
    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];  //same as, *(arr+i) = new int[col];
    }


    /*same as above
    int **arr = new int * [row];
    arr[0] = new int[]{1,2,3,4};
    arr[1] = new int[]{5,6,7,8};
    arr[2] = new int[]{9,10,11,12};

    or can write
    int **arr = new int * [row];
    arr[0][1] = 1;
    arr[0][2] = 2;
    arr[0][3] = 3;
    arr[0][4] = 4;

    arr[1][0] = 5;
    ....
    */
    /* never write this 3 way
    int row = 3, col = 4;

    //intialize row in heap memory
    int **arr = new int * [row]{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int **arr = new int * [col]{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int **arr = new int [row][col]{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    */

//initialize value
    static int k = 1;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr[i][j] = k;
            k++;
        }
    }


//showing output
    cout<<"\nint **arr:\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }



//releasing memory or deallocate memory
    //delete column of every individual row in heap memory
    for(int i=0; i<row; i++)
    {
        delete[] arr[i];
    }

    //delete row in heap memory
    delete[] arr;     //never write-> delete arr[];



    //output:
    //
    //    int **arr:
    //    1 2 3 4
    //    5 6 7 8
    //    9 10 11 12


    /*
    code:
    //intialize row in heap memory
    int **arr = new int * [row];

    //intialize column of every individual row in heap memory
    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];  //same as, *(arr+i) = new int[col];
    }


    The following figures show examples of what stack memory looks like when the corresponding above code is run:
    step 1: intialize row in heap memory first
        int **arr = new int * [row];

        |       |
        |       |
        |       |
        |-------|
        | int * |
        |-------|
        | int * |
        |-------|
        | int * |
        ---------
          stack

    here, int * pointer point to enter row's column. which mean, int *arr = new int[col];
    and int * point to every pointer co-responsible with/hold an array.


    step 2: intialize column of every individual row in heap memory
    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];  //same as, *(arr+i) = new int[col];
    }

            |       |
            |       |
            |       |               ------------------------------------------
            |-------|               | --------------------------------       |
     1st row| int * |   --------->  | |      |       |       |       |       |
            |-------|               | --------------------------------       |
     2nd row| int * |   --------->  | |      |       |       |       |       |
            |-------|               | --------------------------------       |
     3rd row| int * |   --------->  | |      |       |       |       |       |
            ---------               | --------------------------------       |
                                    ------------------------------------------
              stack                                 heap

    */
}
