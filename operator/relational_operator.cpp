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
    cout<<"a > b: ";
    if (a > b)
        cout<<"a is greater than b"<<endl;
    else
        cout<<"a is less than or equal to b"<<endl;

    // greater than equal to
    cout<<"a >= b: ";
    if (a >= b)
        cout<<"a is greater than or equal to b"<<endl;
    else
        cout<<"a is lesser than b"<<endl;

    // less than example
    cout<<"a < b: ";
    if (a < b)
        cout<<"a is less than b"<<endl;
    else
        cout<<"a is greater than or equal to b"<<endl;

    // lesser than equal to
    cout<<"a <= b: ";
    if (a <= b)
        cout<<"a is lesser than or equal to b"<<endl;
    else
        cout<<"a is greater than b"<<endl;

    // equal to
    cout<<"a == b:";
    if (a == b)
        cout<<"a is equal to b"<<endl;
    else
        cout<<"a and b are not equal"<<endl;

    // not equal to
    cout<<"a != b:";
    if (a != b)
        cout<<"a is not equal to b"<<endl;
    else
        cout<<"a is equal b"<<endl;

    //output:
    //    Relational Operators (==, !=, >, >=, <, <=)
    //
    //    a = 11, b = 5
    //
    //    a > b: a is greater than b
    //    a >= b: a is greater than or equal to b
    //    a < b: a is greater than or equal to b
    //    a <= b: a is greater than b
    //    a == b:a and b are not equal
    //    a != b:a is not equal to b
}

