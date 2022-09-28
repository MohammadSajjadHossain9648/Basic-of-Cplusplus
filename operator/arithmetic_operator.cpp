#include <iostream>
using namespace std;

int main()
{
/*
    Arithmetic Operators
        1. Unary Operators (++, –-)
        2. Binary Operators (+, -, *, /, %)
*/

    cout<<"Arithmetic Operators"<<endl<<endl;
    int a = 11;
    int b = 5;

    cout << "a = "<<a<<", b = "<<b <<endl<<endl;

    cout << "a + b is :" << a+b <<endl;
    cout << "a - b is :" << a-b <<endl;
    cout << "a * b is :" << a*b <<endl;
    cout << "a / b is :" << a/b <<endl;
    cout << "a % b is :" << a%b <<endl; //% modulus operator (Returns remainder after division.)
    cout << "a++ is :" << a++ <<endl;
    cout << "a-- is :" << a-- <<endl<<endl;


    /* important fact about unary operator (increment/decrement operator)
    ++/increment operator can be write as four ways:
    1.a++(post-increment) //first initial the value then a is increase it by 1
    2.++a(pre-increment) //first a is increase it by 1 then initial the value
    and also same as a=a+1, a+=1(assignment operator)

    --/increment operator can be write as four ways:
    1.a--(post-decrement) //first initial the value then a is decrease it by 1
    2.--a(pre-decrement) //first a is decrease it by 1 then initial the value
    and also same as a=a-1, a-=1(assignment operator)
    */

    int i=4,num1,num2;
    num1=i++; //first num1 is store 4 and then i is store 5 which is increased by 1.
    num2=++i; //here, i=5. First i is increased by 1 which is 6. then num2 is store 6 and i=6.

    num1=i--; //same as num1=i-1; first num1 is store 6 and then i is store 5 which is decreased by 1.
    num2=--i; //here, i=5. First i is decreased by 1 which is 4. then num2 is store 4 and i=4.

    cout<<"Pre-increment (++i): Before assigning the value to the variable, the value is incremented by one."<<endl;
    cout<<"Post-increment (i++): After assigning the value to the variable, the value is incremented."<<endl<<endl;

    cout << "i = "<<i<<endl;
    cout<<"post-increment of num1 (num1=i++): "<<num1<<endl;
    cout<<"pre--increment of num2 (num2=++i): "<<num2<<endl;
    cout<<"post-decrement of num1 (num1=i--): "<<num1<<endl;
    cout<<"pre-decrement of num2 (num2=--i): "<<num2<<endl;

    /*
    num1= i+1; // here, i never increase.
    cout<<"num1: "<<num1<<endl;
    cout<<"i: "<<i<<endl; //4

    solve this next line code
    */

    num1= i;
    i+=1; // same as a=a+1, a++

    cout<<"num1: "<<num1<<endl;
    cout<<"i: "<<i<<endl; //5

    // output:
    //    Arithmetic Operators
    //
    //    a = 11, b = 5
    //
    //    a + b is :16
    //    a - b is :6
    //    a * b is :55
    //    a / b is :2
    //    a % b is :1
    //    a++ is :11
    //    a-- is :12
    //
    //    Pre-increment (++i): Before assigning the value to the variable, the value is incremented by one.
    //    Post-increment (i++): After assigning the value to the variable, the value is incremented.
    //
    //    i = 4
    //    post-increment of num1 (num1=i++): 6
    //    pre--increment of num2 (num2=++i): 4
    //    post-decrement of num1 (num1=i--): 6
    //    pre-decrement of num2 (num2=--i): 4
    //    num1: 4
    //    i: 5
}

