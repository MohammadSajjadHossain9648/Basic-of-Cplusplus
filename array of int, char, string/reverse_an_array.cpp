#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int array[]= {1,2,3,4,5,6,7,8};

    //compute the size
    int size=sizeof(array)/sizeof(array[0]);

    //print the array
    cout<<"array[] = {}: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }

    reverse(array, array+size);

    //print the reverse array
    cout<<endl<<"reverse array: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }

    //output:
    //    array[] = {}: 1  2  3  4  5  6  7  8
    //    reverse array: 8  7  6  5  4  3  2  1
}
