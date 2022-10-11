#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int binary_base = 2;
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

    cout<<"**** hexadecimal to binary conversion ****"<<endl<<endl;

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


    //convert decimal to binary
    if(decimal_num < 0)
    {
        decimal_num += pow(binary_base, 16);
    }

    long long int i=0, binary_num=0;
    while(decimal_num)
    {
        int last_digit = decimal_num%binary_base;
        binary_num += last_digit*pow(decimal_base,i);
        decimal_num /= binary_base;
        i++;
    }

    cout<<"binary number is "<<binary_num<<endl<<endl;


    //output:
    //    **** hexadecimal to binary conversion ****
    //
    //    enter a hexadecimal number: 12A
    //    binary number is 000100101010
    //    enter a hexadecimal number: -12A
    //    binary number is 1111111011010110


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
        step 5: convert decimal to binary
            decimal number is 298
            Step 1. 298/2 , Remainder = 0, Quotient = 149
            Step 2. 149/2 , Remainder = 1, Quotient = 74
            Step 3. 74/2 , Remainder = 0, Quotient = 37
            Step 4. 37/2 , Remainder = 1, Quotient = 18
            Step 5. 18/2 , Remainder = 0, Quotient = 9
            Step 6. 9/2 , Remainder = 1, Quotient = 4
            Step 7. 4/2 , Remainder = 0, Quotient = 2
            Step 8. 2/2 , Remainder = 0, Quotient = 1
            Step 9. 1/2 , Remainder = 1, Quotient = 0

            Now, the binary equivalent of 298 is the remainders in reverse order : 100101010
    */


    /*
       how to convert hexadecimal to binary number in theory?
       Convert hexadecimal 12A to binary:

       Convert every single hexadecimal bits (from bit 0) to binary 4 bits:

       12A = 1 2 A

       Suppose input hexadecimal number is 12A and convert every single hexadecimal bits (from bit 0) to binary 4 bits seperately
       step 1 : binary number of A (10)
           Step 1. 10/2 , Remainder = 0, Quotient = 5
           Step 2. 5/2 , Remainder = 1, Quotient = 2
           Step 2. 2/2 , Remainder = 0, Quotient = 1
           Step 2. 1/2 , Remainder = 1, Quotient = 0
           binary number of A (10) represent by 4 bits in reverse order is 1010.

       step 1 : binary number of 2
           Step 1. 2/2 , Remainder = 0, Quotient = 1
           Step 2. 1/2 , Remainder = 1, Quotient = 0
           binary number of 2 represent by 4 bits in reverse order is 0010.

       step 1 : binary number of 1
           Step 1. 1/2 , Remainder = 1, Quotient = 0
           binary number of 3 represent by 4 bits in reverse order is 0001.


       Now, the binary equivalent of 12A is the remainders in reverse order : 000100101010


       special note: why convert every single hexadecimal bits (from bit 0) to binary 4 bits.
       cause hexadecimal base = 16 which is 2^4. here 2 is binary base.
    */
}
