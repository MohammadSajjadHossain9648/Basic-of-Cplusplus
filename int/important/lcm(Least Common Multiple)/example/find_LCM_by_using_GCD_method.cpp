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
/*
    LCM(a, b) = (a * b)/GCD(a, b);

    The steps to calculate the LCM of (a, b) using the GCD method is:
    Step 1: Find the product of a and b.
    Step 2: Find the Greatest Common Divisor (GCD) of a and b.
    Step 3: Divide the values obtained in Step 1 and Step 2.
    Step 4: The obtained value after division is the greatest common divisor of (a, b).

    how count GCD in mathmatically?
    Example: Find the GCF (18, 27):
    The prime factorization of 18 is 2 x 3 x 3 = 18.
    The prime factorization of 27 is 3 x 3 x 3 = 27.

    The occurrences of common prime factors of 18 and 27 are 3 and 3.
    So the greatest common factor of 18 and 27 is 3 x 3 = 9.

    Example: Find the GCF (20, 50, 120):
    The prime factorization of 20 is 2 x 2 x 5 = 20.
    The prime factorization of 50 is 2 x 5 x 5 = 50.
    The prime factorization of 120 is 2 x 2 x 2 x 3 x 5 = 120.

    The occurrences of common prime factors of 20, 50 and 120 are 2 and 5.
    So the greatest common factor of 20, 50 and 120 is 2 x 5 = 10.


    Example: Find the greatest common divisor of 15 and 70 using the GCD method.
    Solution: The Least Common Multiple of 15 and 70 can be calculated as:

    The product of 10000 and 228 is given as, 10000 * 228 = 2280000
    The GCD of (10000, 228) is 4.
    LCM(10000, 228) = product of (10000, 228)/ GCD of (10000, 228) = 570000.

    ∴ The greatest common divisor of (10000, 228) is 4.
*/
int GCD(int a, int b)
{
    //cout<<"\na = "<<a<<" , b = "<<b;
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

}
int LCM(int a, int b)
{
    int product = a*b;
    int gcd = GCD(a,b);
    int lcm = product/gcd;
    return lcm;
}
int main()
{
    int a, b;
    cout<<"enter two integers: \n";
    cin>>a;
    cin>>b;

    int result = LCM(a, b);
    cout<<"\n\nlcm( "<<a<<", "<<b<<" ) : "<<result;


    //output:
    //    enter two integers:
    //    105
    //    30
    //
    //    lcm( 105, 30 ) : 15


    /*how it works in code?
    a = 105 , b = 30
    gcd(b, a%b): gcd(30, 15)

    a = 30 , b = 15
    gcd(b, a%b): gcd(15, 0)

    a = 15 , b = 0

    lcm = 105*30/gcd(105,30) = 105*30/15 = 210
    */
}
