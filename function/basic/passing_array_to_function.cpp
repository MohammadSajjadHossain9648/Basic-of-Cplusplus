#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
*/

int minArray(int* array, int length) //can be write as int minArray(int array[], int length)
{
    int min = 100000, i=0;
    for(int i=0; i<length; i++)
    {
        if(array[i]< min)
        {
            min = array[i];
        }
    }
    //  or can be use
    //    while(i != length)
    //    {
    //        if(array[i]< min)
    //        {
    //            min = array[i];
    //        }
    //        i++;
    //    }

    return min;
}
int main()
{
    int array[] = {10, 5, 9, 13, 40, 2};
    int length = sizeof(array) / sizeof(array[0]);
    cout<<"lowest number in array: "<<minArray(array, length)<<endl<<endl;
}
