#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/
                  https://www.programiz.com/c-programming/c-preprocessor-macros
                  https://cplusplus.com/doc/tutorial/preprocessor/
                  https://www.codecademy.com/resources/docs/cpp/macros
                  https://www.scaler.com/topics/cpp-macro/
                  https://www.tutorialspoint.com/cplusplus/cpp_preprocessor.htm
*/
/*
    A macro is a piece of code in a program that is replaced by the value of the macro. Macro is defined by #define
    directive. Whenever a macro name is encountered by the compiler, it replaces the name with the definition of the
    macro. Macro definitions need not be terminated by a semi-colon(;).

    note:
    1. macro is define in globally like global variable.
    2. macro variable does not need storage but global variable need storage.
    3. macro variable can access anywhere like global variable. but can not update like const that mean it is
    impossible to change the value..
*/
/*  type of macro:
    1. Object-like Macros
    2. Chain Macros
    3. Multi-line Macros
    4. Function-like Macro
    5. Predefined Macros
    6. Undefining a Macro
*/
/*
    Predefined Macros
    Here are some predefined macros in C programming.

    Macro	            Value
    __DATE__	        A string containing the current date.
    __FILE__	        A string containing the file name.
    __LINE__	        An integer representing the current line number.
    __STDC__	        If follows ANSI standard C, then the value is a nonzero integer.
    __TIME__	        A string containing the current time.
    __cplusplus
    __STDC_HOSTED__     1 -> if the implementation is a hosted implementation (with all standard headers available)
                        0 -> otherwise.
*/

//example of Object-like Macros
#define PI 3.1416   //macro define pi variable

//example of Chain Macros
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138

//example of Multi-line Macros
#define ELE 1, \
            2, \
            3

//example of Function-like Macro
#define getMax(x, y) ((x>y)?x:y)   //macro define getMax function

#define  AREA(r)  (PI*(r)*(r))

//example of Undefining a Macro
#define TEST 1

int main()
{
    cout<<"value of PI = "<<PI;

    cout<<"\n\nGeeks for Geeks have "<<INSTAGRAM<<"K followers on Instagram!";

    // Array arr[] with elements defined in macros
    int arr[] = { ELE };
    cout<<"\n\nint arr[] = ";
    for(auto i: arr)
    {
        cout<<i<<" ";
    }


    int x = 1, y = 2;
    cout<<"\n\nmax value is "<<getMax(x,y);
    x += 3;
    y += 1;
    cout<<"\nafter update: max value is "<<getMax(x,y);


    cout<<"\n\nArea of Circle with radius 7: "<< AREA(7);


    cout<<"\n\nLine number: "<<__LINE__;
    cout<<"\nFile name: "<<__FILE__;
    cout<<"\nDate: "<<__DATE__;
    cout<<"\nTime: "<<__TIME__;
    cout<<"\n__cplusplus: "<<__cplusplus;
    cout<<"\n__STDC_HOSTED__: "<<__STDC_HOSTED__;


    /*same as above
    char file[] = __FILE__;
    char date[] = __DATE__;
    char time[] = __TIME__;
    int line = __LINE__;

    cout<<"File name: "<<file<<"\n";
    cout<<"Date: "<<date<<"\n";
    cout<<"Time: "<<time<<"\n";
    cout<<"Line number: "<<line<<"\n";
    */


    #ifdef TEST
        cout<<"\n\nTEST defined";
    #else
        cout<<"\n\nTEST undefined";
    #endif

    #undef TEST

    #ifdef TEST
        cout<<"\nTEST defined";
    #else
        cout<<"\nTEST undefined";
    #endif




    //output:
    //    value of PI = 3.1416
    //
    //    Geeks for Geeks have 138K followers on Instagram!
    //
    //    int arr[] = 1 2 3
    //
    //    max value is 2
    //    after update: max value is 4
    //
    //    Area of Circle with radius 7: 153.938
    //
    //    Line number: 87
    //    File name: D:\code in c++\type of a variable\macros_variable(#define).cpp
    //    Date: Dec 26 2022
    //    Time: 20:04:36
    //    __cplusplus: 201703
    //    __STDC_HOSTED__: 1
    //
    //    TEST defined
    //    TEST undefined

    /*
    What are the advantages and disadvantages of Macros?
    Macros are abbreviations for lengthy and frequently used statements. When a macro is called the entire code is
    substituted by a single line though the macro definition is of several lines.

    The advantage of macro is that it reduces the time taken for control transfer as in case of function. like an
    example, if we need change PI value only change once in globally.

    The disadvantage of it is here the entire code is substituted so the program becomes lengthy if a macro is
    called several times.
    */
}

