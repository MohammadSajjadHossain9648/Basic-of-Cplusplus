#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]= {1,2,3,4,5,6,7,8};

    //compute the size
    int length=sizeof(arr)/sizeof(int);

    //print the array
    cout<<"arr[] = {}: ";
    for(int i : arr)
    {
        cout<<i<<"  ";
    }
    cout<<endl;

    reverse(arr, arr+length);

    //print the reverse array
    cout<<endl<<"reverse array: ";
    for(int i : arr)
    {
        cout<<i<<"  ";
    }
    cout<<endl;

    //output:
    //    arr[] = {}: 1  2  3  4  5  6  7  8
    //
    //    reverse array: 8  7  6  5  4  3  2  1
}
