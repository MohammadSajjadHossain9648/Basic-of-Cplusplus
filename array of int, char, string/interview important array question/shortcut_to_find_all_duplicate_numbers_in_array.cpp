#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

/*
    to know more: https://leetcode.com/problems/find-all-duplicates-in-an-array/
                  https://www.geeksforgeeks.org/find-duplicates-in-on-time-and-constant-extra-space/
                  https://www.w3resource.com/cpp-exercises/array/cpp-array-exercise-21.php
                  https://www.geeksforgeeks.org/stdunique-in-cpp/
*/

int main ()
{
    vector<int> arr = {6, 2, 5, 2, 2, 6, 6};

    //print the array
    cout<<"Given array : ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //first sort and then erase the duplicate numbers
    sort( arr.begin(), arr.end() );
    arr.erase( unique( arr.begin(), arr.end() ), arr.end() );

    //print the orginal array after delete the duplicate numbers
    cout<<"Duplicate number in given array: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output:
    //    Given array : 6 2 5 2 2 6 6
    //    Duplicate number in given array: 2 5 6
}
