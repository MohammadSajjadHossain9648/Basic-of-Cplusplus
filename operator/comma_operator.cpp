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
    to know more: https://www.geeksforgeeks.org/comna-in-c-and-c/
                  https://www.geeksforgeeks.org/a-comma-operator-question/
*/

    cout<<endl<<"** Comma Operator(,) **"<<endl<<endl;

    cout << "First Line"<<endl,
        cout << "Second Line"<<endl,
        cout << "Third Line"<<endl,
        cout << "Last line"<<endl<<endl;
    //output:
    //    First Line
    //    Second Line
    //    Third Line
    //    Last line



//another example
    int y=100, z;

    cout<<"y = "<<y<<endl;

    z = (y++, y + 10, 99 + y);
    cout <<"value of z = (y++, y + 10, 99 + y): "<<z<<endl<<endl;

    // output:
    //    y = 100
    //    value of z = (y++, y + 10, 99 + y): 200

    /*
        Incrementing value of y and assigning result to variable z.
        It start with y at 100, then increments it to 101 (y++).
        Next, y is added to 10. Finally, y, still at 101, is added to 99, giving 200. z is now 200.

        here, 3 lines of code writes in a one line.
        int y, z;
        y = 100;
        z=y++;
        z=y+10; //this line is do nothing cause y is not increase here
        z=y+99;
        cout <<"value of z is "<<z<<endl;
    */


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

    // f1() is called (evaluated) first followed by f2().The returned value of f2() is assigned to j
    int num = (f1(), f2());
    cout<<"number is "<<num<<endl<<endl;

    // output
    //    number is 20
}
