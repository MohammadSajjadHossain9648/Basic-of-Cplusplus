#include<iostream>
#include<math.h>
using namespace std;

int main()
{
//    int decimal_num;
//    cout<<"enter decimal number: ";
//    cin>>decimal_num;
//
//    if(decimal_num == 0){
//        cout<<"decimal number is "<<1<<endl;
//        return 0;
//    }
//
//    int num = decimal_num;
//    int compare_num = 0;
//
//    while(num){
//        compare_num = (compare_num << 1) | 1;
//        num >>= 1;
//    }
//
//    int answer = (~decimal_num) & compare_num;
//    cout<<"decimal number is "<<answer<<endl;

    /*
        what i do in code?
        let decimal = 10. binary of 10 is 00000....1010 and ~(10) = 1111...0101.
        now compare binary of 10 and ~(10).

            0000....1010
            1111....0101

        here, we need ~(10) last 4 bits (0101) which is answer (decimal = 5) and rest of 1 will be ignored.
        how i do that?

        step 1: store decimal value to another integer like int num = decimal_num;.
        step 2: create a compare_num variable which make last 4 bit are 1 and rest is 0.
                compare_num = (compare_num << 1) | 1; -> 0000....1111
                and also right shift the num variable so that i can get the total bit of 1.
        step 3: compare between ~(10) and compare_num
                  1111....0101 -> ~(10)
              &   0000....1111 -> compare_num
              -----------------
                  0000....0101 -> 5(decimal num which is answer)

    */


// more efficient way to code
    int decimal_num;
    cout<<"enter decimal number: ";
    cin>>decimal_num;

    if(decimal_num == 0){
        cout<<"decimal number is "<<1<<endl;
        return 0;
    }

    int compare_num = 1;

    while(compare_num <= decimal_num){
        decimal_num = decimal_num ^ compare_num;
        compare_num <<= 1 ;
    }

    cout<<"decimal number is "<<decimal_num<<endl;

    /*
        what i do in code?
        approach: let decimal is 5 = 101

        101       100       110    ->decimal_num
        ^ 1  =>   ^10  =>  ^100    ->compare_num
        ---       ---      ----
        100       110       010    ->decimal_num(2)
    */


    /*
        how it works in theory?
        step 1: convert decimal to binary. like an example, decimal 10 to 1010 binary.
        Suppose input decimal number is 13
        Step 1. 10/2 , Remainder = 0, Quotient = 5
        Step 2. 5/2 , Remainder = 1, Quotient = 2
        Step 3. 2/2 , Remainder = 0, Quotient = 1
        Step 4. 1/2 , Remainder = 1, Quotient = 0

        Now, the binary equivalent of 10 is the remainders in reverse order : 1010

        step 2: now xor the each binary number separately by 1 and convert it to decimal
            binary number is 1010
            last_digit = 0, xor_bit = 0^1 = 1, decimal_num = 0 + 1*(2, 0) = 1
            last_digit = 1, xor_bit = 1^1 = 0, decimal_num = 1 + 0*(2, 1) = 1
            last_digit = 0, xor_bit = 0^1 = 1, decimal_num = 1 + 1*(2, 2) = 5
            last_digit = 1, xor_bit = 1^1 = 0, decimal_num = 5 + 0*(2, 3) = 5

            now decimal number is 5.
    */
}
