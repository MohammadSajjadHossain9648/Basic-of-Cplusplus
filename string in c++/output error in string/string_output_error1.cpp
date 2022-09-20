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
    if(a >= '0' && a <= '9'){
        cout<<'this is numeric';
    }
    //issue 1: why give garbage value?
    //sol: double apostrophes are used to represent sentence and string. single apostrophes are used to represent characters.

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
     Otherwise for char variable, we use single apostrophes in code where yellow mark highlighted.
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

    Sol: some important things about input cin. cin only take single int, char etc.
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
    Sol: char a[25] can use with cin.get like as example
        char name[25];
        cin.get(name, 25);
        cout << name;
*//*
    issue 5:
    string a[5];
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

*/
}
