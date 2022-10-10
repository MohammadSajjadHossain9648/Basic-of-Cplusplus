#include<iostream>
#include<math.h>
using namespace std;

int decimal_base = 10;
int octal_base = 8;
int hexadecimal_base = 16;

int main()
{
    /*
        to know more:
        https://www.techcrashcourse.com/2017/01/cpp-program-to-convert-decimal-to-octal-number.html
        https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b
        https://coderspacket.com/number-system-conversion
    */

    cout<<"**** octal to hexadecimal conversion ****"<<endl<<endl;

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



    long long int i=0, decimal_num=0, j=0, hexadecimal_num[100];

    //convert octal to decimal
    while(octal_num)
    {
        int last_digit = octal_num % decimal_base;
        decimal_num += last_digit * pow(octal_base,i);
        octal_num /= decimal_base;
        i++;
    }

    //convert decimal to hexadecimal
    while(decimal_num){
        hexadecimal_num[j] = decimal_num % hexadecimal_base;
        decimal_num /= hexadecimal_base;
        j++;
    }

    //print the hexadecimal number
    if(!flag) //not true so it is positive hoxadecimal value
    {
        cout<<"hexadecimal number is ";
    }
    else //true so it is negative hoxadecimal value
    {
        cout<<"hexadecimal number is -";
    }

    for(int k=j-1; k>=0; k--){
        if(hexadecimal_num[k] > 9){
            cout<<(char)(hexadecimal_num[k]+55);
        }
        else{
            cout<<hexadecimal_num[k];
        }
    }

    cout<<endl;



    //output:
    //    **** octal to hexadecimal conversion ****
    //
    //    enter an octal number: 452
    //    hexadecimal number is 12A
    //    enter an octal number: -452
    //    hexadecimal number is -12A


    /*
    step 1: check the octal number is positive or negative.
    if negative, just remove the negative sign and set a flag. cause next step 2 is stopped all time.

    step 2: check every single digit which is greater than 7 or less than 0. if get any digit then exit.
    reason behind: octal number system is base 8 number system and uses 0 and 7. if we get 128 as input, it is an error.

    step 3: convert octal number (452) to decimal
            decimal number = 4*8^2 + 5*8^1 + 2*8^0 = 256+40+2 = 298

    step 4: now convert decimal number into hexadecimal

        Suppose input decimal number is 298
        Step 1. 298/16 , Remainder = 10, Quotient = 18
        Step 2. 18/16 , Remainder = 2, Quotient = 1
        Step 3. 1/16 , Remainder = 1, Quotient = 0

        Now, the hexadecimal equivalent of 158 is the remainders in reverse order : 1 2 10

    step 5: now check is the octal number positive or negative. if negative just multiply into -1.

    step 6: after that just update the value into hexadecimal format like hexadecimal_num = 12A (10 -> change to A)

    */



    /*
       how to convert octal to hexadecimal number in theory?
       Convert octal 452 to hex:

        Convert every octal digit to 3 binary digits:

        452 = 100 101 010 = 100101010

        Then convert every 4 binary digits to 1 hex digit:

        100101010 = 1 0010 1010 = 1 2 A = 12A
    */
}
