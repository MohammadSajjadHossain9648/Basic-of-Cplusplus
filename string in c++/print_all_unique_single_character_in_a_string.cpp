#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<sstream>
using namespace std;
/*
    to know more:
*/
int main()
{
//method 1:
    string s1 = "aababcaab";
    int len = s1.length();

    //first sort the string and uniquely store them
    sort(s1.begin(), s1.end());
    char unique_arr[10];
    int j = 0;
    for(int i=0; i<len-1; i++)
    {
        if(s1[i] != s1[i+1])
        {
            unique_arr[j++] = s1[i];
        }
    }

    //here, check the last index value with previous value
    if(s1[len-1] != s1[len-2])
    {
        unique_arr[j++] = s1[len-1];
    }

    //print
    cout<<unique_arr<<endl;
    //or
    for(auto i=0; i<j; i++)
    {
        cout<<unique_arr[i]<<" ";
    }
    cout<<endl;


//another way
    string s2 = "aababcaab";
    set<char> mySet;

    stringstream a(s2);

    char ch;
    while(a >> ch)
    {
        mySet.insert(ch); // set never take duplicate values because they are associative array
    }

    for(auto i: mySet)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
