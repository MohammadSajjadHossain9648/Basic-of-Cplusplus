#include<iostream>
#include<vector>
using namespace std;
/*
    to know more: https://leetcode.com/problems/spiral-matrix/
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


    cout<<"\nprint like Spiral Matrix: ";

    int startRow = 0;
    int endRow = r-1;
    int startColumn = 0;
    int endColumn = c-1;

    int count = 0, total = r*c;

    while(count < total)
    {
        //print start row -> column increase left to right and increase startRow
        //cout<<"\n\ncolumn increase left to right -> ";
        for(int i=startColumn; (count<total) && i<=endColumn; i++)
        {
            cout<<arr[startRow][i]<<" ";
            count++;
        }
        startRow++;
        //cout<<"\ncount: "<<count;

        //print end column -> row increase top to bottom and decrease endColumn
        //cout<<"\n\nrow increase top to bottom -> ";
        for(int i=startRow; (count<total) && i<=endRow; i++) //(count<total) && -> check if count>=total, for loop stop to run
        {
            cout<<arr[i][endColumn]<<" ";
            count++;
        }
        endColumn--;
        //cout<<"\ncount: "<<count;

        //print end row -> column decrease right to left and decrease endRow
        //cout<<"\n\ncolumn decrease right to left -> ";
        for(int i=endColumn; (count<total) && i>=startColumn; i--)
        {
            cout<<arr[endRow][i]<<" ";
            count++;
        }
        endRow--;
        //cout<<"\ncount: "<<count;

        //print first column -> row decrease bottom to top and increase startColumn
        //cout<<"\n\nrow decrease bottom to top -> ";
        for(int i=endRow; (count<total) && i>=startRow; i--)
        {
            cout<<arr[i][startColumn]<<" ";
            count++;
        }
        startColumn++;
        //cout<<"\ncount: "<<count;

    }



    //output:
    //    int arr[4][4]:
    //    1 2 3 4
    //    5 6 7 8
    //    9 10 11 12
    //    13 14 15 16
    //
    //    print like Spiral Matrix: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

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


    print like Spiral Matrix:

    column increase left to right -> 1 2 3 4
    count: 4

    row increase top to bottom -> 8 12 16
    count: 7

    column decrease right to left -> 15 14 13
    count: 10

    row decrease bottom to top -> 9 5
    count: 12

    column increase left to right -> 6 7
    count: 14

    row increase top to bottom -> 11
    count: 15

    column decrease right to left -> 10
    count: 16

    row decrease bottom to top ->
    count: 16
    */

}
