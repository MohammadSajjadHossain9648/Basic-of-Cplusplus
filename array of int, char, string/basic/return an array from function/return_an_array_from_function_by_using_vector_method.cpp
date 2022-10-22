#include<iostream>
#include<vector>
using namespace std;
/*
    to know more: https://java2blog.com/return-array-from-function-cpp/
                  https://codeforwin.org/2017/12/pass-return-array-function-c.html
                  https://devenum.com/how-to-return-an-array-from-a-function-in-c/
                  https://linuxhint.com/return-array-from-function-c/
                  https://www.digitalocean.com/community/tutorials/return-array-in-c-plus-plus-function
                  https://www.geeksforgeeks.org/how-to-return-a-local-array-from-a-cpp-function/
*/
/*
    Using vector container with header #include<vector>
    We can store our array elements in a vector container and its size can increase or decrease dynamically.
    There is no need for a size parameter in this case.
*/

vector<int> Square(const vector<int> *arr)
{
    vector<int> vec{};

    for(const auto &i : *arr)
    {
        vec.push_back(i*i);
    }
    return vec;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout<<"arr[]: ";
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    auto sqrArr = Square(&arr); // only sent array address to function

    cout<<"sqrArr[]: ";
    for(int i : sqrArr)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //output:
    //    arr[]: 1 2 3 4 5
    //    sqrArr[]: 1 4 9 16 25
}
