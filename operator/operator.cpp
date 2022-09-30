#include <iostream>
using namespace std;

int main()
{
/*  link:
        https://www.geeksforgeeks.org/operators-c-c/
        https://www.guru99.com/cpp-operators.html
        https://www.tutorialspoint.com/cplusplus/cpp_operators.htm
*/
/*
        operators in c++
        1.	Arithmetic Operators
            1.1. Unary Operators (++, –-)
            1.2. Binary Operators (+, -, *, /, %)

        2.	Relational Operators (==, !=, >, >=, <, <=)
                //to know more: https://www.geeksforgeeks.org/operators-in-c-set-2-relational-and-logical-operators/
        3.	Logical Operators (&&, ||, !)
                //to know more: https://www.geeksforgeeks.org/operators-in-c-set-2-relational-and-logical-operators/
        4.	Bitwise Operators (&, |, ^, ~, <<, >>)
        5.	Assignment Operators (=, +=, -=, *=, /=, %=)
        6.	Other Operators
            6.1. sizeof operator
                //to know more: https://www.geeksforgeeks.org/sizeof-operator-c/
            6.2. Comma Operator (,)
                //to know more: https://www.geeksforgeeks.org/comna-in-c-and-c/
            6.3. Conditional Operator (Condition ? Expression2 : Expression3;)
                //to knoe more: https://www.geeksforgeeks.org/cc-ternary-operator-some-interesting-observations/
            6.4. dot (.) and arrow (->) Operators
                1.Member operators are used to reference individual members of classes, structures, and unions.
                2.The dot operator is applied to the actual object.
                3.The arrow operator is used with a pointer to an object.
                //to know more: https://www.geeksforgeeks.org/arrow-operator-in-c-c-with-examples/#:~:text=The%20Dot(.),or%20the%20unions%20using%20pointers.
                                https://www.geeksforgeeks.org/dot-operator-in-c-c/
            6.5. Cast Operator (convert one data type to another)
            6.6. &,* Operator (Addressof operator(&))
                1.Pointer operator & returns the address of a variable. For example &a; will give the actual address of the variable.
                2.Pointer operator * is a pointer to a variable. For example *var; will pointer to a variable var.

*/




/*
    Arithmetic Operators
        1. Unary Operators (++, –-)
        2. Binary Operators (+, -, *, /, %)
*/

    cout<<"**** Arithmetic Operators ****"<<endl<<endl;
    int a = 11;
    int b = 5;
    int c = 10;
    int d = 20;

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



//  Relational Operators (==, !=, >, >=, <, <=)

    cout<<endl<<"**** Relational Operators (==, !=, >, >=, <, <=) ****"<<endl<<endl;

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




/*
     Logical Operators (&&, ||, !)
     to know more: https://www.geeksforgeeks.org/operators-in-c-set-2-relational-and-logical-operators/
*/

    cout<<endl<<"**** Logical Operators (&&, ||, !) ****"<<endl<<endl;

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



/*
      bitwise operators include:

        & Bitwise AND
        | Bitwise OR
        << Bitwise Left Shift
        >> Bitwise Right Shift
        ~ Bitwise Complement
        ^ Bitwise XOR


        Bitwise operator works on bits and perform bit-by-bit operation. The truth tables for &, |, and ^ are as follows −

        p	q	p & q	p | q	p ^ q
        0	0	  0   	  0	      0
        0	1	  0	      1       1
        1	1	  1	      1	      0
        1	0	  0	      1	      1

        source:https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
               https://www.programiz.com/cpp-programming/bitwise-operators
               https://www.codecademy.com/resources/docs/cpp/bitwise-operators
*/

    cout<<endl<<"**** Bitwise Operators (&, |, ^, ~, <<, >>) ****"<<endl<<endl;

    cout<<"a = "<<a<<", b = "<<b<<endl<<endl;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;

    // output:
    //    Bitwise Operators (&, |, ^, ~, <<, >>)
    //
    //    a = 11, b = 5
    //
    //    a & b = 1
    //    a | b = 15
    //    a ^ b = 14
    //    ~a = -12
    //    b << 1 = 10
    //    b >> 1 = 2

    /*
    11 = 00........00001011 (In Binary), 5 = 00........00000101 (In Binary) [4 byte]

    how convert binary to decimal: (101) = (1 × 2²) + (0 × 2¹) + (1 × 2^0) = (5)


    Bitwise AND Operation of 11 and 5
             00....00001011
        &    00....00000101
             ______________
             00....00000001  = 1 (In decimal)
    Bitwise OR Operation of 11 and 5
             00....00001011
        |    00....00000101
             ______________
             00....00001111  = 15 (In decimal)
    Bitwise XOR Operation of 11 and 5
             00....00001011
        ^    00....00000101
             ______________
             00....00001110  = 14 (In decimal)
    Bitwise NOT Operation of a=11

           // Using bitwise 2's complement operator
            ~ 00....00001011
             _______________
              11....11110100 = -12 (In decimal)

      note: process of Bitwise NOT Operation
            (In Binary) 11 = 00........00001011
            1's Complement = 11........11110100 -> this value is store  //change 1 to 0 and 0 to 1

            when print the value:
            First check the msb(most significant bit) which is 1, thats mean it is negative number.
            Then again 2's complement the value.

               store value = 11........11110100
            1's Complement = 00........00001011  //change 1 to 0 and 0 to 1
            2's Complement : 00........00001011
                                    +         1
                             __________________
                             00........00001100 = -12 (In decimal) -> this value is print

    Bitwise Left Shift Operation(<<) of b=5
        5 = 00....00000101 (In Binary)
        b<<1:
        00....00001010 = 10 (In decimal)
        note: every bit take previous bit cause we shift left 1 bit(b<<1) and last bit is empty so we add 0 in last bit

        ***short hint: b<<n. the value (In decimal) is b*(2*n)

    Bitwise Right Shift Operation(>>) of b=5
        5 = 00....00000101 (In Binary)
        b>>1:
        00....00000010 = 2 (In decimal)
        note: every bit take next bit cause we shift right 1 bit(b<<1) and last bit is empty so we add 0 in first bit

        ***short hint: b>>n. the value (In decimal) is b/(2*n)
    */


    /*
    Interesting facts about bitwise operators 1:

    The left shift and right shift operators should not be used for negative numbers.
        1. if the number of shifts is a negative num (1<<-1/ 1>>-2), it results in undefined behaviour in code.
        2. if the number is shifted more than the size of the integer (1<<33), the behaviour is undefined.
    */


    /*
    Interesting facts about bitwise operators 2:
    The bitwise XOR operator is the most useful operator from a technical interview perspective. It is used in many problems.

    A simple example could be “Given a set of numbers where all elements occur an even number of times except one number,
    find the odd occurring number”
    This problem can be efficiently solved by just doing XOR to all numbers. For example, consider the following program.
    */

    cout<<endl<<"From a technical interview perspective"<<endl;
    int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
    cout<<"sizeof(arr): "<<sizeof(arr)<<endl;
    cout<<"sizeof(arr[0]): "<<sizeof(arr[0])<<endl;

    int n = sizeof(arr) / sizeof(arr[0]);
    int res=0;
    for (int i = 0; i < n; i++)
        res ^= arr[i];
    cout << "The odd occurring element is  "<< res<<endl<<endl;

    // output:
    //    From a technical interview perspective
    //    sizeof(arr): 28
    //    sizeof(arr[0]): 4
    //    The odd occurring element is  90




    /*
    Interesting facts about bitwise operators 3:
    The bitwise operators should not be used in place of logical operators.

    The result of logical operators (&&, || and !) is either 0 or 1, but bitwise operators return an integer value.
    Also, the logical operators consider any non-zero operand as 1.
    For example, consider the following program.
    */

    int num9=5,num10=7;
    cout<<"num9 = "<<num9<<", num10 = "<<num10<<endl<<endl;

    //bitwise operators return an integer value.
    cout<<"(num9 & num10): "<<(num9 & num10)<<endl; //check the value

    cout<<"("<<num9<<" & "<<num10<<"): ";
    (num9 & num10)? cout<<"true"<<endl : cout<<"false"<<endl;

    //The result of logical operators (&&, || and !) is either 0 or 1.
    //The logical operators consider any non-zero operand as 1.
    cout<<endl<<"(num9 && num10): "<<(num9 && num10)<<endl; //check the value

    cout<<"("<<num9<<" && "<<num10<<"): ";
    (num9 && num10)? cout<<"true"<<endl : cout<<"false"<<endl;

    // output:
    //    num9 = 5, num10 = 7
    //
    //    (num9 & num10): 5
    //    (5 & 7): true
    //
    //    (num9 && num10): 1
    //    (5 && 7): true

    /*
        what happen here?
        (num9 & num10): Bitwise AND Operation of 5 and 7
             00....00000101
        &    00....00000111
             _________
             00....00000101  = 5 (In decimal)

             so, it is not zero (In decimal). so that it is show true.

             ***note: if Bitwise AND Operation result is zero (In decimal), the output become false.

             like an example, num9=5, num10=8.
             Bitwise AND Operation of 5 and 8
             00....00000101
        &    00....00001000
             _________
             00....00000000  = 0 (In decimal)

        (num9 && num10): none of two operands (num9, num10) are zero, so output is true.

             ***note: if one number is zero, the output become false.
    */





    /*
    Interesting facts about bitwise operators 4:
    The & operator can be used to quickly check if a number is odd or even.
    The value of expression (num11 & 1) would be non-zero only if num11 is odd, otherwise the value would be zero.
    */

    // for odd number print
    int num11=5;

    cout<<endl<<num11<<" & 1: ";
    (num11 & 1)? cout<<"Odd"<<endl : cout<<"Even"<<endl; //If true, print Odd.

    //   or same as for even number print
    //(num11 & 2)? cout<<"Even"<<endl : cout<<"Odd"<<endl; //If true, print Even.

    // output:
    //    5 & 1: Odd

    /*
     same as Interesting facts about bitwise operators 3:
     what happen here?
        1. input: num11=5;
             00....00000101
        &                 1
             ______________
             00....00000101  = 5 (In decimal)

             so, it is not zero (In decimal). so that it is show true. thats why output is Odd.

           input: num11=2;
             00....00000010
        &                 1
             ______________
             00....00000000  = 0 (In decimal)

             so, it is zero (In decimal). so that it is show false. thats why output is Even.

         2.input: num11=10;
             00....00001010
        &                10
             ______________
             00....00000010  = 2 (In decimal)

             so, it is not zero (In decimal). so that it is show true. thats why output is Even.

          input: num11=5;
             00....00000101
        &                10
             ______________
             00....00000000  = 0 (In decimal)

             so, it is zero (In decimal). so that it is show false. thats why output is Odd.

    */


    /*
    Interesting facts about bitwise operators 5:
    The left-shift and right-shift operators are equivalent to multiplication and division by 2 respectively.
    As mentioned in point 1, it works only if numbers are positive.

     ***short hint:
     1.b<<n. the value (In decimal) is b*(2*n)
     2.b>>n. the value (In decimal) is b/(2*n)
    */

    cout<<endl<<"left-shift and right-shift operators"<<endl;
    cout<<"19 << 1 = "<< (19 << 1) <<endl;
    cout<<"19 >> 1 = "<< (19 >> 1) <<endl;

    // output:
    //    left-shift and right-shift operators
    //    19 << 1 = 38
    //    19 >> 1 = 9


    /*
    Interesting facts about bitwise operators 6:
    The ~ operator should be used carefully.
    The result of ~ operator on a small number can be a big number if the result is stored in an unsigned variable.
    And the result may be a negative number if the result is stored in a signed variable
    (assuming that the negative numbers are stored in 2’s complement form where the leftmost bit is the sign bit)
    */

    cout<<endl;
    unsigned int num12 = 1;
    signed int num13 = 1;
    cout<<"Unsigned Result of ~"<<num12<<": "<<~num12<<endl;
    cout<<"Signed Result ~"<<num13<<": "<<~num13<<endl;

    //output:
    //    Unsigned Result of ~1: 4294967294
    //    Signed Result ~1: -2

    /*
        note: process of Bitwise NOT Operation
           1. first one is unsigned int.
             (In Binary) 1 = 00000000 0000000 00000000 00000001
            1's Complement = 11111111 11111111 11111111 11111110 -> this value is store  //change 1 to 0 and 0 to 1

            when print the value:
            First, we don't check the msb(most significant bit) cause it is unsigned int(), thats means no negative int number.
            Then print the value in decimal.

               store value = 11111111 11111111 11111111 11111110 = 4294967294 (In decimal) -> this value is print

           2. second one is signed int.
             (In Binary) 1 = 00........00000001
            1's Complement = 11........11111110 -> this value is store  //change 1 to 0 and 0 to 1

            when print the value:
            First check the msb(most significant bit) which is 1, thats mean it is negative number.
            Then again 2's complement the value.

               store value = 11........11111110
            1's Complement = 00........00000001  //change 1 to 0 and 0 to 1
            2's Complement : 00........00000001
                                    +         1
                             __________________
                             00........00000010 = -2 (In decimal) -> this value is print
    */





// Assignment Operators (=, +=, -=, *=, /=, %=)

    cout<<endl<<"**** Assignment Operators (=, +=, -=, *=, /=, %=) ****"<<endl<<endl;

    int x = 5;
    cout << "Initial value of x is " << x <<endl;

    cout << "x += 5 gives :" << (x += 5) <<endl;

    cout << "x -= 5 gives : " << (x -= 5) <<endl;

    cout << "x *= 5 gives :" << (x *= 5) <<endl;

    cout << "x /= 5 gives : " << (x /= 5) <<endl;

    cout << "x %= 5 gives : " << (x %= 5) <<endl;
    // or can be write same as
    //    int x;
    //    cout << "Initial value of x is " << (x=5) <<endl;
    //    x += 5;
    //    cout << "x += 5 gives : " << x <<endl;

    // output:
    //    Assignment Operators (=, +=, -=, *=, /=, %=)
    //
    //    Initial value of x is 5
    //    x += 5 gives :10
    //    x -= 5 gives : 5
    //    x *= 5 gives :25
    //    x /= 5 gives : 5
    //    x %= 5 gives : 0




// Other Operators
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
