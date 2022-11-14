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
    string s2 = "aababcaab";

    string unique_arr2 = s2;

    sort(unique_arr2.begin(), unique_arr2.end());

    auto pointer = unique(unique_arr2.begin(), unique_arr2.end());

    unique_arr2.resize(distance(unique_arr2.begin(), pointer)); //delete extra capacity

    cout<<unique_arr2<<endl;


    
//another way
    string s3 = "aababcaab";
    set<char> mySet;

    stringstream a(s3);

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
    
    
    
//method 2:
    string s = "aababcaab";
    int len = s.length();

    string s1 = s;
    sort(s1.begin(), s1.end());
    char unique_arr[100];

    int j = 0;
    unique_arr[j++] = s1[0];

    for(int i=1; i<len; i++)
    {
        if(s1[i+1] != s1[i])
        {
            unique_arr[j++] = s1[i+1];
        }
    }
    cout<<unique_arr<<endl;

    /* same as before
    string s = "aababcaab";
    int len = s.length();

    string s1 = s;
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

    if(s1[len-1] != s1[len-2])
    {
        unique_arr[j++] = s1[len-1];
    }

    //if whole string has same character
    if(s1[0] == s1[len-1])
    {
        unique_arr[j++] = s1[0];
    }

    cout<<unique_arr<<endl;
    */

}
