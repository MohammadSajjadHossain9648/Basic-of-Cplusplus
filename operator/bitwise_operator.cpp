#include<iostream>
using namespace std;

int main()
{
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


    cout<<"Bitwise Operators (&, |, ^, ~, <<, >>)"<<endl<<endl;

    int a = 11, b = 5;

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
}
