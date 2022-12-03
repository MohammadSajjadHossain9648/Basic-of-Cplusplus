#include<iostream>
#include<iomanip>
using namespace std;
/*
    to know more: https://www.delftstack.com/howto/cpp/cpp-return-2d-array/
                  https://linuxhint.com/return-2d-array-function-cpp/
                  https://www.folkstalk.com/tech/how-to-return-2d-array-from-function-c-with-code-examples/
*/

const int r = 4;
const int c = 4;

int **updateArr(int *arr)
{
    for(int row=0; row<r; row++)
    {
        for(int column=0; column<c; column++)
        {
            *(arr + row*c + column) *= 2;
        }
    }

    return reinterpret_cast<int **>(arr);
}

int main()
{
    int arr[][c] =
    {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 }
    };

    cout<<"\narr[4][4] : \n";
    for(auto &row: arr)
    {
        for(auto column: row)
        {
            cout<<setw(4)<<column;
        }
        cout<<"\n";
    }


    int **ptr = updateArr(*arr);

    cout<<"\nupdated array, arr[4][4] : \n";
    for(int row=0; row<r; row++)
    {
        for(int column=0; column<c; column++)
        {
            cout<<setw(4)<<*((int *)ptr + row*c + column);
        }
        cout<<endl;
    }


    //output:
    //
    //    arr[4][4] :
    //       1   2   3   4
    //       5   6   7   8
    //       9  10  11  12
    //      13  14  15  16
    //
    //    updated array, arr[4][4] :
    //       2   4   6   8
    //      10  12  14  16
    //      18  20  22  24
    //      26  28  30  32
}
