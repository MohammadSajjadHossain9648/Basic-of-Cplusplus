#include<iostream>
using namespace std;

int main()
{
    int arr[][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int x;
    cout<<"\n\nenter the search value: ";
    cin>>x;

    int r = sizeof(arr)/sizeof(arr[0]); //indicates row length
    int c = sizeof(arr[0])/sizeof(int); //indicates column length

    cout<<"\n\nint arr["<<r<<"]["<<c<<"]:\n";
    for(int row=0; row<r; row++)
    {
        for(int column=0; column<c; column++)
        {
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }

    int begin_index=0, end_index=r*c-1;
    bool found = 0;

    while(begin_index <= end_index)
    {
        int mid = begin_index + (end_index - begin_index) / 2;
        int r1 = mid/c;
        int c1 = mid%c;

        if(x == arr[r1][c1])
        {
            cout<<"\nfound at row "<<r1<<" column "<<c1;
            found = 1;
            break;
        }
        else if (x > arr[r1][c1])
        {
            begin_index = mid+1;
        }
        else
        {
            end_index = mid-1;
        }
    }

    if(found == 0)
    {
        cout<<endl<<x<<" is not found";
    }

    //output:
    //    enter the search value: 11
    //
    //    int arr[3][4]:
    //    1 2 3 4
    //    5 6 7 8
    //    9 10 11 12
    //
    //
    //    found at row 2 column 2


    /*
    think, arr in linear way -> 1 2 3 4 5 6 7 8 9 10 11 12
    we know, time complexity of linear binary search is O(log n). here, n is the length of array.
    but, when we use 2d-array or matrix, total length is row*col which is m*n. so that, O(log mn)
    time complexity: O(log mn)
    */
}
