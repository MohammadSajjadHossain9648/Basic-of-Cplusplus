#include<iostream>
#include<math.h>
using namespace std;

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

    cout<<"**** binary to octal conversion ****"<<endl<<endl;

    long long int num;
    cout<<"enter a binary number: ";
    cin>>num;

    unsigned long long int i=0, k=0, answer=0,new_num=0;

    while(num)
    {
        //octal base = 8 which is 2^3 so convert every 3 binary bits (from bit 0)
        for(int j=1; j<=3; j++)
        {
            int last_digit=num%decimal_base;
            new_num+=last_digit*pow(2,i);
            num/=decimal_base;
            i++;
        }
        answer+=new_num*pow(10,k);
        k++;
        i=0;
        new_num=0;
    }

    cout<<"octal number is "<<answer<<endl<<endl;


    //    output:
    //    **** binary to octal conversion ****
    //
    //    enter a binary number: 1101100
    //    octal number is 154
    //
    //    enter a binary number: 1111111111111111
    //    octal number is 177777


    /*
        how it works?
        Convert binary 1101100 to octal:

        Convert every 3 binary bits (from bit 0) to octal digit:

        1101100 = 1 101 100

        Suppose input binary number is 1 101 100 and convert every 3 binary bits to decimal number seperately
        step 1 : decimal number = 1*2^2 + 0*2^1 + 0*2^0 = 4+0+0 = 4
        step 2 : decimal number = 1*2^2 + 0*2^1 + 1*2^0 = 4+0+1 = 5
        step 3 : decimal number = 1*2^0 = 1 = 1

        Now, the octal equivalent of 1 101 100 is the remainders in reverse order : 154


        special note: why convert every 3 binary bits (from bit 0) to octal digit. cause octal base = 8 which is 2^3
    */
}
