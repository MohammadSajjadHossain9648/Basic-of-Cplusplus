#include <iostream>
using namespace std;
/*
    to know more: https://www.scaler.com/topics/two-dimensional-array-in-cpp/
*/
// Main function.
int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int sum[3][3];

    cout<<"Insert the values of the first matrix, mat1[3][3]: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>mat1[i][j];
        }
        cout<<endl;
    }

    // Making a line break.
    cout<<endl;

    cout<<"Insert the values of the second matrix, mat1[3][3]: \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>mat2[i][j];
        }
        cout<<endl;
    }

    // Adding the two matrices using for loops.
    cout<<"output-> arr[3][3] : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
             cout<<sum[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;

    //output:
    //    Insert the values of the first matrix, mat1[3][3]:
    //    1 2 3
    //
    //    4 5 6
    //
    //    7 8 9
    //
    //
    //    Insert the values of the second matrix, mat1[3][3]:
    //    9 8 7
    //
    //    6 5 4
    //
    //    3 2 1
    //
    //    output-> arr[3][3] :
    //    10  10  10
    //    10  10  10
    //    10  10  10
}
