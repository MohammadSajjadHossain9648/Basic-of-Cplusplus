#include<iostream>
using namespace std;

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


    //print sum of all rows individually
    int max1 = INT_MIN, row_index;
    for(int row=0; row<3; row++)
    {
        int sum = 0;
        for(int column=0; column<4; column++)
        {
            sum += arr[row][column];
        }

        cout<<"\nsum of row "<<row+1<<" : "<<sum;

        //for getting max value
        if(sum > max1)
        {
            row_index = row+1;
            max1 = sum;
        }

    }
    cout<<"\nmax sum between all rows : "<<max1<<"\nlargest row number : "<<row_index<<endl;


    //print sum of all rows individually
    int max2 = INT_MIN, column_index;
    for(int column=0; column<4; column++)
    {
        int sum = 0;
        for(int row=0; row<3; row++)
        {
            sum += arr[row][column];
        }
        cout<<"\nsum of column "<<column+1<<" : "<<sum;
        //for getting max value
        if(sum > max2)
        {
            column_index = column+1;
            max2 = sum;
        }

    }
    cout<<"\nmax sum between all columns : "<<max2<<"\nlargest column number : "<<column_index<<endl;


    //output:
    //    int arr[3][4]:
    //    1 2 3 4
    //    5 6 7 8
    //    9 10 11 12
    //
    //    sum of row 1 : 10
    //    sum of row 2 : 26
    //    sum of row 3 : 42
    //    max sum between all rows : 42
    //    largest row number : 3
    //
    //    sum of column 1 : 15
    //    sum of column 2 : 18
    //    sum of column 3 : 21
    //    sum of column 4 : 24
    //    max sum between all columns : 24
    //    largest column number : 4

}
