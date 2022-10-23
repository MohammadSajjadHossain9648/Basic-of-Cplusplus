#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more:https://www.includehelp.com/c-programs/c-one-dimensional-array-programs-to-swap-adjacent-elements.aspx
*/
int main()
{
//example 1: input from user to swap consecutive 2 numbers
    int index;
    cout<<"Enter the length of array: ";
    cin>>index;

    //first check value of index must be even
    if(index % 2 != 0)
    {
        cout<<"Total number of elements should be EVEN."<<endl;
        return 0;
    }

    int number[index];

    cout<<"numbers:"<<endl;
    for(int i=0; i<index; i++)
    {
        cin>>number[i];
    }

    int j=0;
    while(j<=index)
    {
        int temp = number[j];
        number[j] = number[j+1];
        number[j+1] = temp;
        j += 2;
    }

    //print the swap array
    cout<<endl<<"swap adjacent elements of a one dimensional array : ";
    for(int i : number)
    {
        cout<<i<<"  ";
    }
    cout<<endl;

    //output:
    //    Enter the length of array: 6
    //    numbers:
    //     1 2 3 4 5 6
    //
    //    swap adjacent elements of a one dimensional array : 2  1  4  3  6  5

}
