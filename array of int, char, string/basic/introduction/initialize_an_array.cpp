#include<iostream>
#include<iomanip>
using namespace std;
/*
    to know more: https://www.guru99.com/arrays-in-cpp-functions.html
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-array
                  https://www.programiz.com/cpp-programming/arrays
                  https://www.geeksforgeeks.org/arrays-in-c-cpp/
                  https://thispointer.com/how-to-initialize-an-array-with-same-value-in-c/#:~:text=The%20very%20first%20and%20the,to%20give%20an%20initializer%20list.&text=int%20arr%5B%5D%20%3D%20%7B%2010%2C,%2C%2010%2C%2010%2C%2010%20%7D%3B
                  https://www.techiedelight.com/initialize-elements-array-same-value-c-cpp/
*/

//define macros
//#define x1 10
//#define x2 x1, x1
//#define x4 x2, x2
//#define x8 x4, x4
//#define x16 x8, x8
//#define x32  x16, x16

int main()
{
// One-Dimensional Array:
    // initialising an array -> data_type variable_name[size of array]
    int integer_num[] = { 1, 2, 3, 4, 5 };
    float float_num[] = { 1.2, 2.4, 3.6, 4.8, 5.10 };
    double double_num[] = { 1.22, 2.44, 3.66, 4.88, 5.100 };
    char character_num[] = { 'a', 'b', 'c', 'd', 'e' };
    string string_num[] = { "apple", "banana", "lichi" };

    cout<<"One-Dimensional Array for any datatype: ";
    for(double i: double_num)     //-> for(data_type variable: array_name)
    {
        cout<<i<<setw(6);
    }
    cout<<endl<<endl;
    //same as
    //    for(int i=0; i<size(integer_num); i++)
    //    {
    //        cout<<integer_num[i]<<" "; // can be write -> cout<<i[integer_num]<<" ";
    //    }

    //output:
    //    One-Dimensional Array for any datatype: 1.22  2.44  3.66  4.88   5.1


// Two-Dimensional Array:
    int arr3 [3][2] = { {0, 2}, {1, 4}, {3, 7} };
    cout<<endl<<"Two-Dimensional Array: "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    //output:
    //    Two-Dimensional Array:
    //    0 2
    //    1 4
    //    3 7

//Multidimensional Array:
    int array[5][10][4];

    /*
        Initialize all elements of an array in C/C++

    approach 1. Using Initializer List
        The array will be initialized to 0 if we provide the empty initializer list or just specify 0 in the initializer list.
        int arr[5];
        int arr[5] = {};
        int arr[5] = { 0 };  // results in [0, 0, 0, 0, 0]
        ----------------------------------------------------------------------------------------------------------
        To initialize an array in C/C++ with the same value, the naive way is to provide an initializer list like,
        int arr[5] = { 1, 1, 1, 1, 1};
        // or don't specify the size
        int arr[] = { 1, 1, 1, 1, 1 };
        ----------------------------------------------------------------------------------------------------------
        this can be write using for loop
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 1;
        }



    approach 2. Using Designated Initializers
        With GCC compilers, we can use designated initializers. To initialize a range of elements to the same value,
        we can write [first ... last] = value.

        int arr[5] = {[0 ... 4] = 1}; same as approach 1 first one
        // or don't specify the size
        int arr[] = {[0 ... 4] = 1};



    approach 3. Using fill_n function
        int arr[5];
        fill_n(arr, 5, 1); //->fill_n( variable_name, size_of_array, value )
        for(int i: arr5)
        {
            cout<<i<<" ";
        }
        cout<<endl<<endl;




    approach 4. Initialize an Array with same value using Macros
        int arr[] = {x32, x8, x2, x1}; -> see value in header

        // n = 43 = (32 + 8 + 2 + 1)
        int n = sizeof(arr) / sizeof(int);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;

        //output:
        //  10 10 10 ... 10 (43 times)

    */

}
