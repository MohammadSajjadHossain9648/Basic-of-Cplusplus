#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/linear-search/
                  https://www.guru99.com/linear-search.html
*/

/*
    what is linear search?
    linear search (Searching algorithm) which is used to find whether a given number is present in an array
    and if it is present then at what location it occurs. It is also known as sequential search.

    how it works?
    It is straightforward and works as follows: We keep on comparing each element with the given number/ key value
    to search until it is found or the list ends.
    if found the value, return index no. otherwise return -1 as mean not found the value in array.
*/

/*
    Follow the below idea to solve the problem:
    Iterate from 0 to N-1 and compare the value of every index with x if they match return index

    Follow the given steps to solve the problem:
    1. Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
    2. If x matches with an element, return the index.
    3. If x doesn’t match with any of the elements, return -1.
*/

int linearSearch(int number[], int length, int key)
{
    for(int i=0; i<length; i++)
    {
        if(number[i] == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int number[] = {1, 7, 5, -40, 3, 6, -22, 8};

    int length = sizeof(number) / sizeof(int);

    cout<<"Enter the element to search for: ";
    int key;
    cin>>key;

    int foundIndex = linearSearch(number, length, key);

    ( foundIndex == -1 ) ? ( cout<<"element is not present"<<endl<<endl ) : ( cout<<"element is present at index "<<foundIndex<<endl<<endl );

    //output:
    //    Enter the element to search for: 6
    //    element is present at index 5
}
