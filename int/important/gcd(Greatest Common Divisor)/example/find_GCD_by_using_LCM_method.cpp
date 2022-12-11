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
/*
    gcd(a, b) = (a * b)/LCM(a, b);

    The steps to calculate the GCD of (a, b) using the LCM method is:
    Step 1: Find the product of a and b.
    Step 2: Find the least common multiple (LCM) of a and b.
    Step 3: Divide the values obtained in Step 1 and Step 2.
    Step 4: The obtained value after division is the greatest common divisor of (a, b).

    how to calculate LCM?
    Step 1: List the first few multiples of A and B.
    Step 2: Mark the common multiples from the multiples of both numbers.
    Step 3: Select the smallest common multiple. That lowest common multiple is the LCM of the two numbers.

    for example, LCM(12,30) we find:

    Prime factorization of 12 = 2 × 2 × 3
    Prime factorization of 30 = 2 × 3 × 5
    Using all prime numbers found as often as each occurs most often we take 2 × 2 × 3 × 5 = 60
    Therefore LCM(12,30) = 60.


    Example: Find the greatest common divisor of 10000 and 228 using the LCM method.
    Solution: The greatest common divisor of 10000 and 228 can be calculated as:

    The product of 10000 and 228 is given as, 10000 * 228 = 2280000
    The LCM of (10000, 228) is 570000.
    GCD(10000, 228) = product of (10000, 228)/ LCM of (10000, 228) = 4.

    ∴ The greatest common divisor of (10000, 228) is 4.
*/
int gcd(int a, int b)
{
    //cout<<"\na = "<<a<<" , b = "<<b;
    if (a == 0 || b == 0)
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

    int product = a*b;

    //find lcm
    int maxValue = max(a,b);
    while(1)
    {
        if( maxValue%a==0 && maxValue%b==0 )
        {
            break;
        }
        maxValue++;
    }

    cout<<"\nmaxvalue : "<<maxValue;

    int res = product/maxValue;
    //cout<<"\ngcd(a, b) = (a * b)/LCM(a, b): "<<res;
    return res;
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


    /* how it works in code?
    a = 105 , b = 30

    iteration = 1
    value of divisor = 2
    a = 105 , b = 15
    lcm = 2

    iteration = 1
    value of divisor = 2
    a = 105 , b = 15
    lcm = 2

    iteration = 2
    value of divisor = 3
    a = 35 , b = 5
    lcm = 6

    iteration = 2
    value of divisor = 3
    a = 35 , b = 5
    lcm = 6

    iteration = 3
    value of divisor = 4
    a = 35 , b = 5
    lcm = 6

    iteration = 4
    value of divisor = 5
    a = 7 , b = 1
    lcm = 30

    iteration = 4
    value of divisor = 5
    a = 7 , b = 1
    lcm = 30

    iteration = 5
    value of divisor = 6
    a = 7 , b = 1
    lcm = 30

    iteration = 6
    value of divisor = 7
    a = 1 , b = 1
    lcm = 210

    product = 3150
    lcm = 210
    gcd(a, b) = (a * b)/LCM(a, b): 15
    */
}
