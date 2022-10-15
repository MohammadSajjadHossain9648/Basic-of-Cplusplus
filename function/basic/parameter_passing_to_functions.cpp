#include<iostream>
#include<math.h>
using namespace std;

/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
                  https://www.programiz.com/cpp-programming/function
*/
/*
    There are two most popular ways to pass parameters:

    Pass by Value: In this parameter passing method, values of actual parameters are copied to the
    function’s formal parameters and the two types of parameters are stored in different memory locations.
    So any changes made inside functions are not reflected in the actual parameters of the caller.

    Pass by Reference: Both actual and formal parameters refer to the same locations, so any changes
    made inside the function are actually reflected in the actual parameters of the caller.
*/

int power(int x, int y)
{
    int answer = 1;
    for(int i=1; i<=y; i++)
    {
        answer = answer * x;
    }
    return answer;
}

int squareRoot(int *x)
{
    *x = sqrt(*x);
}

int main()
{
    //pass by value
    int a = 10;
    int b = 2;
    int answer1 = power(a, b);
    cout<<"power of (10, 2): "<<answer1<<endl;

    //pass by reference
    int a = 100;
    squareRoot(&a);   //never use int answer2 = power2(&a); cause it store address of a.
    cout<<endl<<"squareroot of (100): "<<a<<endl;

    //output:
    //    power of (10, 2): 100
    //
    //    squareroot of (100): 10



    /*
    how pass by value works in function?
    in main() function, when we declare/create two variables like int a, b then new storage allocate for a and b
    separately. in this storage we store two values with different memory allocation or address. when we pass this
    values to another function called power(), in there, two different new storage allocate for x and y separately
    with the copy of a and b value. whatever we edit x and y, no change will happen in main function values thats
    mean a and b remain same. because x and y is a copy of a and b.

    for example: go github/critical question/function/function_critical_question_1.cpp
    */

    /*
    how pass by reference works in function?
    Functions Using Pointers
    The function squareRoot() expects a pointer x to an integer (or an address of an integer).
    It modifies the value at the address x. The dereference operator * is used to access the value at an address.
    In the statement ‘*x = sqrt(*x)’, the value at address x is changed to 10.
    The address operator & is used to get the address of a variable of any data type.
    In the function call statement ‘squareRoot(&a)’,
    the address of a is passed so that a can be modified using its address.
    */
}
