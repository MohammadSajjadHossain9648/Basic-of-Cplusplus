#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/sort-c-stl/
*/
int main()
{
    int array[]= {1,7,5,4,3,6,2,8};

    //compute the size
    int size=sizeof(array)/sizeof(array[0]);

    //print the array
    cout<<"array[] = {}: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }

    sort(array, array+size);

    //print the reverse array
    cout<<endl<<"sort array: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }
    cout<<endl;

    //output:
    //    array[] = {}: 1  7  5  4  3  6  2  8
    //    sort array: 1  2  3  4  5  6  7  8
}
