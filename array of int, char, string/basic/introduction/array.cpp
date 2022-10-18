#include<iostream>
using namespace std;
/*
    to know more: https://www.guru99.com/arrays-in-cpp-functions.html
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-array
                  https://www.programiz.com/cpp-programming/arrays
                  https://www.geeksforgeeks.org/arrays-in-c-cpp/
                  https://thispointer.com/how-to-initialize-an-array-with-same-value-in-c/#:~:text=The%20very%20first%20and%20the,to%20give%20an%20initializer%20list.&text=int%20arr%5B%5D%20%3D%20%7B%2010%2C,%2C%2010%2C%2010%2C%2010%20%7D%3B
                  https://www.techiedelight.com/initialize-elements-array-same-value-c-cpp/
*/
/*
    What is an Array?
    An array is a data structure that stores an element of the same data type sequentially.
    Why do we need arrays?
    Arrays are very important in any programming language. They provide a more convenient way of storing
    variables or a collection of data of a similar data type together instead of storing them separately.
    Each value of the array will be accessed separately.

    for example, int x[6];
    Few Things to Remember:
    1.The array indices start with 0. Meaning x[0] is the first element stored at index 0.
    If the size of an array is n, the last element is stored at index (n-1).
    In this example, x[5] is the last element.

    2.Elements of an array have consecutive addresses. For example, suppose the starting address of x[0] is 2120.
    Then, the address of the next element x[1] will be 2124, the address of x[2] will be 2128, and so on.
    Here, the size of each element is increased by 4. This is because the size of int is 4 bytes.


    Types of Arrays:
    There are two types of C++ arrays:
    1.One dimensional Array
    2.Multi-dimensional Array
    3.Pointer to an Array
*/
/*
    how do we access any value of an array?

    let we declare, int x[5] = {10, 20, 30, 40, 50}
    in storage, n consecutive block/memory for int x where all value store there with starting index 0 to (n-1).
    here, n is size of array which is 5 ->(x[5]).
    let index 0 store in address 100. range of address is -> (100, 100+((5-1)*4)) = (100, 116)
    here, 4 is size of int in byte and 5 is size of array.

    index ->     0  1   2   3   4
    int x[]->   10  20  30  40  50
    address->   100 104 108 112 116

    what happen when we access like int x[3] or 4th location?
    first memory see int array x starting address of index 0 is 100.
    then calculate this -> starting_address + (n * 4) , here n is 3 which is the index number.
                        -> 100 + (3 * 4) -> 112
    so the store value in address 112 is 40.
    finally, we can use this value.
*/
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


//Multidimensional Array:
    int array[5][10][4];



// initialising an array with number 5
    int arr4[10] = {5};
    for(int i: arr4)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    //output: 5 0 0 0 0 0 0 0 0 0 -> not possible with whatever number is except 0
    // int arr3[10]; is same as int arr3[10] = {0};

    //can do that with fill_n() function
    int arr5[10];
    fill_n(arr5, 10, 5); //->fill_n( variable_name, size_of_array, value )
    for(int i: arr5)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;



//Array declaration by specifying the size
    // input from user to initialize the array
    int index;
    cout<<"what is the array size: ";
    cin>>index;

    int number[index];
}
