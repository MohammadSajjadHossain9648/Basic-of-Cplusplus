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
    Linear Search Recursive Approach:
    Follow the given steps to solve the problem:

    1. If the size of the array is zero then, return -1, representing that the element is not found.
    This can also be treated as the base condition of a recursion call.
    2. Otherwise, check if the element at the current index in the array is equal to the key or not
    i.e, arr[size – 1] == key
        2.1. If equal, then return the index of the found key.
*/

int linearSearch(int number[], int length, int key)
{
    if(length == 0)
        return -1;
    else if( key == number[length-1] )
    {
        // Return the index of found key.
        return length-1;
    }
    else
    {
        return linearSearch( number, length-1, key);
    }
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
