#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/convert-alternate-characters-string-upper-case/
                  https://www.geeksforgeeks.org/conversion-whole-string-uppercase-lowercase-using-stl-c/
                  https://www.programiz.com/cpp-programming/library-function/cctype/toupper
                  https://www.includehelp.com/cpp-programs/convert-lowercase-character-to-uppercase-and-vice-versa.aspx
*/
int main()
{
// for single character

    //method 1: take input from user
    char c;
    cout<<"enter a character: ";
    cin>>c;

    //process 1: use stl function
    if( c>='a' && c<='z' )
    {
        cout<<"\nit is a lowercase alphabet and convert it to uppercase.\ncharacter: "<<(char)toupper(c)<<endl;
        cout<<"and ASCII VALUE of character: "<<toupper(c)<<endl;

        /* print by calling a variable which same as before
        char ch = toupper(c);
        cout<<"\nit is a lowercase alphabet and convert it to uppercase.\ncharacter: "<<ch<<endl;
        cout<<"and ASCII VALUE of character: "<<toupper(c)<<endl;
        */
    }
    else if( c>='A' && c<='Z' )
    {
        cout<<"\nit is a uppercase alphabet and convert it to lowercase.\ncharacter: "<<(char)tolower(c)<<endl;
        cout<<"and ASCII VALUE of character: "<<tolower(c)<<endl;

        /* print by calling a variable which same as before
        char ch = tolower(c); //always use this line for store the convert character
        cout<<"\nit is a uppercase alphabet and convert it to lowercase.\ncharacter: "<<ch<<endl;
        cout<<"and ASCII VALUE of character: "<<tolower(c)<<endl;
        */
    }


    //process 2: without use stl function, difference between Uppercase and Lowercase characters are 32.
    /*
    Logic :- Convert Lower to upper and upper to lower .we use ASCII value as we know that
    'a' to 'z' ASCII is '97' to '122' And 'A' to 'Z' ASCII is '65' to '90' .
    so if want to convert lower to upper then minus 32 to character
    and if you want to convert upper to lower then add 32 to character .
    */
    if( c>='a' && c<='z' )
    {
        c = c-32; //same as c -= 32, never use cout<<(char)c-32
        cout<<"\nit is a lowercase alphabet and convert it to uppercase.\ncharacter: "<<c<<endl;
        cout<<"and ASCII VALUE of character: "<<c-32<<endl;
    }
    else if( c>='A' && c<='Z' )
    {
        c = c+32; //same as c += 32, never use cout<<(char)c+32
        cout<<"\nit is a uppercase alphabet and convert it to lowercase.\ncharacter: "<<c<<endl;
        cout<<"and ASCII VALUE of character: "<<c+32<<endl;
    }


    //method 2: initialize a variable
    //for lowercase alphabet
    char c1 = 'a';
    cout<<"\nchar c1 = a";
    cout<<"\nit is a lowercase alphabet and convert it to uppercase.\ncharacter: "<<(char)toupper(c1)<<endl;
    // or
    c1 = toupper(c1);
    cout<<"\nit is a lowercase alphabet and convert it to uppercase.\ncharacter: "<<c1<<endl;

    //and using +32 or -32
    c1 = c1-32; //same as c1 -= 32, never use cout<<(char)c1-32
    cout<<"\nit is a lowercase alphabet and convert it to uppercase.\ncharacter: "<<c1<<endl;


    //for uppercase alphabet
    char c2 = 'A';
    cout<<"\nchar c2 = A";
    cout<<"\nit is a uppercase alphabet and convert it to lowercase.\ncharacter: "<<(char)toupper(c2)<<endl;
    // or
    c2 = tolower(c2);
    cout<<"\nit is a uppercase alphabet and convert it to lowercase.\ncharacter: "<<c2<<endl;

    //and using +32 or -32
    c2 = c2+32; //same as c2 += 32, never use cout<<(char)c2+32
    cout<<"\nit is a uppercase alphabet and convert it to lowercase.\ncharacter: "<<c2<<endl;






//for char array & string
    //method 1: take input from user
    int len;
    cout<<"\nenter the length of array: ";
    cin>>len;

    char ch[len];
    cout<<"\nenter the string: ";
    cin>>ch;

    /* same as before char ch[len]
    string ch;
    cout<<"\nenter the string: ";
    cin>>ch;
    int len = ch.size();
    */

    //process 1: use stl function
    for(int i=0; i<len; i++) //if you want whole char array is upper case only use if, otherwise else if
    {
        if( ch[i]>='a' && ch[i]<='z' )
        {
            cout<<"\nconvert it to uppercase.\ncharacter: "<<(char)toupper(ch[i])<<endl;
            cout<<"and ASCII VALUE of character: "<<toupper(ch[i])<<endl;

            /* print by calling a variable which same as before
            ch[i] = toupper(ch[i]);
            cout<<"\nconvert it to uppercase.\ncharacter: "<<ch[i]<<endl;
            cout<<"and ASCII VALUE of character: "<<toupper(ch[i])<<endl;
            */
        }
        else if( ch[i]>='A' && ch[i]<='Z' )
        {
            cout<<"\nconvert it to lowercase.\ncharacter: "<<(char)tolower(ch[i])<<endl;
            cout<<"and ASCII VALUE of character: "<<tolower(ch[i])<<endl;

            /* print by calling a variable which same as before
            ch[i] = tolower(ch[i]); //always use this line for store the convert character
            cout<<"\nconvert it to lowercase.\ncharacter: "<<ch[i]<<endl;
            cout<<"and ASCII VALUE of character: "<<tolower(ch[i])<<endl;
            */
        }
    }



    //process 2: without use stl function, difference between Uppercase and Lowercase characters are 32.
    /*
    Logic :- Convert Lower to upper and upper to lower .we use ASCII value as we know that
    'a' to 'z' ASCII is '97' to '122' And 'A' to 'Z' ASCII is '65' to '90' .
    so if want to convert lower to upper then minus 32 to character
    and if you want to convert upper to lower then add 32 to character .
    */
    for(int i=0; i<len; i++) //if you want whole char array is upper case only use if, otherwise else if
    {
        if( ch[i]>='a' && ch[i]<='z' )
        {
            ch[i] = ch[i]-32; //same as ch[i] -= 32, never use cout<<(char)ch[i]-32
            cout<<"\nconvert it to uppercase.\ncharacter: "<<ch[i]<<endl;
            cout<<"and ASCII VALUE of character: "<<ch[i]-32<<endl;
        }
        else if( ch[i]>='A' && ch[i]<='Z' )
        {
            ch[i] = ch[i]+32; //same as ch[i] += 32, never use cout<<(char)ch[i]+32
            cout<<"\nconvert it to lowercase.\ncharacter: "<<ch[i]<<endl;
            cout<<"and ASCII VALUE of character: "<<ch[i]+32<<endl;
        }
    }



    //method 2: initialize a char array
    //for uppercase array
    char ch1[] = {'h','e','l','l','o'}; //string ch1 = "hello";
    int len1 = sizeof(ch1)/sizeof(char);

    for(int i=0; i<len1; i++)
    {
        if( ch1[i]>='a' && ch1[i]<='z' )
        {
            cout<<"\nconvert it to uppercase.\ncharacter: "<<(char)toupper(ch1[i])<<endl;
            cout<<"and ASCII VALUE of character: "<<toupper(ch1[i])<<endl;

            /* print by calling a variable which same as before
            ch1[i] = toupper(ch1[i]);
            cout<<"\nconvert it to uppercase.\ncharacter: "<<ch1[i]<<endl;
            cout<<"and ASCII VALUE of character: "<<toupper(ch1[i])<<endl;
            */
        }

        //or can use
        if( ch1[i]>='a' && ch1[i]<='z' )
        {
            ch1[i] = ch1[i]-32; //same as ch1[i] -= 32, never use cout<<(char)ch1[i]-32
            cout<<"\nconvert it to uppercase.\ncharacter: "<<ch1[i]<<endl;
            cout<<"and ASCII VALUE of character: "<<ch1[i]-32<<endl;
        }
    }


    //for lowercase array
    char ch2[] = {'H','E','L','L','O'}; //string ch2 = "HELLO";
    int len2 = sizeof(ch2)/sizeof(char);

    for(int i=0; i<len2; i++)
    {
        if( ch2[i]>='A' && ch2[i]<='Z' )
        {
            cout<<"\nconvert it to uppercase.\ncharacter: "<<(char)toupper(ch2[i])<<endl;
            cout<<"and ASCII VALUE of character: "<<toupper(ch2[i])<<endl;

            /* print by calling a variable which same as before
            ch2[i] = toupper(ch2[i]);
            cout<<"\nconvert it to uppercase.\ncharacter: "<<ch2[i]<<endl;
            cout<<"and ASCII VALUE of character: "<<toupper(ch2[i])<<endl;
            */
        }

        //or can use
        if( ch2[i]>='A' && ch2[i]<='Z' )
        {
            ch2[i] = ch2[i]+32; //same as ch2[i] += 32, never use cout<<(char)ch2[i]+32
            cout<<"\nconvert it to uppercase.\ncharacter: "<<ch2[i]<<endl;
            cout<<"and ASCII VALUE of character: "<<ch2[i]+32<<endl;
        }
    }

    //***method 3: another way using transform and use header #include<algorithm>
    string s = "HELLO";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<"\nstring s: "<<s<<endl;

    string s1 = "hello";
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<"\nstring s1: "<<s1<<endl;


    //method 4: another way using isalpha and use header #include<algorithm>
    //it change lower alphabet to upper and upper alphabet to lower
    string s2 = "HELLO all";
    for(auto& it : s2) {
        if (isalpha(it)) {
            it ^= (1 << 5);
        }
    }

    cout<<"\nstring s2: "<<s2<<endl; //string s2: hello ALL



    //Time Complexity: O(n)

}
