#include <iostream>
#include<limits>
using namespace std;

int main()
{
//***  take single sentence by string
    string a;
    cout<<"input a sentence: ";
    getline(cin, a);
    cout<<"enter sentence by string variable: "<< a <<endl;

    //input a sentence: it is super easy
    //enter sentence by string variable: it is super easy


//  solve the garbage issue or clear buffer before taking new line.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


//  take single sentence with limit by char array
    char b[10];
    cout<<"input a sentence: ";
    cin.get(b, 10);  //here, only take word of 9 characters and last one is for null value('\0')
    cout<<"enter sentence by char variable: "<< b <<endl;

    //input a sentence: it is super easy
    //enter sentence by char variable: it is sup


}
