#include<iostream>
#include<math.h>
#include<string.h>
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
    */

    cout<<"**** hexadecimal to decimal conversion ****"<<endl<<endl;

    string hex_num;
    cout<<"enter a hexadecimal number: ";
    cin>>hex_num;

    //now remove the first character if hex_num has a negative sign into it
    bool flag = false;
    if(hex_num[0] == '-')
    {
        hex_num.erase(0, 1);
        flag=true;
    }

    //check every single digit which is 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F. otherwise give error and then exit.
    //reason behind: hex number system is base 16 number system and uses 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F.
    for(int i=0; i<hex_num.length(); i++)
    {
        if( !(hex_num[i]>='0' && hex_num[i]<='9') && !(hex_num[i]>='A' && hex_num[i]<='F'))
        {
            cout<<endl<<"invalid input"<<endl<<endl;
            return 0;
        }
    }


    //convert hexadecimal to decimal
    char hexadecimal[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    long long int j=hex_num.length()-1, k=0, decimal_num=0;

    while(hex_num[j])
    {
        for(int i=0; i<16; i++)
        {
            if(hex_num[j] == hexadecimal[i])
            {
                decimal_num += i*pow(hexadecimal_base,k);
            }
        }
        j--;
        k++;
    }

    // if hexadecimal is negative, just make the decimal value negative
    if(flag)
    {
        decimal_num *= -1;
    }

    cout<<"decimal number is "<<decimal_num<<endl<<endl;


    //output:
    //    **** hexadecimal to decimal conversion ****
    //
    //    enter a hexadecimal number: 12A
    //    decimal number is 298
    //    enter a hexadecimal number: -12A
    //    decimal number is -298


    /*
        in our code,
        step 1: remove the first character if hex_num has a negative sign into it
        step 2: check every single digit which is 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F. otherwise give error and then exit.
                reason behind: hex number system is base 16 number system and uses 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F.
        step 3: convert hexadecimal to decimal
             call char hexadecimal[16] which store all hexa digit and we compare with input hexa number
             to store the index digit into decimal number. like A=10

            let hex_num = 1 2 A
            decimal num = 1*16^2 + 2*16^1 + 10*16^0 =  298
        step 4: if hexadecimal is negative, just make the decimal value negative
    */


    /*
       how to convert hexadecimal to decimal number in theory?
       Convert hexadecimal 12A to decimal:

       Convert every single hexadecimal bits (from bit 0) to decimal:

       12A = 1 2 A

       decimal num = 1*16^2 + 2*16^1 + 10*16^0 =  298

       Now, the decimal equivalent of 12A is : 298

    */
}
