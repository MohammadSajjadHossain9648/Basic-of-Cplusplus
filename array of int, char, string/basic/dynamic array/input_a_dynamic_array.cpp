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
    int len;
    cout<<"Enter the number of items: ";
    cin>>len;

    //creating 1d dynamic array
    int *arr = new int[len]; //here, int *arr is a pointer

    //taking input
    cout<<"\nEnter the array elements:\n";
    for(int i=0; i<len; i++)
    {
        cin>>arr[i]; //same as cin>>*(arr+i);
    }

    //showing output
    cout<<"\nint *arr = ";
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<" "; //same as cout<<*(arr+i);
    }

    //releasing memory or deallocate memory
    delete[] arr; //same as delete arr; or free(arr);


    //output:
    //    Enter the number of items: 4
    //
    //    Enter the array elements:
    //    10
    //    20
    //    30
    //    40
    //
    //    int *arr = 10 20 30 40
}
