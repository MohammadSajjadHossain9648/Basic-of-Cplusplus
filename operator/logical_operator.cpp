#include <iostream>
using namespace std;

int main()
{
/*
     Logical Operators (&&, ||, !)
     to know more: https://www.geeksforgeeks.org/operators-in-c-set-2-relational-and-logical-operators/
*/
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
    
    
    
// Short-Circuiting in Logical Operators:

    cout<<endl<<"Short-Circuiting in Logical Operators: "<<endl<<endl;
    
    //In the case of logical AND, the second operand is not evaluated if the first operand is false.
    //For example, program below doesn’t print “GeeksQuiz” as the first operand of logical AND itself is false.
    cout<<"res1: ";
    bool res1 = ( (a == b) && cout<<"GeeksQuiz" );

    //But the below program prints “GeeksQuiz” as the first operand of logical AND is true.
    cout<<endl<<"res2: ";
    bool res2 = ( (a != b) && cout<<"GeeksQuiz" );

    //In the case of logical OR, the second operand is not evaluated if the first operand is true.
    //For example, program below doesn’t print “GeeksQuiz” as the first operand of logical OR itself is true.
    cout<<endl<<"res3: ";
    bool res3 = ( (a != b) || cout<<"GeeksQuiz" );

    //But the below program prints “GeeksQuiz” as the first operand of logical OR is false.
    cout<<endl<<"res4: ";
    bool res4= ( (a == b) || cout<<"GeeksQuiz" );

    // output:
    //    Short-Circuiting in Logical Operators:
    //
    //    res1:
    //    res2: GeeksQuiz
    //    res3:
    //    res4: GeeksQuiz
}
