#include <iostream>
#include<limits>
using namespace std;

int main()
{
//    some important things about input cin.
//    1. cin only take single int, char etc.
//    2. Cin cannot take a sentence.
//    3. cin never count space/tab/enter button press when we give input like 5       2 or
//    5
//
//    2
//    But one issue is, space/tab/enter make a garbage in program which effect on next input variable to store that garbage.
//    That’s not expected.

//    But have a solution for garbage.
//    #include<limits>
//    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    int a1;
    char b1;
    string c1;
    float d1;
    double e1;

//    cin>>a1;
//    cin>>b1;
//    cin>>c1;
//    cin>>d1;
//    cin>>e1;
//
//    cout<<a1;
//    cout<<b1;
//    cout<<c1;
//    cout<<d1;
//    cout<<e1;

//    input:
//    12 -> int
//    a -> char
//    i am new -> string
//    12.233 -> float
//    2.355 -> double
//
//    output:
//    12
//    a
//    i
//    12.233
//    2.355


    cin.ignore(numeric_limits<streamsize>::max(), '\n');





//    cin.get():
//        cin.get() like cin. But it count space/tab/enter when we give input like 5        2.

    char a; //or string a;
    cout<<"input a character: ";
    a=cin.get(); //or same as cin>>a;
    cout<<"give input is"<< a<< "."<<endl; //if you press tab and hit enter it show that output: give input is   .

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

//    wrong input solve by next code
//    char b[100];
//    cout<<"input a word: ";
//    b=cin.get();// show an error cause b has a variable size.
//    cout<<"enter word by char variable: "<< b <<endl;

//    If we give variable size like b[100]. We can input sentence not word.
    char b[100];
    cout<<"input a sentence: ";
    cin.get(b, 100);
    cout<<"enter sentence by char variable: "<< b <<endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');






//    cin.getline():
//       take a sentence
    string c;
    cout<<"input a sentence: ";
    getline(cin, c);
    cout<<"enter sentence by string variable: "<< c <<endl;


    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    char line[20];
    cout << "Type a line terminated by 'n'" << endl;
    cin.getline( line, 20, 'n' );
    cout <<"output: " <<line;

    // Type a line terminated by 'n'
    //i am a good new gamer
    //output: i am a good

}

