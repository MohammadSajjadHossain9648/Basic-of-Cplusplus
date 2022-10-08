#include<iostream>
#include<math.h>
using namespace std;

int binary_base = 2;
int decimal_base = 10;
int octal_base = 8;

int main()
{
    /*
        to know more:
        https://www.techcrashcourse.com/2017/01/cpp-program-to-convert-binary-to-decimal.html
        https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b
        https://coderspacket.com/number-system-conversion
        https://www.geeksforgeeks.org/program-binary-decimal-conversion/
    */

    cout<<"**** binary to octal conversion ****"<<endl<<endl;

    long long int binary_num;
    cout<<"enter a binary number: ";
    cin>>binary_num;

    long long int i=0, decimal_num=0, j=0, octal_num=0;

    while(binary_num)
    {
        int last_digit = binary_num % decimal_base;
        decimal_num += last_digit * pow(binary_base,i);
        binary_num /= decimal_base;
        i++;
    }

    while(decimal_num)
    {
        int last_digit = decimal_num % octal_base;
        octal_num += last_digit * pow(decimal_base,j);
        decimal_num /= octal_base;
        j++;
    }

    cout<<"octal number is "<<octal_num<<endl<<endl;


    //    output:
    //    **** binary to octal conversion ****
    //
    //    enter a binary number: 1101100
    //    octal number is 154
    //
    //    enter a binary number: 1111111111111111
    //    octal number is 177777



    /*
        in our code, we first convert the binary to decimal value.
        Convert binary 1101100 to decimal:

        given input binary number is 1101100
        step 1 : decimal number = 1*2^6 + 1*2^5 + 0*2^4 + 1*2^3 + 1*2^2 + 0*2^1 + 0*2^0
                                = 108

        finally, we convert decimal value to octal value.

        here, decimal number is 108
        Step 1. 108/8 , Remainder = 4, Quotient = 13
        Step 2. 13/8 , Remainder = 5, Quotient = 1
        Step 3. 1/8 , Remainder = 1, Quotient = 0

        Now, the octal equivalent of 108 is the remainders in reverse order : 154

    */



    /*
        how to convert binary to octal number in theory?
        Convert binary 1101100 to octal:

        Convert every 3 binary bits (from bit 0) to octal digit:

        1101100 = 1 101 100

        Suppose input binary number is 1 101 100 and convert every 3 binary bits to decimal number seperately
        step 1 : decimal number = 1*2^2 + 0*2^1 + 0*2^0 = 4+0+0 = 4
        step 2 : decimal number = 1*2^2 + 0*2^1 + 1*2^0 = 4+0+1 = 5
        step 3 : decimal number = 1*2^0 = 1

        Now, the octal equivalent of 1 101 100 is the remainders in reverse order : 154


        special note: why convert every 3 binary bits (from bit 0) to octal digit. cause octal base = 8 which is 2^3
    */
}
