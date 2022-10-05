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
    cout<<"a > b && c == d: ";
    if (a > b && c == d)
        cout<<"a is greater than b AND c is equal to d"<<endl;
    else
        cout<<"AND condition not satisfied"<<endl;

    // logical OR example
    cout<<"a > b || c == d: ";
    if (a > b || c == d)
        cout<<"a is greater than b OR c is equal to d"<<endl;
    else
        cout<<"Neither a is greater than b nor c is equal "
               " to d"<<endl;

    // logical NOT example
    cout<<"!a: ";
    if (!a)
        cout<<"a is zero"<<endl;
    else
        cout<<"a is not zero"<<endl;

    // output:
    //    Logical Operators (&&, ||, !)
    //
    //    a = 11, b = 5
    //    c = 10, d = 20
    //
    //    a > b && c == d: AND condition not satisfied
    //    a > b || c == d: a is greater than b OR c is equal to d
    //    !a: a is not zero
    
    
    
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
     
     
     
// another example of logical operator
    string hex_num;
    cout<<"enter a hexadecimal number: ";
    cin>>hex_num;

    //check every single digit which is 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F. otherwise give error and then exit.
    //reason behind: hex number system is base 16 number system and uses 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F.
    for(int i=0; i<hex_num.length(); i++)
    {
        if( !(hex_num[i]>='0' && hex_num[i]<='9') && !(hex_num[i]>='A' && hex_num[i]<='F') )
        {
            cout<<"invalid input"<<endl<<endl;
            return 0;
        }
    }
     
    //output:
    //enter a hexadecimal number: 1H2
    //invalid input
}
