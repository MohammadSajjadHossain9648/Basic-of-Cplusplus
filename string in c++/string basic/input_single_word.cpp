#include <iostream>
#include<limits>
using namespace std;

int main()
{
    // note: *** is useful
//***  take single word without limit by char array
    string a;
    cout<<"input a word: ";
    cin>>a;
    cout<<"enter word by string variable: "<< a <<endl;

    //input: i am new/ iam new/ mangozzzzza is good
    //output: i / iam / mangozzzza [only take a word and rest remain garbage like am new/new]

    //         or same as but no need to use
    //    string a;
    //    cout<<"input a word: ";
    //    getline(cin,a,' '); //only stop when it get space
    //    cout<<"enter word by string variable: "<< a <<endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');


//***  take single word with limit by char array
    char b[10];
    cout<<"input a word: ";
    cin>>b;  //here, when get space it stop or take full word of 10 characters
    cout<<"enter word by char variable: "<< b <<endl;

    //input: i am new/ iam new/ mangozzzzza is good/ university is good
    //output: i / iam / mangozzzzz/ university [only take a word and rest remain garbage like am new/new/a is good/...]


    cin.ignore(numeric_limits<streamsize>::max(), '\n');


//***  take single word with mention digit limit by char array like input a word of 4 character
    char c[10];
    cout<<"input a word: ";
    cin.get(c,5,' ');  //here, only take word of 4 characters and last one is for null value('\0')
    cout<<"enter word by char variable: "<< c <<endl;


    //input: mangozzzzza is good/ university is good
    //output: mang/ univ [only take a word and rest remain garbage]

}

