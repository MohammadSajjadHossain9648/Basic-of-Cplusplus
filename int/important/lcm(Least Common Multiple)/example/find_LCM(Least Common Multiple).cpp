#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/program-to-find-lcm-of-two-numbers/
                  https://www.geeksforgeeks.org/stdlcm-in-cpp17/
                  https://www.scaler.com/topics/lcm-of-two-numbers-in-cpp/
                  https://www.javatpoint.com/lcm-of-two-numbers-in-cpp
                  https://www.tutorialspoint.com/cplusplus-program-to-find-lcm
                  http://www.trytoprogram.com/cpp-examples/cplusplus-program-to-find-lcm/
                  https://www.studytonight.com/cpp-programs/cpp-program-to-find-gcd-and-lcm
                  https://www.calculatorsoup.com/calculators/math/lcm.php
                  https://www.geeksforgeeks.org/lcm-of-given-array-elements/
                  https://www.geeksforgeeks.org/finding-lcm-two-array-numbers-without-using-gcd/
*/
int lcm(int a, int b)
{
    cout<<"\na = "<<a<<" , b = "<<b;
    if (a <= 0 || b <= 0)
        return 0;
    /*Everything divides 0 and same as above
        if(a == 0)
        {
            return b;
        }
        if(b == 0)
        {
            return a;
        }
    */

    int res = 1;

    for(int i=2; i<=max(a,b); )
    {
        cout<<"\n\niteration = "<<i-1<<"\nvalue of divisor = "<<i;

        if( a%i==0 || b%i==0 || ( a%i==0 && b%i==0 ) )
        {
            res *= i;
            if( a%i==0 && b%i==0 )
            {
                a /= i;
                b /= i;
            }
            else if( a%i==0 )
            {
                a /= i;
            }
            else if( b%i==0 )
            {
                b /= i;
            }
        }
        else
        {
             i++;
        }
        cout<<"\na = "<<a<<" , b = "<<b<<"\nlcm = "<<lcm;
    }


    return res;

    /* another simple approach
    if( a<=0 || b<=0)
    {
        return 0;
    }

    int maxValue = max(a, b); // int maxValue = (a > b) ? a : b;
    while(1)
    {
        if(maxValue % a == 0 && maxValue % b == 0) {
            break;
        }
        maxValue++;
    }
    return maxValue; // return lcm of a and b
    */
}
int main()
{
    int a, b;
    cout<<"enter two integers: \n";
    cin>>a;
    cin>>b;

    int result = lcm(a, b);
    cout<<"\n\nlcm( "<<a<<", "<<b<<" ) : "<<result;


    //output:
    //    enter two integers:
    //    105
    //    30
    //
    //    lcm( 105, 30 ) : 15


    /*
    Time Complexity : O(max(a,b))
    Auxiliary Space: O(1) or constant
    */

    /* how it works in code?
    a = 105 , b = 30

    iteration = 1
    value of divisor = 2

    iteration = 2
    value of divisor = 3
    result = 3
    after divide, a = 35 , b = 10

    iteration = 2
    value of divisor = 3

    iteration = 3
    value of divisor = 4

    iteration = 4
    value of divisor = 5
    result = 15
    after divide, a = 7 , b = 2
    */
}
