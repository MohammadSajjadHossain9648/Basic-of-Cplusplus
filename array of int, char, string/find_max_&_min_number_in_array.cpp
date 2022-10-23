#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    // input from user to find max and min number
    int index;
    cout<<"enter size of array: ";
    cin>>index;

    int number[index];

    cout<<"numbers:"<<endl;
    for(int i=0; i<index; i++)
    {
        cin>>number[i];
    }

    int length = sizeof(number) / sizeof(int);
    sort(number, number+length);

    cout<<"minimum number is "<<number[0]<<endl<<endl;
    cout<<"maximum number is "<<number[length-1]<<endl<<endl;

    //output:
    //    how many numbers want to input: 5
    //    numbers:
    //    2
    //    -35
    //    1
    //    52
    //    6
    //    minimum number is -35
    //
    //    maximum number is 52


    /* another example
        int arr[] = {1,7,5,4,3,6,8,2};

        int length = sizeof(arr) / sizeof(int);
        sort(arr, arr+length);

        cout<<"minimum number is "<<arr[0]<<endl<<endl;
        cout<<"maximum number is "<<arr[length-1]<<endl<<endl;

        //output:
        //    minimum number is 1
        //
        //    maximum number is 8
    */
}
