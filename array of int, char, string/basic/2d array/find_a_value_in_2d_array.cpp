#include<iostream>
using namespace std;

int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    int x;
    cout<<"enter the search value: ";
    cin>>x;

    cout<<"\nint arr[3][4]:\n";
    for(int row=0; row<3; row++)
    {
        for(int column=0; column<4; column++)
        {
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;
    }

    bool found = 0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(x == arr[i][j])
            {
                cout<<"\nfound and position is in row "<<i+1<<" column "<<j+1;
                found = 1;
                break;
            }
        }
    }

    if(found == 0)
    {
        cout<<"\n"<<x<<" is not found in 2d-array";
    }



    //output:
    //    enter the search value: 8
    //
    //    int arr[3][4]:
    //    1 2 3 4
    //    5 6 7 8
    //    9 10 11 12
    //
    //    found and position is in row 2 column 4

}
