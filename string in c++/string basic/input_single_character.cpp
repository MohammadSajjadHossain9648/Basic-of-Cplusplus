#include <iostream>
#include<limits>
#include <conio.h>
using namespace std;

int main()
{
//***  take single character by char variable

    char a;
    cout<<"input a single character: ";
    cin>>a;
    cout<<"enter single character by char variable: "<< a <<endl;
    
    //can be write this way
    // char a = getch();  //use header as #include <conio.h>

    //input: i am new/ iam new /mango is good
    //output: i / i / m [only take single char and rest remain garbage]


//  solve the garbage issue or clear buffer before taking new line.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char b;
    cout<<"input a single character: ";
    b= cin.get();
    cout<<"enter single character by char variable: "<< b <<endl;

    //    or same as

    string c;
    cout<<"input a single character: ";
    c= cin.get();
    cout<<"enter single character by string variable: "<< c <<endl;

    //input: i am new/ iam new /mango is good
    //output: i / i / m [only take single char and rest remain garbage]

    cin.ignore(numeric_limits<streamsize>::max(), '\n');


//***  Convert the character “C” into a 1-length string and assign the resulting string to the variable st.
    string d(1,'c');
    //    or whatever you give as an input, it will take only one character
    string e(1,cin.get());
    cout<<"single character by string variable: "<< d <<endl;

}

