#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.delftstack.com/howto/cpp/return-string-from-function-cpp/
*/
//method 1:
string reverseString1(string s1) //can be write string -> reverseString1(string &s1)
{
    reverse(s1.begin(), s1.end());
    return s1;

    /* can store in new string variable without changing main s1 string
    string temp = s1;
    reverse(temp.begin(), temp.end());
    return temp;
    */
}

//method 2:
string &reverseString2(string &s2)
{
    reverse(s2.begin(), s2.end());
}

//method 3:
string *reverseString3(string &s3)
{
    reverse(s3.begin(), s3.end());
}
int main()
{
//method 1: normal way
    string s1 = "abcd";
    cout<<"\nString before reverse string with given character: \n"<<s1<<endl;

    string result1 = reverseString1(s1);
    cout<<"\nString after replacing spaces with given character: \n"<<result1<<endl;

    /*can write above 2 lines into one
    cout<<"\nString after replacing spaces with given character: \n"<<reverseString1(s1)<<endl;
    */



//method 2:
    string s2 = "i am new";
    cout<<"\nString before reverse string with given character: \n"<<s2<<endl;

    reverseString2(s2); //never use that ->string result2 = reverseString2(s2); cause change the whole string s2
    cout<<"\nString after replacing spaces with given character: \n"<<s2<<endl;


//method 3:
    string s3 = "coder";
    cout<<"\nString before reverse string with given character: \n"<<s3<<endl;

    reverseString3(s3);
    cout<<"\nString after replacing spaces with given character: \n"<<s3<<endl;

}
