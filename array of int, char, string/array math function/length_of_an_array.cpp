#include<iostream>
#include<array>
using namespace std;
/*
    to know more : https://www.digitalocean.com/community/tutorials/find-array-length-in-c-plus-plus
                   https://www.educba.com/c-plus-plus-length-of-array/
                   https://www.geeksforgeeks.org/how-to-find-size-of-array-in-cc-without-using-sizeof-operator/
                   https://cplusplus.com/reference/array/array/size/
*/
/*
    Ways to find Length of an Array in C++
    Now let us take a look at the different ways following which we can find the length of an array in C++,
    they are as follow:

    Counting element-by-element(sent array to a function and count them),
    sizeof() function,
    Pointers,
    begin() and end(),
    size() function in STL.

*/

int main()
{
    int array1[]= {0,1,2,3,4,5,6,7,8,9};

    cout<<sizeof(array1[0])<<endl; // 4 -> 4 bytes of array1[0]
    cout<<sizeof(array1)<<endl; // 40 -> 4 bytes *10 size
    cout<<sizeof(int)<<endl; // 4 -> 4 bytes of int datatype


//compute the size

    //approach 1: using own sizeof
    int size1 = sizeof(array1) / sizeof(int);

    // or same as
    //     int size1 = sizeof(array1) / sizeof(array1[0]);

    //approach 2: Using Pointers to Find Array Length
    int size2 = *(&array1+1) - array1;


    //approach 3: Using begin() and end() with #include<array>
    int size3 = end(array1) - begin(array1);

    //approach 3: Using begin() and end() with #include <iterator>
    int size4 = distance( begin(array1), end(array1) );


    //approach 4: Using the size() function in STL with #include<array>
    array<int,5> array2{ 1, 2, 3, 4, 5 }; //nerver use that int array2[] = { 1, 2, 3, 4, 5 };
    int size5 = array2.size();

    //approach 4: Using the size() function in STL
    int array3[] = { 1, 2, 3, 4, 5, 6 };
    int size6 = size(array3);



    //print the array1
    cout<<"array1[] = {}: ";
    for(int i=0; i<size4; i++)
    {
        cout<<array1[i]<<"  ";
    }



// 2d array
    int arr[][3] = { {3, 4, 6}, {5, 11, 14}, {22, 25}, {26, 28} };

    int len1 = sizeof(arr)/sizeof(arr[0]);
    int len2 = sizeof(arr[0])/sizeof(int); //same as -> int len2 = sizeof(arr[0])/sizeof(arr[0][0]);

    cout<<"\n\narr[][5]: \n";
    for(int i=0; i<len1; i++)
    {
        for(int j=0; j<len2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nlength of row: "<<len1;
    cout<<"\nlength of column: "<<len2;

    //output:
    //    4
    //    40
    //    4
    //    array1[] = {}: 0  1  2  3  4  5  6  7  8  9
    //
    //    arr[][5]:
    //    3 4 6
    //    5 11 14
    //    22 25 0
    //    26 28 0
    //
    //    length of row: 4
    //    length of column: 3
}
