#include <iostream>
using namespace std;

int main()
{
//  take multiple sentence by char variable

    char c[100];
    cout<<"Input multiple sentence: ";
    cin.read(c, 20);
    cout<<"Enter sentence by char variable: "<< c <<endl;

    //note: cin.read never count space/tab/enter button to stop.
    //take char whatever length is initialize in cin.read()
    //count char with whitespace only for length not count newline

    //if cin.read(c, 10);
    //Input a sentence: welcome to code
    //Enter sentence by char variable: welcome to

    //otherwise cin.read(c, 20);
    //Input a sentence: welcome to code
    //welcome to code

    //Enter sentence by char variable: welcome to code
    //welco

}
