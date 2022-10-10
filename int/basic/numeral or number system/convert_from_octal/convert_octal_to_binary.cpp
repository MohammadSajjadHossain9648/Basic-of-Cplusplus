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
        https://www.techcrashcourse.com/2017/01/cpp-program-to-convert-decimal-to-octal-number.html
        https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b
        https://coderspacket.com/number-system-conversion
        https://www.geeksforgeeks.org/program-to-convert-octal-number-to-binary-number/
    */

    cout<<"**** octal to binary conversion ****"<<endl<<endl;

    long long int octal_num;
    cout<<"enter an octal number: ";
    cin>>octal_num;

    //first check the number is positive or negative
    int flag=false;
    if(octal_num < 0)
    {
        octal_num *= -1;
        flag=true;
    }

    //check every single digit which is greater than 7 or less than 0. if get any digit then exit.
    //reason behind: octal number system is base 8 number system and uses 0 and 7
    long long int check_num = octal_num;
    while(check_num)
    {
        int remainder = check_num % 10;
        if(remainder > 7 || remainder < 0)
        {
            cout<<"invalid octal number cause Octal number system is base 8 number system and uses 0 and 7"<<endl;
            return 0;
        }
        check_num /= 10;
    }



    long long int i=0, decimal_num=0, j=0, binary_num=0;

    //convert octal to decimal
    while(octal_num)
    {
        int last_digit = octal_num % decimal_base;
        decimal_num += last_digit * pow(octal_base,i);
        octal_num /= decimal_base;
        i++;
    }

    // if octal is negative, make the decimal value as negative decimal number
    if(flag)
    {
        decimal_num *= -1;
    }


    //convert decimal to binary
    if(decimal_num < 0)
    {
        decimal_num += pow(binary_base, 16);
    }


    while(decimal_num)
    {
        int last_digit = decimal_num % binary_base;
        binary_num += last_digit * pow(decimal_base,j);
        decimal_num /= binary_base;
        j++;
    }

    cout<<"binary number is "<<binary_num<<endl<<endl;



    //output:
    //    **** octal to binary conversion ****
    //
    //    enter a octal number: 123
    //    binary number is 1010011
    //    enter a octal number: -123
    //    binary number is 1111111110101101



    /*
    step 1: check the octal number is positive or negative.
    if negative, just remove the negative sign and set a flag. cause next step 2 is stopped all time.

    step 2: check every single digit which is greater than 7 or less than 0. if get any digit then exit.
    reason behind: octal number system is base 8 number system and uses 0 and 7. if we get 128 as input, it is an error.

    step 3: convert octal number (123) to decimal
            decimal number = 1*8^2 + 2*8^1 + 3*8^0 = 64+16+3 = 83

    step 4: now check is the octal number positive or negative. if negative just multiply into -1.

    step 5: now convert decimal number into binary

        Suppose input decimal number is 83
        Step 1. 83/2 , Remainder = 1, Quotient = 41
        Step 2. 41/2 , Remainder = 1, Quotient = 20
        Step 3. 20/2 , Remainder = 0, Quotient = 10
        Step 4. 10/2 , Remainder = 0, Quotient = 5
        Step 5. 5/2 , Remainder = 1, Quotient = 2
        Step 6. 2/2 , Remainder = 0, Quotient = 1
        Step 7. 1/2 , Remainder = 1, Quotient = 0

        Now, the binary equivalent of 83 is the remainders in reverse order : 1010011
    */




    /*
       how to convert octal to binary number in theory?
       Convert octal 123 to binary:

       Convert every single octal bits (from bit 0) to binary 3 bits:

       123 = 1 2 3

       Suppose input octal number is 1 2 3 and convert every single octal bits (from bit 0) to binary 3 bits seperately
       step 1 : binary number of 3
           Step 1. 3/2 , Remainder = 1, Quotient = 1
           Step 2. 1/2 , Remainder = 1, Quotient = 0
           binary number of 3 represent by 3 bits in reverse order is 011.

       step 1 : binary number of 2
           Step 1. 2/2 , Remainder = 0, Quotient = 1
           Step 2. 1/2 , Remainder = 1, Quotient = 0
           binary number of 2 represent by 3 bits in reverse order is 010.

       step 1 : binary number of 1
           Step 1. 1/2 , Remainder = 1, Quotient = 0
           binary number of 3 represent by 3 bits in reverse order is 001.


       Now, the binary equivalent of 123 is the remainders in reverse order : 001010011


       special note: why convert every single octal bits (from bit 0) to binary 3 bits. cause octal base = 8 which is 2^3. here 2 is binary base.
    */
}
