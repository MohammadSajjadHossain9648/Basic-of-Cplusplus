#include<iostream>
using namespace std;

/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
*/
/*
    When the compiler is unable to decide which function is to be invoked among the overloaded function,
    this situation is known as function overloading.
    When the compiler shows the ambiguity error, the compiler does not run the program.

    Causes of Function Overloading:
    Type Conversion.
    Function with default arguments.
    Function with pass by reference.
*/

// Type Conversion.
void typeConversion1(int num);
void typeConversion2(double num); //if i write void typeConversion2(float num), it will show error

//Function with default arguments.
//int defaultArgument(int a);
//int defaultArgument(int a, int b = 20);

//Function with pass by reference.
void passReference(int x);
void passReference(int &x);

int main()
{
    // Type Conversion.
    typeConversion1(10);
    typeConversion2(1.2);

    //Function with default arguments.
//    defaultArgument(10);

    //Function with pass by reference.
    passReference(30); // which passReference() ?
}


//Type Conversion.
void typeConversion1(int num)
{
    cout<<"int value: "<<num<<endl;
}
void typeConversion2(double num)
{
    cout<<"double value: "<<num<<endl;
}

//Function with default arguments.
//int defaultArgument(int a)
//{
//    cout<<"a is"<<a<<endl;
//}
//int defaultArgument(int a, int b = 20)
//{
//    cout<<"a is"<<a<<endl;
//    cout<<"b is"<<b<<endl;
//}


//Function with pass by reference.
void passReference(int x)
{
    cout<<"x is "<<x<<endl;
}

void passReference(int &x)
{
    cout<<"x is "<<x<<endl;
}
/*
 what happen in type conversion?
 The above example shows an error “call of overloaded ‘typeConversion2(double)’ is ambiguous“.
 The typeConversion1(10) will call the first function. The typeConversion2(1.2) calls the second function according
 to our prediction. But, this does not refer to any function as in C++, all the floating point constants are treated
 as double not as a float. If we replace float to double, the program works.
 Therefore, this is a type conversion from float to double.

 sol:
 we can call float if we call different type return call like in the above code

    int typeConversion1(int num);
    void typeConversion2(float num);

    //or can call float and double together
    //    float typeConversion1(float num);
    //    void typeConversion2(double num);

    int main()
    {
        typeConversion1(10);
        typeConversion2(1.2);
    }

    int typeConversion1(int num)
    {
        cout<<"int value: "<<num<<endl;
    }
    void typeConversion2(float num)
    {
        cout<<"float value: "<<num<<endl;
    }
*/

/*
The above example shows an error “call of overloaded ‘defaultArgument(int)’ is ambiguous“.
The defaultArgument(int a, int b=20)  can be called in two ways: first is by calling the function
with one argument, i.e., defaultArgument(10) and
another way is calling the function with two arguments, i.e., defaultArgument(10, 30).
The defaultArgument(int a) function is invoked with one argument.
Therefore, the compiler could not be able to select among defaultArgument(int a) and defaultArgument(int a,int b=9).
*/

/*
The above example shows an error “call of overloaded ‘passReference(int&)’ is ambiguous“. The first function
takes one integer argument and the second function takes a reference parameter as an argument.
In this case, the compiler does not know which function is needed by the user as there is no syntactical
difference between the passReference(int) and passReference(int &).
*/
