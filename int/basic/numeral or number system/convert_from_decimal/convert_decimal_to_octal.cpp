#include<iostream>
#include<math.h>
using namespace std;

int decimal_base = 10;
int octal_base = 8;

int main()
{
    /*
        to know more:
        https://www.techcrashcourse.com/2017/01/cpp-program-to-convert-decimal-to-octal-number.html
        https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b
        https://coderspacket.com/number-system-conversion
    */

    cout<<"**** decimal to octal conversion ****"<<endl<<endl;

    long long int decimal_num;
    cout<<"enter a decimal number: ";
    cin>>decimal_num;

    long long int i=0, octal_num=0;

    while(decimal_num)
    {
        int last_digit = decimal_num % octal_base;
        octal_num += last_digit * pow(decimal_base,i);
        decimal_num /= octal_base;
        i++;
    }

    cout<<"octal number is "<<octal_num<<endl<<endl;

    //output:
    //    **** decimal to octal conversion ****
    //
    //    enter a decimal number: 10
    //    octal number is 12
    //    enter a decimal number: -1000
    //    octal number is -1750



    /*
        how to convert decimal to octal number in theory?

        Suppose input decimal number is 10
        Step 1. 10/8 , Remainder = 2, Quotient = 1
        Step 2. 1/8 , Remainder = 1, Quotient = 0

        Now, the octal equivalent of 10 is the remainders in reverse order : 12


        Suppose input decimal number is -1000

        Step 1. -1000/8 , Remainder = 0, Quotient = -125
        Step 2. -125/8 , Remainder = 5, Quotient = -15
        Step 3. -15/8 , Remainder = 7, Quotient = -1
        Step 2. -1/8 , Remainder = -1, Quotient = 0

        Now, the octal equivalent of -1000 is the remainders in reverse order : -1750
    */
}
