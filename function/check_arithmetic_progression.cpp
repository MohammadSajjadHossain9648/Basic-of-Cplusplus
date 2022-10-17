#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/arithmetic-progression/
*/
/*
    what is Arithmetic progression?
    A sequence of numbers is called an Arithmetic progression if the difference between
    any two consecutive terms is always the same.

    How do we check whether a series is an arithmetic progression or not?
    1. Brute approach.
    The idea is to sort the given array or series. After sorting, check if the differences between consecutive
    elements are the same or not. If all differences are the same, Arithmetic Progression is possible.
*/

int checkProgression(int* array, int size)
{
    if (size == 1)
        return true;

    int diff = array[1] - array[0];
    for(int i=2; i<size; i++)
    {
        if(array[i] - array[i-1] != diff)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int array[] = { 20, 15, 5, 0, 10 };

    int size = sizeof(array) / sizeof(array[0]);

    //print the array
    cout<<"array[] = {}: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }
    cout<<endl<<endl;

    //sort the array
    sort(array, array+size);

    //print the reverse array
    cout<<"sort array: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }
    cout<<endl<<endl;

    (checkProgression(array, size)) ? (cout<<"Arithmetic Progression is possible"<<endl) : (cout<<"Arithmetic Progression is not possible"<<endl) ;

    //output:
    //    array[] = {}: 20  15  5  0  10
    //
    //    sort array: 0  5  10  15  20
    //
    //    Arithmetic Progression is possible

}
