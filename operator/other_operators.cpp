#include <iostream>
using namespace std;

int main()
{
/*
    sizeof operator (Use sizeof operator to determine the size of a data type.)
    to know more: https://www.geeksforgeeks.org/sizeof-operator-c/
*/

    cout<<endl<<"** sizeof Operators **"<<endl<<endl;

    cout<<"Size of int : "<<sizeof(int)<<endl;
    cout<<"Size of char : "<<sizeof(char)<<endl;
    cout<<"Size of float : "<<sizeof(float)<<endl;
    cout<<"Size of double : "<<sizeof(double)<<endl;

/*
    Comma Operator (,)
    to know more: https://www.geeksforgeeks.org/comna-in-c-and-c/
*/

    cout<<endl<<"** Comma Operator(,) **"<<endl<<endl;

    int y=100, z;

    cout<<"y = "<<y<<endl;

    z = (y++, y + 10, 99 + y);
    cout <<"value of z = (y++, y + 10, 99 + y): "<<z<<endl;

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


/*
    Conditional Operator (Condition ? Expression2 : Expression3;)
    to know more: https://www.geeksforgeeks.org/cc-ternary-operator-some-interesting-observations/
*/
    cout<<endl<<"** Conditional Operator (Condition ? Expression2 : Expression3;) **"<<endl<<endl;

    cout<<"if num3 is less than 10, store twice num3 value in num4. otherwise store 0."<<endl<<endl;
    int num3=5,num4;
    cout<<"num3 = "<<num3<<endl;
    num4=(num3<10)?num3*2:0;
    cout<<"value of num4=("<<num3<<"<10)?"<<num3<<"*2:0 is : "<<num4<<endl;

    // output:
    //    ** Conditional Operator (Condition ? Expression2 : Expression3;) **
    //
    //    if num3 is less than 10, store twice num3 value in num4. otherwise store 0.
    //
    //    num3 = 5
    //    value of num4=(5<10)?5*2:0 is : 10



// Cast Operator (convert one data type to another which is called typecasting)

    cout<<endl<<"** Cast Operator **"<<endl<<endl;
    int num5=10,num6=3;
    cout<<"num5 = "<<num5<<", num6 = "<<num6<<endl;
    float num7 = (float)num5/num6;
    cout<<"value of num7 = "<<num5<<"/"<<num6<<" : "<<num7<<endl;

    // output:
    //    ** Cast Operator **
    //
    //    num5 = 10, num6 = 3
    //    value of num7 = 10/3 : 3.33333



// &,* Operator (Addressof operator(&))
    cout<<endl<<"** &,* Operator **"<<endl<<endl;
    int num8 = 10;
    int* ptr;
    ptr = &num8; // address of num8 is copied to the location ptr.
    cout<<"address of num8 (ptr= &num8): "<<ptr<<endl;
    cout<<"value of num8 (*ptr): "<<*ptr<<endl;

    //output:
    //    ** &,* Operator **
    //
    //    address of num8 (ptr= &num8): 0x5ed6dffc74
    //    value of num8 (*ptr): 10
}

