#include<iostream>
#include<math.h>
using namespace std;

int binary_base = 2;
int decimal_base = 10;

int main()
{
    /*
        to know more:
        https://www.techcrashcourse.com/2017/01/cpp-program-to-convert-binary-to-decimal.html
        https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b
        https://coderspacket.com/number-system-conversion
        https://www.geeksforgeeks.org/program-decimal-binary-conversion/
        https://www.geeksforgeeks.org/add-1-to-a-given-number/
    */

    cout<<"**** decimal to binary conversion ****"<<endl<<endl;

    long long int decimal_num;
    cout<<"enter a decimal number: ";
    cin>>decimal_num;

    long long int i=0, binary_num=0;

    //here only show max 16 bit of binary result for negative decimal number cause we know int is 32 bit
    //otherwise it show garbage
    if(decimal_num < 0)
    {
        decimal_num += pow(binary_base,16);
    }

    while(decimal_num)
    {
        int last_digit = decimal_num % binary_base;
        binary_num += last_digit * pow(decimal_base,i);
        decimal_num /= binary_base;
        i++;
    }

    cout<<"binary number is "<<binary_num<<endl<<endl;


    //    output:
    //    enter a decimal number: 13
    //    binary number is 1101
    //    enter a decimal number: -13
    //    binary number is 1111111111110011




    /*
        how to convert decimal to binary number in theory?

        Suppose input decimal number is 13
        Step 1. 13/2 , Remainder = 1, Quotient = 6
        Step 2. 6/2 , Remainder = 0, Quotient = 3
        Step 3. 3/2 , Remainder = 1, Quotient = 1
        Step 4. 1/2 , Remainder = 1, Quotient = 0

        Now, the binary equivalent of 13 is the remainders in reverse order : 1011
    */
}
