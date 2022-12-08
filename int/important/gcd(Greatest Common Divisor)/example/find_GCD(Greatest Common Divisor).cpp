#include<iostream>
using namespace std;
/*
    to know more: https://www.cuemath.com/numbers/greatest-common-divisor-gcd/
                  https://brilliant.org/wiki/greatest-common-divisor/
                  https://www.codingninjas.com/blog/2020/07/25/explained-euclids-gcd-algorithm/
                  https://www.geeksforgeeks.org/stdgcd-c-inbuilt-function-finding-gcd/
                  https://www.geeksforgeeks.org/program-to-find-gcd-or-hcf-of-two-numbers/a
                  https://www.programiz.com/cpp-programming/examples/hcf-gcd
                  https://www.javatpoint.com/cpp-program-to-find-the-gcd-of-two-numbers
                  https://www.tutorialspoint.com/cplusplus-program-to-find-gcd
                  https://www.sanfoundry.com/cpp-program-find-gcd-lcm-n-numbers/
                  https://www.geeksforgeeks.org/gcd-two-array-numbers/?ref=lbp
                  https://www.studytonight.com/cpp-programs/cpp-program-to-find-gcd-and-lcm
                  https://www.calculatorsoup.com/calculators/math/gcf.php
*/
int gcd(int a, int b)
{
    int res = 1;

    //cout<<"\na = "<<a<<" , b = "<<b;
    if (a == 0 || b == 0)
        return 0;

    for(int i=2; i<=min(a,b); )
    {
        //cout<<"\n\niteration = "<<i-1<<"\nvalue of divisor = "<<i;
        if( a%i==0 && b%i==0 )
        {
            res *= i;
            a /= i;
            b /= i;
            //cout<<"\nresult = "<<res<<"\nafter divide, a = "<<a<<" , b = "<<b;
        }
        else
        {
            i++;
        }
    }


    return res;

    /* another simple approach
    if( a<=0 || b<=0)
    {
        return 0;
    }

    int minValue = min(a, b); // int minValue = (a < b) ? a : b;
    while (1) //can write,while (minValue > 0)
    {
        if (a % minValue == 0 && b % minValue == 0)
        {
            break;
        }
        minValue--;
    }
    return minValue; // return gcd of a and b

    //can use instead of while loop or first for loop
    int result;
    for (int i=1; i<=min(a, b); i++) //same as -> for(i=1; i <= a && i <= b; ++i)
    {
        if (a % i == 0 && b % i ==0)
        {
            result = i;
        }
    }
    return result; // return gcd of a and b
    */
    /*another approach
    int r = 0, x, y;
    x = (a > b) ? a : b; // x is greater number
    y = (a < b) ? a : b; // y is smaller number

    r = y;
    while (x % y != 0)
    {
        r = x % b;
        x = y;
        y = r;
    }
    return r;
    */
}
int main()
{
    int a, b;
    cout<<"enter two integers: \n";
    cin>>a;
    cin>>b;

    int result = gcd(a, b);
    cout<<"\n\ngcd( "<<a<<", "<<b<<" ) : "<<result;


    //output:
    //    enter two integers:
    //    105
    //    30
    //
    //    gcd( 105, 30 ) : 15


    /*
    Time Complexity : O(min(a,b))
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
