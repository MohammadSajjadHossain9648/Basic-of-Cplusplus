#include<iostream>
using namespace std;
/*
    to know more: https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6
*/
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    cout<<"\nint arr[3][4]:\n";
    for(int row=0; row<3; row++)
    {
        for(int column=0; column<4; column++)
        {
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }



    cout<<"\nprint like a wave: ";
    for(int column=0; column<4; column++)
    {
        //for odd column -> print column bottom to top
        if(column % 2 == 0)
        {
            for(int row=0; row<3; row++)
            {
                cout<<arr[row][column]<<" ";
            }
        }

        //for even column -> print column top to bottom
        else
        {
            for(int row=2; row>=0; row--)
            {
                cout<<arr[row][column]<<" ";
            }
        }

    }

    /*can also write another way
    cout<<"\nprint like a wave: ";
    for(int column=0; column<4; column++)
    {
        //for odd column -> print column bottom to top
        if(column & 1)
        {
            for(int row=2; row>=0; row--)
            {
                cout<<arr[row][column]<<" ";
            }
        }
        //for even column -> print column top to bottom
        else
        {
            for(int row=0; row<3; row++)
            {
                cout<<arr[row][column]<<" ";
            }
        }

    }
    */


    //output:
    //    int arr[3][4]:
    //    1 2 3 4
    //    5 6 7 8
    //    9 10 11 12
    //
    //    print like a wave: 1 5 9 10 6 2 3 7 11 12 8 4

    /*
    time complexity: O(n*m) = O(nm) //here, n = number of rows, m = number of columns
    */
}
