#include <iostream>
using namespace std;

int main() {
    char a;
    cout<<"enter single char: a..z/A..Z/0..9" <<endl;
    cin >> a;

    if(a >= 'a' && a <= 'z'){
        cout<<'this is lowercase';
    }
    else if(a >= 'A' && a <= 'Z'){
        cout<<'this is upercase';
    }
    else if(a >= '0' && a <= '9'){
        cout<<'this is numeric';
    }
    //issue 1: why give garbage value?
    //sol: double apostrophes are used to represent sentence and string. single apostrophes are used to represent characters. 
    //In cout line, we print a sentence. so we need to use double apostrophes.

/* issue 2:
    char a;
    cout<<"enter single char: a..z/A..Z/0..9" <<endl;
    cin >> a;

    if(a >= "a" && a <= "z"){
        cout<<"this is lowercase";
    }
    else if(a >= "A" && a <= "Z"){
        cout<<"this is upercase";
    }
    if(a >= "0" && a <= "9"){
        cout<<"this is numeric";
    }
    error: ISO C++ forbids comparison between pointer and integer. In that program? why
    sol:
    : In C++, single apostrophes are used to represent characters, not strings.
     So here I input char not string. If we take string variable, then we use double apostrophes.
     Otherwise for char variable, we use single apostrophes in code where condition is written.
*/
/*
    issue 3:
    string a;
    cout<<"enter single char: a..z/A..Z/0..9" <<endl;
    cin >> a;

    if(a >= "a" && a <= "z"){
        cout<<"this is lowercase";
    }
    else if(a >= "A" && a <= "Z"){
        cout<<"this is upercase";
    }
    if(a >= "0" && a <= "9"){
        cout<<"this is numeric";
    }
    Input: a12/aAS    output: lowercase
    Input: 123/1A    output: numeric

    Sol: some important things about input cin. cin only take single int, char etc. use single apostrophes in condition like a>='a'
*/
/*
    issue 4:
    char a[5];
    cout<<"enter single char: a..z/A..Z/0..9" <<endl;
    cin >> a;

    if(a >= "a" && a <= "z"){
        cout<<"this is lowercase";
    }
    else if(a >= "A" && a <= "Z"){
        cout<<"this is upercase";
    }
    if(a >= "0" && a <= "9"){
        cout<<"this is numeric";
    }
    Input: a12/aAS    output:
    Input: 123/1A    output:

    why output show nothing?
    Sol: becuase input can take more than one character and use single apostrophes in condition like a>='a'
*//*
    issue 5:
    string a;
    cout<<"enter single char: a..z/A..Z/0..9" <<endl;
    cin >> a;  //show error here not executable.

    if(a >= "a" && a <= "z"){
        cout<<"this is lowercase";
    }
    else if(a >= "A" && a <= "Z"){
        cout<<"this is upercase";
    }
    if(a >= "0" && a <= "9"){
        cout<<"this is numeric";
    }
    Input: a12/aAS    output: lowercase
    Input: 123/1A    output: numeric

    error: we give single word and then store in string a as single character so that result show correctly. but theoritically wrong.
    sol:so never take string for single character input.
*/
}
