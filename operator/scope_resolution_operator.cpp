#include <iostream>
using namespace std;

// global variable
int number = 5;


//declare a class
class A{
public:

    //only declaration
    void fun();
};

void A::fun(){
    cout<<"code is fun"<<endl<<endl;
}

int main()
{
    /*
        to know more: https://www.geeksforgeeks.org/scope-resolution-operator-in-c/
    */

    // local variable with same name as that of global variable
    int number = 2;
    cout<<"global variable number is 5 & local variable number is 2 "<<endl;
    cout<<"number inside main function is :"<<number<<endl;


    //note if you want to use global variable in local area, just use ::number (:: ->scope resolution operator) instead of number
    cout<<"number outside of main function/ globally declare is :"<<::number<<endl<<endl;

    //output:
    //    global variable number is 5 & local variable number is 2
    //    number inside main function is :2
    //
    //    number outside of main function/ globally declare is :5



//another example
    std::cout<<"Hello"<<std::endl<<std::endl;

    //output:
    //    Hello


//another example with using class
    A a;
    a.fun();

    //output:
    //    code is fun
}

