#include<iostream>
#include<math.h>
using namespace std;

int decimal_base = 10;
int binary_base = 2;

int main()
{
    int decimal_num;
    cout<<"enter decimal number: ";
    cin>>decimal_num;

    //convert decimal to binary
    long long int i=0, binary_num = 0;
    while(decimal_num){
        int last_digit = decimal_num % binary_base;
        binary_num += last_digit * pow(decimal_base, i);
        decimal_num /= binary_base;
        i++;
    }

    // complement of decimal number

    if(binary_num == 0){
        cout<<"complement of decimal number is "<<1<<endl;
        return 0;
    }

    int j=0;
    while(binary_num){
        int last_digit = binary_num % decimal_base;
        int xor_bit = last_digit^1;
        decimal_num += xor_bit * pow(binary_base, j);
        binary_num /= decimal_base;
        j++;
    }
    //as same as
    //    while(binary_num){
    //            int last_digit = binary_num % decimal_base;
    //            last_digit ^= 1;
    //            decimal_num += last_digit * pow(binary_base, j);
    //            binary_num /= decimal_base;
    //            j++;
    //        }

    cout<<"complement of decimal number is "<<decimal_num<<endl;

    //output:
    //    enter decimal number: 10
    //    complement of decimal number is 5



    /*
        how it works?
        step 1: convert decimal to binary. like an example, decimal 10 to 1010 binary.
        Suppose input decimal number is 13
        Step 1. 10/2 , Remainder = 0, Quotient = 5
        Step 2. 5/2 , Remainder = 1, Quotient = 2
        Step 3. 2/2 , Remainder = 0, Quotient = 1
        Step 4. 1/2 , Remainder = 1, Quotient = 0

        Now, the binary equivalent of 10 is the remainders in reverse order : 1010

        step 2: now xor the binary number by 1 and convert it to decimal
            binary number is 1010
            last_digit = 0, xor_bit = 0^1 = 1, decimal_num = 0 + 1*(2, 0) = 1
            last_digit = 1, xor_bit = 1^1 = 0, decimal_num = 1 + 0*(2, 1) = 1
            last_digit = 0, xor_bit = 0^1 = 1, decimal_num = 1 + 1*(2, 2) = 5
            last_digit = 1, xor_bit = 1^1 = 0, decimal_num = 5 + 0*(2, 3) = 5

            now decimal number is 5.
    */
}
