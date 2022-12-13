#include<iostream>
using namespace std;

int main (){

    //give as an input in console
    cout<<"Give a keyboard key :";
    char x = cin.get();
    cout<<"ASCII Value of keyboard key "<<x<<" is "<<int(x)<<endl;
                            //or
//    cout<<"Give a keyboard key :";
//    int x = cin.get();
//    cout<<"ASCII Value of keyboard key is "<<x<<endl;


    //initial  as an input in console
    int y = 'h';
    cout<<"ASCII Value of keyboard key 'h' is "<<y<<endl;

    char ch = 'h';
    cout<<"ASCII Value of keyboard key "<<ch<<" is "<<int(ch)<<endl;

    // using escape sequence for horizontal tab and escape sequence can not see like keyboard key "<<character<<" is "<<.....
    char character = ' \b ';
    cout<<"ASCII Value of keyboard key is "<<int(character)<<endl;
    /*
    The table below lists escape sequences of C++.

    Escape Sequences	Characters
    \b	                Backspace
    \f	                Form feed
    \n	                Newline
    \r same as 'r'      Return
    \t	                Horizontal tab
    \v	                Vertical tab
    \\	                Backslash
    \'	                Single quotation mark
    \"	                Double quotation mark
    \?	                Question mark
    \0	                Null Character
    */
}
