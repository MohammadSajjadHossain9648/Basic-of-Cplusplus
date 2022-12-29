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
                  https://www.educative.io/answers/how-to-dynamically-allocate-initialize-and-delete-arrays-in-cpp
                  https://algorithmtutor.com/Data-Structures/Basic/Dynamic-Arrays/
                  https://www.codespeedy.com/how-to-create-a-dynamic-array-in-cpp/

    before start read this: github\Standard Template Library (STL)\memory allocation
                            github\Standard Template Library (STL)\Runtime and Compile-time
*/
int main()
{
//take input from user
    int row, col;
    cout<<"Enter the number of row: ";
    cin>>row;
    cout<<"Enter the number of column: ";
    cin>>col;

    //intialize row in heap memory
    int **arr = new int * [row];

    //intialize column of every individual row in heap memory
    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];  //same as, *(arr+i) = new int[col];
    }

    //taking input
    cout<<"\nEnter the array elements:\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
        cout<<"\n";
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
    delete arr; //same as free(arr);



    //output:
    //    Enter the number of row: 2
    //    Enter the number of column: 3
    //
    //    Enter the array elements:
    //    1
    //    2
    //    3
    //
    //    4
    //    5
    //    6
    //
    //
    //    int **arr:
    //    1 2 3
    //    4 5 6
}
