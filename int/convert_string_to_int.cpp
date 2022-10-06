#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    /*
        to know more: https://www.geeksforgeeks.org/converting-strings-numbers-c-cpp/
                       https://www.freecodecamp.org/news/string-to-int-in-c-how-to-convert-a-string-to-an-integer-example/#:~:text=One%20effective%20way%20to%20convert,the%20integer%20version%20of%20it.
    */

    string str;
    cout<<"Enter a string int: ";
    cin>>str;

    int num = stoi(str); // int/double/float num = atoi(str);
    cout<<"convert string to int: "<<num<<endl<<endl;

    //output:
    //    Enter a string int: 1.23/ 12/ 123 abc/ 123abc/ abc123
    //    convert string to int: 1/ 12/ 123/ 123/ show error

//another example use sstream
    string str2;
    cout<<"Enter a string int: ";
    cin>>str2;

    stringstream s;
    int num2;

    //extract the string from the str variable (input the string in the stream)
    s << str2;

    // place the converted value to the int variable
    s >> num2;

    cout<<"convert string to int using sstream: "<<num2<<endl<<endl;

    //same as this
    //    string str2;
    //    cout<<"Enter a string int: ";
    //    cin>>str2;
    //
    //    stringstream s(str2);
    //    int num2;
    //    s >> num2;
    //
    //    cout<<"convert string to int using sstream: "<<num2<<endl<<endl;

    //output:
    //    Enter a string int: 1.23/ 12/ 123 abc/ 123abc/ abc123
    //    convert string to int: 1/ 12/ 123/ 123/ show error
}
