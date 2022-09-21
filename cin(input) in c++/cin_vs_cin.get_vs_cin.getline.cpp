#include <iostream>
#include<limits>
using namespace std;

int main()
{
//    some important things about input cin.
//    1. cin only take int, single char, single word, float, double.
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

    //for taking int, single char, single word, float, double
    cin>>a1;
    cin>>b1;
    cin>>c1;
    cin>>d1;
    cin>>e1;

    cout<<a1;
    cout<<b1;
    cout<<c1;
    cout<<d1;
    cout<<e1;

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
    
    // *** take single character by char variable
    char a;
    cout<<"input a single character: ";
    cin>>a;
    cout<<"enter single character by char variable: "<< a <<endl;

    //  input: i am new/ iam new /mango is good
    //  output: i / i / m [only take single char and rest remain garbage]

     cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // *** take single word without limit by char array
    string a;
    cout<<"input a word: ";
    cin>>a;
    cout<<"enter word by string variable: "<< a <<endl;

    //input: i am new/ iam new/ mangozzzzza is good
    //output: i / iam / mangozzzza [only take a word and rest remain garbage like am new/new]


    // take single word with limit by char array
    char b[10];
    cout<<"input a word: ";
    cin>>b;  //here, when get space it stop or take full word of 10 characters
    cout<<"enter word by char variable: "<< b <<endl;

    //  input: i am new/ iam new/ mangozzzzza is good/ university is good
    //  output: i / iam / mangozzzzz/ university [only take a word and rest remain garbage like am new/new/a is good/...]

    
    
    
    

    cin.ignore(numeric_limits<streamsize>::max(), '\n');





//    cin.get():
//    some important things about input cin.get()
//    1. cin.get() only take single char, single word, single sentence and never take int, float,double.
//    2. cin.get() like cin. But it count space/tab/enter when we give input like 5        2.

    
    //for taking character
    char a; //or string a;
    cout<<"input a character: ";
    a=cin.get(); //or same as cin>>a;
    cout<<"give input is"<< a<< "."<<endl; //if you press tab and hit enter it show that output: give input is   .
    
    //*** or want to see keyboard ASCII value
    int c;
    cout<<"input a character: ";
    c=cin.get();
    cout<<"ASCII value of keyboard key: "<< c <<endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //    wrong input solve by next code
    //    char b[100];
    //    cout<<"input a word: ";
    //    b=cin.get();// show an error cause b has a variable size.
    //    cout<<"enter word by char variable: "<< b <<endl;
    
    
    //for taking word
    //If we call char array like b[10]. We can input word by this.
    char c[10];
    cout<<"input a word: ";
    cin.get(c,10,' ');  //here, when get space it stop or only take word of 9 characters and last one is for null value('\0')
    cout<<"enter word by char variable: "<< c <<endl;

    //  input: i am new/ iam new/ mangozzzzza is good
    //  output: i / iam / mangozzzz [only take a word and rest remain garbage like am new/new/za is good]
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    
    //for taking sentence
    //If we call char array like b[100]. We can input sentence by this and stop when get '\n'.
    char b[10];
    cout<<"input a sentence: ";
    cin.get(b, 10);
    cout<<"enter sentence by char variable: "<< b <<endl;
    
    //  input a sentence: it is super easy
    //  enter sentence by char variable: it is sup
    

    
    
    


    cin.ignore(numeric_limits<streamsize>::max(), '\n');






//    cin.getline():
//***      take a sentence
    string c;
    cout<<"input a sentence: ";
    getline(cin, c);
    cout<<"enter sentence by string variable: "<< c <<endl;


    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    char line[20];
    cout << "Type a line terminated by 'n': " << endl;
    cin.getline( line, 20, 'n' );
    cout <<"output: " <<line;

    // Type a line terminated by 'n':
    //i am a good new gamer
    //output: i am a good

}

