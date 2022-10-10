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

    cout<<"**** octal to decimal conversion ****"<<endl<<endl;

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

    cout<<"decimal number is "<<decimal_num<<endl<<endl;


    //output:
    //    **** octal to decimal conversion ****
    //
    //    enter an octal number: 123
    //    decimal number is 83
    //    enter an octal number: -123
    //    decimal number is -83



    /*
    step 1: check the octal number is positive or negative.
    if negative, just remove the negative sign and set a flag. cause next step 2 is stopped all time.

    step 2: check every single digit which is greater than 7 or less than 0. if get any digit then exit.
    reason behind: octal number system is base 8 number system and uses 0 and 7. if we get 128 as input, it is an error.

    step 3: convert octal number (123) to decimal
            decimal number = 1*8^2 + 2*8^1 + 3*8^0 = 64+16+3 = 83

    step 4: now check is the octal number positive or negative. if negative just multiply into -1.
    */



    /*
       how to convert octal to decimal number in theory?
       Convert octal 123 to decimal:
       decimal number = 1*8^2 + 2*8^1 + 3*8^0 = 64+16+3 = 83
    */
}
