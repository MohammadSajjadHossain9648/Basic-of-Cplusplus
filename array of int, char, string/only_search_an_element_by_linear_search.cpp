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
    It is straightforward and works as follows: We keep on comparing each element with the element to search
    until it is found or the list ends.
*/

bool linearSearch(int arr[], int length, int key)
{
    for(int i=0; i<length; i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int arr[] = {1, 7, 5, -40, 3, 6, -22, 8};

    int length = sizeof(arr) / sizeof(int);

    cout<<"Enter the element to search for: ";
    int key;
    cin>>key;

    bool found = linearSearch(arr, length, key);

    if(found)
    {
        cout<<"element is present."<<endl<<endl;
    }
    else
    {
        cout<<"element is not present."<<endl<<endl;
    }

    //output:
    //  Enter the element to search for: -8
    //  element is not present.
}
