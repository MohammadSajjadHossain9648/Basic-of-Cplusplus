#include<iostream>
#include<string>
#include<cstring>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/urlify-a-given-string-replace-spaces-with-%20/
                  https://www.javatpoint.com/program-to-replace-the-spaces-of-a-string-with-a-specific-character
*/

int main()
{
//method 1: for string
    string s = "Mr John Smith";

    string rep = "%20";
    for(int i=0 ; i<s.length() ; i++)
    {
        if(s[i] == ' ')
            s.replace(i,1,rep);
    }
    cout<<"\nString after replacing spaces with given character: \n"<<s;

    /* it never work cause you never input char(replace space) in string or vice versa
    char rep1 = '-';
    for(int i=0 ; i<s.length() ; i++)
    {
        if(s[i] == ' ')
            s[i] = rep1;
    }
    cout<<s;
    */

    /*
    Time complexity: O(N^2) where N is the length of the string. because it is using replace method inside for loop
    Auxiliary space: O(1).
    */

    //another way: store in another string
    string s1 = "Mr John Smith";
    string temp;

    for(auto i=0; i<s1.length(); i++)
    {
        if(s1[i] == ' ')
        {
            temp.push_back('%');
            temp.push_back('2');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s1[i]);
        }
    }
    cout<<"\nString after replacing spaces with given character: \n"<<temp;




//method 2: for char
    char s2[] = "Once in a blue moon";
    char ch = '-'; // it show error -> char ch[] = '--';

    int len = sizeof(s2)/ sizeof(char);

    //Replace space with specific character ch
    for(int i = 0; i < len; i++){
        if(s2[i] == ' ')
            s2[i] = ch;
    }
    cout<<"\nString after replacing spaces with given character: \n"<<s2;


    //output:
    //    String after replacing spaces with given character:
    //    Mr%20John%20Smith
    //    String after replacing spaces with given character:
    //    Mr%20John%20Smith
    //    String after replacing spaces with given character:
    //    Once-in-a-blue-moon
}
