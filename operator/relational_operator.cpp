#include <iostream>
using namespace std;

int main()
{
//	Relational Operators (==, !=, >, >=, <, <=)

    int a = 11;
    int b = 5;

    cout<<"Relational Operators (==, !=, >, >=, <, <=)"<<endl<<endl;

    cout<<"a = "<<a<<", b = "<<b<<endl<<endl;

    // greater than example
    if (a > b)
        cout<<"a is greater than b\n"<<endl;
    else
        cout<<"a is less than or equal to b\n"<<endl;

    // greater than equal to
    if (a >= b)
        cout<<"a is greater than or equal to b\n"<<endl;
    else
        cout<<"a is lesser than b\n"<<endl;

    // less than example
    if (a < b)
        cout<<"b is greater than a\n"<<endl;
    else
        cout<<"b is less than or equal to a\n"<<endl;

    // lesser than equal to
    if (a <= b)
        cout<<"b is greater than or equal to a\n"<<endl;
    else
        cout<<"b is less than a\n"<<endl;

    // equal to
    if (a == b)
        cout<<"a is equal to b\n"<<endl;
    else
        cout<<"a and b are not equal\n"<<endl;

    // not equal to
    if (a != b)
        cout<<"a is not equal to b\n"<<endl;
    else
        cout<<"a is equal b\n"<<endl;

    //output:
    //    Relational Operators (==, !=, >, >=, <, <=)
    //
    //    a = 11, b = 5
    //
    //    a is greater than b
    //
    //    a is greater than or equal to b
    //
    //    b is less than or equal to a
    //
    //    b is less than a
    //
    //    a and b are not equal
    //
    //    a is not equal to b
}

