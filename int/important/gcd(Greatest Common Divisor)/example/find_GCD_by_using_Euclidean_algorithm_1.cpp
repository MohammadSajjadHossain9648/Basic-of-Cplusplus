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
    An efficient solution is to use Euclidean algorithm which is the main algorithm used for this purpose.
    The idea is, GCD of two numbers doesn’t change if a smaller number is subtracted from a bigger number.
*/
int gcd(int a, int b)
{
    //cout<<"\n\na = "<<a<<" , b = "<<b;

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

    // base case
    if(a == b)
    {
        return a;
    }
    else if(a > b)
    {
        //cout<<"\n"<<a<<" > "<<b;
        //cout<<"\na = a-b = "<<a-b<<" , b = "<<b;
        return gcd(a-b, b);
    }
    else
    {
        //cout<<"\n"<<a<<" < "<<b;
        //cout<<"\na = "<<a<<" , b = b-a = "<<b-a;
        return gcd(a, b-a);
    }

    /*same as above method easy way
        while(a != b)
        {
            if(a > b)
            {
                a = a-b;
            }
            else
            {
                b = b-a;
            }
        }
        return a; //return b;
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
    Time Complexity: O(min(a,b))
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
    */

}
