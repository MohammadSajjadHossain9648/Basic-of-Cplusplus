#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/const-keyword-in-cpp/
                  https://www.javatpoint.com/const-keyword-in-cpp
                  https://learn.microsoft.com/en-us/cpp/cpp/const-cpp?view=msvc-170
                  https://www.studytonight.com/cpp/const-keyword.php
                  https://www.freecodecamp.org/news/constants-in-c-explained-how-to-use-define-and-const-keyword/
                  https://www.learncpp.com/cpp-tutorial/const-variables-and-symbolic-constants/
                  https://eecs280staff.github.io/notes/06_Compound_Objects.html
                  https://www.udacity.com/blog/2021/08/developers-guide-to-cpp-constant-variables.html
                  https://www.codesdope.com/cpp-const-keyword/
                  https://www.possibility.com/Cpp/const.html

    for more details: github:\code in c++ part 2\static & const\const
*/
/*
    note: const variable never change
*/
/*
    What is a symbolic constant?
    A symbolic constant is a name that is given to a constant value. Constant variables are one type of symbolic
    constant, as a variable has a name (its identifier) and a constant value.

    for example:
        # define PI 3.14
*/

//declare a const variable globally
# define PI 3.14    //symbolic constant
const double pi = 3.14;     //same as # define PI 3.14

int main()
{
//print global const variable
    cout<<"# define PI "<<PI;
    cout<<"\nconst double pi = "<<pi;



//initialize a const variable
    const int num = 10;     //same as -> int const num = 10;
    cout<<"\nconst int num = "<<num;

    /* never do this, show error
    const int num;  // error: const variables must be initialized
    num = 10;   // error: const variables can not be changed

    or,
    const int num = 10;
    num = 30; or num++; or num/=2;
    */


    //another example
    const int i = 10;
    const int j = i + 10;     // works fine


    //another example
    const int maxarray = 255;
    char store_char[maxarray];  // allowed in C++; not allowed in C
}
