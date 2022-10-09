#include<iostream>
#include<math.h>
using namespace std;

int decimal_base = 10;
int hexadecimal_base = 16;

int main()
{
    /*
        to know more:
        https://www.techcrashcourse.com/2017/01/cpp-program-to-convert-decimal-to-octal-number.html
        https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b
        https://coderspacket.com/number-system-conversion
        https://www.geeksforgeeks.org/convert-decimal-to-hexa-decimal-including-negative-numbers/
    */

    cout<<"**** decimal to hexadecimal conversion ****"<<endl<<endl;

    long long int decimal_num;
    cout<<"enter a decimal number: ";
    cin>>decimal_num;

    //first check the number is positive or negative
    int flag=false;
    if(decimal_num < 0)
    {
        decimal_num *= -1;
        flag=true;
    }

    long long int i=0, hexadecimal_num[100];

    while(decimal_num)
    {
        hexadecimal_num[i] = decimal_num % hexadecimal_base;
        decimal_num /= hexadecimal_base;
        i++;
    }


    if(!flag) //not true so it is positive hoxadecimal value
    {
        cout<<"hexadecimal number is ";
    }
    else //true so it is negative hoxadecimal value
    {
        cout<<"hexadecimal number is -";
    }


    for(int j=i-1; j>=0; j--)
    {
        if(hexadecimal_num[j] > 9)
        {
            cout<<(char)(hexadecimal_num[j]+55);
        }
        else
        {
            cout<<hexadecimal_num[j];
        }
    }
    cout<<endl;

    //output:
    //    **** decimal to hexadecimal conversion ****
    //
    //    enter a decimal number: 158
    //    hexadecimal number is 9E
    //    enter a decimal number: -158
    //    hexadecimal number is -9E




    /*
        how to convert decimal to hexadecimal number in theory?

        Suppose input decimal number is 158
        Step 1. 158/16 , Remainder = 14, Quotient = 9
        Step 2. 9/16 , Remainder = 9, Quotient = 0

        Now, the hexadecimal equivalent of 158 is the remainders in reverse order : 9 14

        after that just update the value into hexadecimal format like hexadecimal_num = 9E (14 -> change to E)

        Suppose input decimal number is -1000
        Step 1. -1000/8 , Remainder = 0, Quotient = -125
        Step 2. -125/8 , Remainder = 5, Quotient = -15
        Step 3. -15/8 , Remainder = 7, Quotient = -1
        Step 2. -1/8 , Remainder = -1, Quotient = 0

        Now, the hexadecimal equivalent of -1000 is the remainders in reverse order : -1750
    */


}
