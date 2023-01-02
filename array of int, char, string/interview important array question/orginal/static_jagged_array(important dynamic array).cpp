#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/jagged-array-or-array-of-arrays-in-c-with-examples/
                  https://cplusplus.com/forum/beginner/284103/
*/
/*
    Jagged array is array of arrays such that member arrays can be of different sizes, i.e., we can create a 2-D array
    but with a variable number of columns in each row. These type of arrays are also known as Jagged arrays.

    Example:
    arr[][] = { {0, 1, 2},
                {6, 4},
                {1, 7, 6, 8, 9},
                {5}
              };
*/
int main()
{
    //declare row and column size
    int row = 3, col[] = {3,1,2};

    int arr[row][4];

    static int val = 1;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col[i]; j++)
        {
            arr[i][j] = val;
            val++;
        }
    }

    /* can initialize directly
    int arr[][4]= {{1,2,3},{4},{5,6}};
    */

    //print the static array
    cout<<"\nint arr[][]:\n";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col[i]; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    //output:
    //    int arr[][]:
    //    1 2 3
    //    4
    //    5 6
}
