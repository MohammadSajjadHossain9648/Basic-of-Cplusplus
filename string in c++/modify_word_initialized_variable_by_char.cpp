#include <iostream>
using namespace std;

int main()
{
    // modify a word
    char str[] = "Hello";
    // or char str1[]={'H', 'e', 'l', 'l', 'o', '\0'};

    // modify string to "Hollo"
    str[1] = 'o';
    cout << str << endl;

}

