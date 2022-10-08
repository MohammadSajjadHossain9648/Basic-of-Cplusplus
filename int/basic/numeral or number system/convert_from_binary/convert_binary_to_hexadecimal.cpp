#include<iostream>
#include<math.h>
using namespace std;

int binary_base = 2;
int decimal_base = 10;
int hexadecimal_base = 16;

int main()
{
    /*
        to know more:
        https://www.techcrashcourse.com/2017/01/cpp-program-to-convert-binary-to-decimal.html
        https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b
        https://coderspacket.com/number-system-conversion
        https://www.geeksforgeeks.org/program-binary-decimal-conversion/
    */

    cout<<"**** binary to hexadecimal conversion ****"<<endl<<endl;

    long long int binary_num;
    cout<<"enter a binary number: ";
    cin>>binary_num;

    long long int i=0, decimal_num=0, j=0, hexadecimal_num[100];

    while(binary_num)
    {
        int last_digit = binary_num % decimal_base;
        decimal_num += last_digit * pow(binary_base,i);
        binary_num /= decimal_base;
        i++;
    }

    while(decimal_num)
    {
        hexadecimal_num[j] = decimal_num % hexadecimal_base;
        decimal_num /= hexadecimal_base;
        j++;
    }

    cout<<"hexadecimal number is ";
    for(int k=j-1; k>=0; k--)
    {
        if(hexadecimal_num[k] > 9)
        {
            cout<<(char)(hexadecimal_num[k]+55);
        }
        else
        {
            cout<<hexadecimal_num[k];
        }
    }
    cout<<endl;

    //    output:
    //    **** binary to hexadecimal conversion ****
    //
    //    enter a binary number: 10011110
    //    hexadecimal number is 9E
    //
    //    enter a binary number: 111100010111011
    //    hexadecimal number is 78BB



    /*
        in our code, we first convert the binary to decimal value.
        Convert binary 10011110 to decimal:

        input binary number is 10011110
        step 1 : decimal number = 1*2^7 + 0*2^6 + 0*2^5 + 1*2^4 + 1*2^3 + 1*2^2 + 1*2^1 + 0*2^0
                                = 158

        finally, we convert decimal value to hexadecimal value.

        here, decimal number is 158
        Step 1. 158/16 , Remainder = 14, Quotient = 9
        Step 2. 9/16 , Remainder = 9, Quotient = 0

        Now, the hexadecimal equivalent of 158 is the remainders in reverse order : 9 14

        after that just update the value into hexadecimal format like hexadecimal_num = 9E (14 -> change to E)
    */



    /*
        how to convert binary to hexadecimal number in theory?
        Convert binary 10011110 to hexadecimal:

        Convert every 4 binary bits (from bit 0) to hexadecimal digit:

        10011110 = 1001 1110

        Suppose input binary number is 1001 1110 and convert every 4 binary bits to decimal number seperately
        step 1 : decimal number = 1*2^3 + 1*2^2 + 1*2^1 + 0*2^0 = 8+4+2+0 = 14 -> E (in hexadecimal)
        step 2 : decimal number = 1*2^3 + 0*2^2 + 0*2^1 + 1*2^0 = 8+0+0+1 = 9 -> 9 (in hexadecimal)


        Now, the hexadecimal equivalent of 1001 1110 is the remainders in reverse order : 9E


        special note: why convert every 4 binary bits (from bit 0) to hexadecimal digit. cause hexadecimal base = 16 which is 2^4
    */
}
