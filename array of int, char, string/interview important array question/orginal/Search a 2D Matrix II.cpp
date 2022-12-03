#include<iostream>
using namespace std;
/*
    to know more: https://leetcode.com/problems/search-a-2d-matrix-ii/
*/
int main()
{
    int arr[][5] = {1,4,7,11,15,2,5,8,12,19,3,6,9,16,22,10,13,14,17,24,18,21,23,26,30};

    int x;
    cout<<"enter a search value: ";
    cin>>x;

    int r = sizeof(arr)/sizeof(arr[0]);
    int c = sizeof(arr[0])/sizeof(arr[0][0]);

    cout<<"\nint arr["<<r<<"]["<<c<<"]:\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //search value in array
    int startRow = 0;
    int endRow = r-1;
    int startColumn = 0;
    int endColumn = c-1;

    bool found = false;
    int key1, key2;
    for(int i=startColumn; i<=endColumn; i++)
    {
        if(arr[startRow][i] == x)
        {
            found = true;
            cout<<"\n"<<x<<" is found at row "<<startRow<<" column "<<i;
            break;
        }

        if(arr[startRow][i] > x)
        {
            key1 = i-1;
            key2 = i;
            break;
        }
    }


    if(!found)
    {
        for(int i=startRow; i<=endRow; i++)
        {
            if(arr[i][key1] == x)
            {
                found = true;
                cout<<"\n"<<x<<" is found at row "<<i<<" column "<<key1;
                break;
            }
        }

        for(int i=startColumn; !found && i<=endColumn; i++)
        {
            if(arr[key2][i] == x)
            {
                found = true;
                cout<<"\n"<<x<<" is found at row "<<key2<<" column "<<i;
                break;
            }
        }
    }

    if(!found)
    {
        cout<<"\n"<<x<<" is not found";
    }



    /* another way to solve
    int arr[][5] = {1,4,7,11,15,2,5,8,12,19,3,6,9,16,22,10,13,14,17,24,18,21,23,26,30};

    int x;
    cout<<"enter a search value: ";
    cin>>x;

    int r = sizeof(arr)/sizeof(arr[0]);
    int c = sizeof(arr[0])/sizeof(arr[0][0]);

    cout<<"\nint arr["<<r<<"]["<<c<<"]:\n";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //search value in array
    int rowIndex = 0;
    int colIndex = c-1;
    bool found = false;

    while(rowIndex < r && colIndex < c)
    {
        if(arr[rowIndex][colIndex] == x)
        {
            found = true;
            cout<<"\n"<<x<<" is found at row "<<rowIndex<<" column "<<colIndex;
            break;
        }
        else if(arr[rowIndex][colIndex] > x)
        {
            colIndex--;
        }
        else
        {
            rowIndex++;
        }
    }

    if(!found)
    {
        cout<<"\n"<<x<<" is not found.";
    }

    */

    //output:
    //    enter a search value: 10
    //
    //    int arr[5][5]:
    //    1 4 7 11 15
    //    2 5 8 12 19
    //    3 6 9 16 22
    //    10 13 14 17 24
    //    18 21 23 26 30
    //
    //    10 is found at row 3 column 0


    /*
        1 4 7 11 15
        2 5 8 12 19
        3 6 9 16 22
        10 13 14 17 24
        18 21 23 26 30

        here, column and row are sorted.
        step 1: we check first row.
                if found return row no and column no,
                else, find and take nearest max value index no and previous index no
                like key1 = previous index no and key2 = nearest max value index no
        step 2: check key1 column
                if found return row no and column no,

                else, check key2 row
                if found return row no and column no,
                else, print not found.
    */
}
