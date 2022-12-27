#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/scope-of-variables-in-c/
*/
/*
    note for global varaible: global varaible can change anywhere. if update once, it use rest of code. so, it must be
    a issue. so try to avoid it. and remember that it take space.
*/

// global variable
int num = 5;

//issue example
int score = 15;

int a()
{
    cout<<"\n\nglobal varable: score = "<<score;
    score++;
    cout<<"\nscore update in a function: score = "<<score;
}
int b()
{
    cout<<"\nscore in b function: score = "<<score;
}
int c()
{
    cout<<"\nscore in c function: score = "<<score;
}


int main()
{
    // local variable with same name as that of global variable
    int num = 2;
    cout<<"global variable num is 5 & local variable num is 2 ";
    cout<<"number inside main function is :"<<num;

    //note if you want to use global variable in local area, just use ::num (:: ->scope resolution operator)
    //instead of num
    cout<<"number outside of main function/ globally declare is :"<<::num;

    //output:
    //    global variable num is 5 & local variable num is 2
    //    num inside main function is :2
    //
    //    num outside of main function/ globally declare is :5



//issue example
    a();
    b();
    c();

    //output:
    //    global varable: score = 15
    //    score update in a function: score = 16
    //    score in b function: score = 16
    //    score in c function: score = 16
}
