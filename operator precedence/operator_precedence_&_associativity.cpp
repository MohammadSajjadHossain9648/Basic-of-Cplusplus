#include <iostream>
using namespace std;

int f1(){
    return 10;
}
int f2(){
    return 20;
}


int main()
{
/*
    link: https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/
*/
/*
    Operator precedence determines which operator is performed first in an expression
    with more than one operators with different precedence.
    For example: Solve 10 + 20 * 30
    here,10 + 20 * 30 is calculated as 10 + (20 * 30) and not as (10 + 20) * 30

    Operators Associativity is used when two operators of same precedence appear in an expression.
    Associativity can be either Left to Right or Right to Left.
    For example: ‘*’ and ‘/’ have same precedence and their associativity is Left to Right,
    so the expression “100 / 10 * 10” is treated as “(100 / 10) * 10”.
*/
/*
    super hints: always use brackets/parentheses-> (), which one you want to performed first in an expression
    with more than one operators with different precedence. cause it gives more priority to perform.
*/

    cout<<"value of 10/2*5+1: "<<10/2*5+1<<endl<<endl;
    cout<<"value of 10*2/5+1: "<<10*2/5+1<<endl<<endl;

    //output:
    //    value of 10/2*5+1: 26
    //
    //    value of 10*2/5+1: 5


    int a;
    a=1,2,3;
    cout<<"a = "<<a<<endl<<endl;

    a=(1,2,3);
    cout<<"a = "<<a<<endl<<endl;

    a=(1,2),3;
    cout<<"a = "<<a<<endl<<endl;

    cout<<"value is "<<(10,20)<<endl<<endl;

    //output:
    //    a = 1
    //
    //    a = 3
    //
    //    a = 2
    //
    //    value is 20

    /*
    what happen here?
    in first one, when we use a=1,2,3; a is avoid 1 and 2 because every value is separated with comma(,).
    comma(,) operator associativity is left-to-right. a check the update value or last value of 1,2,3. should be a=3.
    but thats not happen.

    in real the first one,The above program fails in compilation, but the following program compiles fine and prints 1.

    in second one, when we use a=(1,2,3); a is decide first which value to store by which operand.
    Because every value is separated with comma(,) and parentheses->().
    parentheses are used so comma operator is executed first and we get the output as 3.

    in third one, parentheses are used so comma operator is executed first and we get the output as 2.
    or, If you are not able to understand then here is the explanation:

       1. Firstly the code inside the brackets is evaluated, so we get 2.
       2. Then the code becomes a = 2, 3 which means (a = 2), 3 as explained earlier.
       3. Therefore the output is 2.
    */



//another example

    int x=10,y=20,z=30;

    if (z>y>x)
        cout<<"TRUE"<<endl<<endl;
    else
        cout<<"FALSE"<<endl<<endl;

    //output:
    //    FALSE

    /*
        (c > b > a) is treated as ((c  > b) > a), associativity of '>' is left to right.
        Therefore the value becomes ((30 > 20) > 10) which becomes (1 > 10). here, 1 because 30>20 is true.
        but it is true to print.

        so here we solve it by use parentheses->()
        if (z>(y>x))
            cout<<"TRUE"<<endl<<endl;
        first we check y>x then z>(y>x)
    */





//another example

    // f1() is called (evaluated) first followed by f2().The returned value of f2() is assigned to j
    int num = (f1(), f2());
    cout<<"number is "<<num<<endl<<endl;

    // output
    //    number is 20
}
