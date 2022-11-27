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
                  https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/
                  https://www.scaler.com/topics/two-dimensional-array-in-cpp/
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
    // input an array from user
    char ch[100]; //same as string ch; cause string is same type of char array
    int len;
    cout<<"\nenter the character length: ";
    cin>>len;
    ch[len];

    //it is efficient for single char input
    //cin>>ch; //it take space -> len = 5, input =  tige r, output = tige


    for(int i=0; i<len; i++)
    {
        cin>>ch[i]; //it take space -> len = 5, input =  tige r, output = tiger
    }

    cout<<"\nchar ch[] = "<<ch<<endl;

    //or can be print
    cout<<"\nchar ch[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<ch[i]<<" ";
    }
    cout<<endl;

    /*output:
    enter the character length: 10
    i am new here

    char ch[] = iamnewhere

    char ch[] = i a m n e w h e r e
    */


    // initialising an array -> data_type variable_name[size of array]
    int integer_num[] = { 1, 2, 3, 4, 5 };
    float float_num[] = { 1.2, 2.4, 3.6, 4.8, 5.10 };
    double double_num[] = { 1.22, 2.44, 3.66, 4.88, 5.100 };
    char character_num[] = { 'a', 'b', 'c', 'd', 'e' }; // show error if, char character_num[] = { 'a', '2', 'c', 'd', 'e' }; cause char array takes no int number.
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
            cout<<arr[i]<<" ";
        }
        cout<<endl;

        //output:
        //  10 10 10 ... 10 (43 times)

    */




// Two-Dimensional Array:
    // input an 2d-array from user
    int arr3[100][100];

    int r, c;
    cout<<"\nEnter row and column number: \n";
    cin>>r>>c;

    cout<<endl<<"\nEnter Two-Dimensional Array value: "<<endl;
    for(int row=0; row<r; row++)
    {
        for(int column=0; column<c; column++)
        {
            cin>>arr3[row][column];
        }
        cout<<endl;
    }

    //print row wise 2d-array
    cout<<"\nTwo-Dimensional Array(row * column): "<<endl;
    for(int row=0; row<r; row++)
    {
        for(int column=0; column<c; column++)
        {
            cout<<arr3[row][column]<<" ";
        }
        cout<<endl;
    }


    //another method: input an 2d-array from user by Dynamic Allocation
    int r2, c2;
    cout<<"\nEnter row and column number: \n";
    cin>>r2>>c2;

    int** arr5 = new int*[r2];
    cout<<endl<<"\nEnter Two-Dimensional Array value: "<<endl;
    for(int row=0; row<r2; row++)
    {
        arr5[row] = new int[c2];
        for(int column=0; column<c2; column++)
        {
            cin>>arr5[row][column];
        }
        cout<<endl;
    }

    //print row wise 2d-array
    cout<<"\nTwo-Dimensional Array(row * column): "<<endl;
    for(int row=0; row<r2; row++)
    {
        for(int column=0; column<c2; column++)
        {
            cout<<arr5[row][column]<<" ";
        }
        cout<<endl;
    }



    //print column wise 2d-array
    cout<<"\nTwo-Dimensional Array(column * row): "<<endl;
    for(int column=0; column<c2; column++)
    {
        for(int row=0; row<r2; row++)
        {
            cout<<arr5[row][column]<<" ";
        }
        cout<<endl;
    }
    /* can also write column wise 2d-array
    for(int row=0; row<c2; row++)
    {
        for(int column=0; column<r2; column++)
        {
            cout<<arr5[column][row]<<" ";
        }
        cout<<endl;
    }
    */



    //initialize Two-Dimensional Array
    int arr4 [3][2] = { {1, 2}, {3, 4}, {5, 6} }; //same as -> int arr3 [3][2]/arr3 [][2] = {1, 2, 3, 4, 5, 6};

    //get the length of row and column
    int r1 = sizeof(arr4)/sizeof(arr4[0]); //indicates row length
    int c1 = sizeof(arr4[0])/sizeof(int); //indicates column length
    /* same as above
    int r1 = sizeof(arr4)/sizeof(arr4[0]); //indicates row length
    int c1 = sizeof(arr4[0])/sizeof(arr4[0][0]); //indicates column length
    */

    //print row wise 2d-array
    cout<<"\nTwo-Dimensional Array(row * column): "<<endl;
    for(int row=0; row<r1; row++)
    {
        for(int column=0; column<c1; column++)
        {
            cout<<arr4[row][column]<<" ";
        }
        cout<<endl;
    }

    //print column wise 2d-array
    cout<<"\nTwo-Dimensional Array(column * row): "<<endl;
    for(int column=0; column<c1; column++)
    {
        for(int row=0; row<r1; row++)
        {
            cout<<arr4[row][column]<<" ";
        }
        cout<<endl;
    }

    /* can also write column wise 2d-array
    for(int row=0; row<c1; row++)
    {
        for(int column=0; column<r1; column++)
        {
            cout<<arr3[column][row]<<" ";
        }
        cout<<endl;
    }
    */

    //output:
    //    Enter row and column number:
    //    3
    //    4
    //
    //
    //    Enter Two-Dimensional Array value:
    //    1 2 3 4 5 6 7 8 9 10 11 12
    //
    //
    //    Enter row and column number:
    //    3
    //    4
    //
    //
    //    Enter Two-Dimensional Array value:
    //    1 2 3 4 5 6 7 8 9 10 11 12
    //
    //
    //    Two-Dimensional Array(row * column):
    //    1 2 3 4
    //    5 6 7 8
    //    9 10 11 12
    //
    //    Two-Dimensional Array(column * row):
    //    1 5 9
    //    2 6 10
    //    3 7 11
    //    4 8 12
    //
    //
    //    Two-Dimensional Array(row * column):
    //    1 2
    //    3 4
    //    5 6
    //
    //    Two-Dimensional Array(column * row):
    //    1 3 5
    //    2 4 6




//Multidimensional Array:
    int arr6[2][3][2] = {  { { 0, 1 }, { 2, 3 }, { 4, 5 } },
                            { { 6, 7 }, { 8, 9 }, { 10, 11 } }  };

    cout<<"\narr6[2][3][2]: \n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout<<arr6[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
    }


    //output:
    //    arr6[2][3][2]:
    //    0 1
    //    2 3
    //    4 5
    //
    //
    //    6 7
    //    8 9
    //    10 11

}
