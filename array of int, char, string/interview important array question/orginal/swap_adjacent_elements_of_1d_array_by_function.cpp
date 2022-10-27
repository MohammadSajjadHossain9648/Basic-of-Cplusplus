#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more:https://www.includehelp.com/c-programs/c-one-dimensional-array-programs-to-swap-adjacent-elements.aspx
*/

int swapAlternative(int num[], int len)
{
    for(int i=0; i<len; i = i+2)
    {
        //check has any value after i. if false, it stop to execute.
        if(i+1 < len)
        {
            swap(num[i], num[i+1]);
            //as same as without use swap function
            //    int temp = num[i];
            //    num[i] = num[i+1];
            //    num[i+1] = temp;
        }
    }
}

void printArray(int num[], int len)
{
    cout<<endl<<"swap adjacent elements of a one dimensional array : ";
    for(int i=0; i<len; i++)
    {
        cout<<num[i]<<"  ";
    }
    cout<<endl<<endl;
}

int main()
{
    int num1[] = {1,2,3,4,5,6,7,8};
    int num2[] = {1,2,3,4,5,6,7};

    int len1 = sizeof(num1)/sizeof(int);
    int len2 = sizeof(num2)/sizeof(int);

    cout<<"numbers in num1[]: ";
    for(int i: num1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    swapAlternative(num1, len1);
    printArray(num1, len1);


    cout<<"numbers in num2[]: ";
    for(int i: num2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    swapAlternative(num2, len2);
    printArray(num2, len2);


    //output:
    //    numbers in num1[]: 1 2 3 4 5 6 7 8
    //
    //    swap adjacent elements of a one dimensional array : 2  1  4  3  6  5  8  7
    //
    //    numbers in num2[]: 1 2 3 4 5 6 7
    //
    //    swap adjacent elements of a one dimensional array : 2  1  4  3  6  5  7

}
