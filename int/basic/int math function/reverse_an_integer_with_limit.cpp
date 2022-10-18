#include<iostream>
#include<limits>
using namespace std;

int main()
{
    /*
        to know more: https://www.geeksforgeeks.org/int_max-int_min-cc-applications/
                      https://cplusplus.com/reference/climits/
                      https://linuxhint.com/int_max-cpp/
                      https://www.geeksforgeeks.org/climits-limits-h-cc/
    */
    /*
        INT_MIN	Minimum value for an object of type int	-32767 (-2^15+1) or less*
        INT_MAX	Maximum value for an object of type int	32767 (2^15-1) or greater*
    */


    //print the limit
    cout<<"Value of INT_MAX is "<<INT_MAX<<endl; //Value of INT_MAX is 2147483647.
    cout<<"Value of INT_MIN is "<<INT_MIN<<endl<<endl; //Value of INT_MIN is -2147483648.



//another example
    /*
    Given a signed 32-bit integer x, return x with its digits reversed.
    If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
    */

    int num;
    cout<<"enter an integer: ";
    cin>>num;

    int answer=0;
    while(num)
    {
        if( (answer>INT_MAX/10) || (answer<INT_MIN/10) ) // cause we use (answer*10)
        {
            return 0;
        }
        int last_digit = num % 10;
        answer = (answer*10) + last_digit;
        num /= 10;
        cout<<answer<<endl;
    }

    cout<<"reverse integer is "<<answer<<endl<<endl;

    //output:
    //    Value of INT_MAX is 2147483647
    //    Value of INT_MIN is -2147483648
    //
    //    enter an integer: 2147483647
    //    7
    //    74
    //    746
    //    7463
    //    74638
    //    746384
    //    7463847
    //    74638474
    //    746384741

    //    reverse integer is 746384741 -> it will give garbage value, we write if(answer*10>INT_MAX ...) cause length of answer integer is 10 which is not less than 10

    //    enter an integer: 2147483640 / 214748364
    //    0
    //    4
    //    46
    //    463
    //    4638
    //    46384
    //    463847
    //    4638474
    //    46384741
    //    463847412
    //    reverse integer is 463847412



    /*
        how it works?
        we know, Value of INT_MAX is 2147483647 and Value of INT_MIN is -2147483648. we check this.
        step 1: Input integer length is less than 10 cause length of INT_MAX or INT_MIN is 10.
            If Input integer length is 10, it will depend on final result with step 2 and step 3.
        step 2: for positive, final result/ Input integer value is always less than INT_MAX which is 2147483647
        step 3: for negative, final result/ Input integer value is always greater than INT_MIN which is -2147483648

        hints: always try to input int which length is max 9 and
        final result never more than INT_MAX or less than INT_MIN.
    */

    /*
        what is INT_MAX & INT_MIN?
        Most of the time, in competitive programming, there is a need to assign the variable,the maximum or
        minimum value that data type can hold, but remembering such a large and precise number
        comes out to be a difficult job. Therefore, C++ has certain macros to represent these numbers,
        so that these can be directly assigned to the variable without actually typing the whole number.

        INT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit.
        INT_MIN specifies that an integer variable cannot store any value below this limit.
    */
}
