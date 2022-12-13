#include <iostream>
using namespace std;

int main()
{
// the array of char elements called x,y,z,myword can be initialized with a null-terminated sequence of characters by either one of these two statements:
    char z = 'v';
    
    char x[] = { 'H', 'e', 'l', 'l', 'o', '\0' }; //same as, char x[] = "hello";
    /* can write above char x[]:
    char x[] = "hello"; or char * x = "hello";
    but show error if write -> char * x = { 'H', 'e', 'l', 'l', 'o', '\0' };
    */
    
    char y[10] = "hello man"; // char y[10] = { 'H', 'e', 'l', 'l', 'o', ' ', 'm', 'a', 'n', '\0' }

    //char myword = { 'B', 'y', 'e', '\0' }; --> give an error, do it by this way

    char myword[4];
    myword[0]='B';
    myword[1]='y';
    myword[2]='e';
    myword[3]='\0';

    cout<<z<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<myword<<endl;

}
