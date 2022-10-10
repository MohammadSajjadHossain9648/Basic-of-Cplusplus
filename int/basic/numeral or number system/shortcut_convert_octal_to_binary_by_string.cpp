#include <iostream>
using namespace std;

int main()
{
	/*
        to know more:
        https://www.techcrashcourse.com/2017/01/cpp-program-to-convert-decimal-to-octal-number.html
        https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b
        https://coderspacket.com/number-system-conversion
    */

    cout<<"**** hexadecimal to binary conversion ****"<<endl<<endl;

    string octal_num;
    cout<<"enter a hexadecimal number: ";
    cin>>octal_num;


    //check every single digit which is 0,1,2,3,4,5,6,7. otherwise give error and then exit.
    //reason behind: octal number system is base 8 number system and uses 0,1,2,3,4,5,6,7.
    for(int i=0; i<octal_num.length(); i++)
    {
        if( !(octal_num[i]>='0' && octal_num[i]<='7'))
        {
            cout<<"invalid input"<<endl<<endl;
            return 0;
        }
    }


    //convert hexadecimal to binary
    long long int i=0;
    string binary_num;

    while(i<octal_num.length()) // or use while(octal_num[i])
    {
        switch(octal_num[i])
        {
        case '0':
            binary_num +="0000"; //ptint directly like cout<<"0000";
            break;
        case '1':
            binary_num +="0001";
            break;
        case '2':
            binary_num +="0010";
            break;
        case '3':
            binary_num +="0011";
            break;
        case '4':
            binary_num +="0100";
            break;
        case '5':
            binary_num +="0101";
            break;
        case '6':
            binary_num +="0110";
            break;
        case '7':
            binary_num +="0111";
            break;
        }
        i++;
    }

    cout<<"binary number is "<<binary_num<<endl<<endl;

    //output:
    //    **** hexadecimal to binary conversion ****
    //
    //    enter a hexadecimal number: 127
    //    binary number is 000100100111
}
