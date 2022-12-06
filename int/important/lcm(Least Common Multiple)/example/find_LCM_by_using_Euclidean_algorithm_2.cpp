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
    Instead of Euclidean algorithm by subtraction, a better approach is present. We don’t perform subtraction here.
    we continuously divide the bigger number by the smaller number. More can be learned about this efficient solution
    by using modulo operator in Euclidean algorithm.

    no solution for least common multiple(LCM) by using use Euclidean algorithm. here, the step:
    Step 1: If a = b, stop -- the GCD of a and a is, of course, a. Otherwise, go to step 2.
    Step 2: If a > b, replace a with (a % b), and go back to step 1.
    Step 3: If b > a, replace b with (b % a), and go back to step 1.
    Step 4: After getting GCD value, Find the product of a and b.
    step 5: Divide the values obtained in Step 1 and Step 4 -> LCM(a, b) = (a * b)/GCD(a, b)
*/
int GCD(int a, int b)
{
    //cout<<"\na = "<<a<<" , b = "<<b;
    if( b == 0 )
    {
        return a;
    }

    //cout<<"\ngcd(b, a%b): gcd("<<b<<", "<<a%b<<")\n";
    return GCD(b, a%b); // divide to a by b to make smaller number

    /*above code can write in one line
    return b == 0 ? (a) : ( gcd(b, a%b) );
    */

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

    /*
    Time Complexity: O(log(min(a,b))  ->min(a,b) cause we use gcd in lcm
    Auxiliary Space: O(log(min(a,b))
    */

    /*how it works in code?
    a = 105 , b = 30
    gcd(b, a%b): gcd(30, 15)

    a = 30 , b = 15
    gcd(b, a%b): gcd(15, 0)

    a = 15 , b = 0

    lcm = 105*30/gcd(105,30) = 105*30/15 = 210
    */
}
