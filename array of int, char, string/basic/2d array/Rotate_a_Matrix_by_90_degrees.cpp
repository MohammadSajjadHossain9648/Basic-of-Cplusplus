#include<iostream>
using namespace std;
/*
    to know more: https://leetcode.com/problems/rotate-image/
*/
int main()
{
    int arr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    int r = sizeof(arr)/sizeof(arr[0]); //indicates row length
    int c = sizeof(arr[0])/sizeof(int); //indicates column length

    cout<<"\nint arr["<<r<<"]["<<c<<"]:\n";
    for(int row=0; row<r; row++)
    {
        for(int column=0; column<c; column++)
        {
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }


    cout<<"\nRotate a Matrix by 90 degrees: ";

    int startRow = 0;
    int endRow = r-1;
    int startColumn = 0;
    int endColumn = c-1;

    int count = 0;

    while(count < c)
    {
        //print all column in 90 degree -> row decrease bottom to top and increase startColumn
        //cout<<"\n\nrow decrease bottom to top -> ";
        for(int i=endRow; i>=startRow; i--)
        {
            cout<<arr[i][startColumn]<<" ";
        }
        startColumn++;
        count++;
        //cout<<"\ncount: "<<count;

    }



    //output:
    //    int arr[4][4]:
    //    1 2 3 4
    //    5 6 7 8
    //    9 10 11 12
    //    13 14 15 16
    //
    //    print like 90 degree rotate image: 13 9 5 1 14 10 6 2 15 11 7 3 16 12 8 4

    /*
    Time Complexity: O(M*N). To traverse the matrix O(M*M) time is required. ->here, m is number of row and n is number of column
    Auxiliary Space: O(1). No extra space is required.
    */


    /* how code work?

            startColumn             endColumn
    startRow     1      2       3       4
                 5      6       7       8
                 9      10      11      12
    endRow       13     14      15      16

    after printing 90 degree:
                startColumn             endColumn
    startRow     13     9       5       1
                 14     10      6       2
                 15     11      7       3
    endRow       16     12      8       4



    Rotate a Matrix by 90 degrees:
    //
    //    row decrease bottom to top -> 13 9 5 1
    //    count: 1
    //
    //    row decrease bottom to top -> 14 10 6 2
    //    count: 2
    //
    //    row decrease bottom to top -> 15 11 7 3
    //    count: 3
    //
    //    row decrease bottom to top -> 16 12 8 4
    //    count: 4
    */

}
