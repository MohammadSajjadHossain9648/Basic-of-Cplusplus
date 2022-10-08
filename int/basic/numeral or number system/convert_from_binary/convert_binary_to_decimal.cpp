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
        https://www.geeksforgeeks.org/program-binary-decimal-conversion/
    */

    cout<<"**** binary to decimal conversion ****"<<endl<<endl;

    long long int binary_num;
    cout<<"enter a binary number: ";
    cin>>binary_num;

    long long int i=0, decimal_num=0;

    while(binary_num)
    {
        int last_digit = binary_num % decimal_base;
        decimal_num += last_digit * pow(binary_base,i);
        binary_num /= decimal_base;
        i++;
    }

    cout<<"decimal number is "<<decimal_num<<endl<<endl;


    //    output:
    //    enter a binary number: 110
    //    decimal number is 6
    //    enter a binary number: 00001111
    //    decimal number is 15



    /*
        how to convert binary to decimal number in theory?
        Suppose input binary number is 110
        Decimal number = 1*2^2 + 1*2^1 + 0*2^0
                       = 4+2+0 = 6
        Now, the decimal equivalent of 11000111 is : 6
    */
}
