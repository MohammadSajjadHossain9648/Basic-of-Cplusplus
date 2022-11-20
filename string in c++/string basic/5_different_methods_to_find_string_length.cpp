#include<iostream>
#include<string>
#include<string.h>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/5-different-methods-find-length-string-c/
*/
/*
    string and char array are same. Strings are objects that represent sequences of characters.

    ***Methods to find length of string:
    1.Using string::size: The method string::size returns the length of the string, in terms of bytes.
    2.Using string::length: The method string::length returns the length of the string, in terms of bytes.
    Both string::size and string::length are synonyms and return the exact same value.
    3.Using C library function strlen() method: The C library function size_t strlen(const char *str) computes
    the length of the string str up to, but not including the terminating null character.
    4.Using while loop: Using the traditional method, To initialize the counter equals 0 and increment the counter
    from starting of string to end of string (terminating null character).
    5.Using for loop: To initialize the counter equals 0 and increment the counter from starting of string to end
    of string (terminating null character).
*/
int main()
{
    string s = "Geeksforgeeks\0 345"; //same as string s = "Geeksforgeeks";
    cout<<"string s = "<<s<<endl;

    cout<<"\nSize : "<<s.size();
    cout<<"\nSize : "<<s.length();
    cout<<"\nSize : "<<strlen(s.c_str());

//method 4:
    int i = 0;
    while(s[i])
    {
        i++;
    }
    cout<<"\nSize : "<<i;

//method 5:
    for (i = 0; s[i]; i++)
        ;
    cout<<"\nSize : "<<i;

    //output:
    //    string s = Geeksforgeeks
    //
    //    Size : 13
    //    Size : 13
    //    Size : 13
    //    Size : 13
    //    Size : 13

}
