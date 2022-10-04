#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
/*
    to know more: https://www.geeksforgeeks.org/for_each-loop-c/
*/


    // it is a c pogramming syntex so add header #include <bits/stdc++.h>
    vector<int> vec{ 1, 2, 3, 4, 5 };

    // this increases all the values in the vector by 1;
    for_each(vec.begin(), vec.end(), [](int& a) { a++; });

    // this prints all the values in the vector;
    for_each(vec.begin(), vec.end(), [](int a) { cout << a << " " << endl; });

    //output:
    //    2
    //    3
    //    4
    //    5
    //    6
}

