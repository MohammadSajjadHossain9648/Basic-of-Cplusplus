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
    An efficient solution is to use Euclidean algorithm which is the main algorithm used for this purpose.
    The idea is, GCD of two numbers doesn’t change if a smaller number is subtracted from a bigger number.

    no solution for least common multiple(LCM) by using use Euclidean algorithm. here, the step:
    Step 1: If a = b, stop -- the GCD of a and a is, of course, a. Otherwise, go to step 2.
    Step 2: If a > b, replace a with (a - b), and go back to step 1.
    Step 3: If b > a, replace b with (b - a), and go back to step 1.
    Step 4: After getting GCD value, Find the product of a and b.
    step 5: Divide the values obtained in Step 1 and Step 4 -> LCM(a, b) = (a * b)/GCD(a, b)
*/
int GCD(int a, int b)
{
    //cout<<"\n\na = "<<a<<" , b = "<<b;

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

    // base case
    if(a == b)
    {
        return a;
    }
    else if(a > b)
    {
        //cout<<"\n"<<a<<" > "<<b;
        //cout<<"\na = a-b = "<<a-b<<" , b = "<<b;
        return GCD(a-b, b);
    }
    else
    {
        //cout<<"\n"<<a<<" < "<<b;
        //cout<<"\na = "<<a<<" , b = b-a = "<<b-a;
        return GCD(a, b-a);
    }
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
    Time Complexity: O(min(a,b)) ->min(a,b) cause we use gcd in lcm
    Auxiliary Space: O(min(a,b))
    */

    /* how it works on code?
    a = 105 , b = 30
    105 > 30
    a = a-b = 75 , b = 30

    a = 75 , b = 30
    75 > 30
    a = a-b = 45 , b = 30

    a = 45 , b = 30
    45 > 30
    a = a-b = 15 , b = 30

    a = 15 , b = 30
    15 < 30
    a = 15 , b = b-a = 15

    a = 15 , b = 15

    lcm = 105*30/gcd(105,30) = 105*30/15 = 210
    */

}
