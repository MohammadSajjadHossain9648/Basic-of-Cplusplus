#include <iostream>
using namespace std;

int main()
{
// Logical Operators (&&, ||, !)

    int a = 11;
    int b = 5;
    int c = 10;
    int d = 20;

    cout<<"Logical Operators (&&, ||, !)"<<endl<<endl;

    cout << "a = "<<a<<", b = "<<b <<endl;
    cout << "c = "<<c<<", d = "<<d <<endl<<endl;

    // logical AND example
    if (a > b && c == d)
        cout<<"a is greater than b AND c is equal to d\n"<<endl;
    else
        cout<<"AND condition not satisfied\n"<<endl;

    // logical OR example
    if (a > b || c == d)
        cout<<"a is greater than b OR c is equal to d\n"<<endl;
    else
        cout<<"Neither a is greater than b nor c is equal "
               " to d\n"<<endl;

    // logical NOT example
    if (!a)
        cout<<"a is zero\n"<<endl;
    else
        cout<<"a is not zero"<<endl;

    // output:
    //    Logical Operators (&&, ||, !)
    //
    //    a = 11, b = 5
    //    c = 10, d = 20
    //
    //    AND condition not satisfied
    //
    //    a is greater than b OR c is equal to d
    //
    //    a is not zero
}
