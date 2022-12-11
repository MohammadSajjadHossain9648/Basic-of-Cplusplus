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
    Instead of Euclidean algorithm by subtraction, a better approach is present. We don’t perform subtraction here.
    we continuously divide the bigger number by the smaller number. More can be learned about this efficient solution
    by using modulo operator in Euclidean algorithm.
*/
int gcd(int a, int b)
{
    //cout<<"\na = "<<a<<" , b = "<<b;
    if( b == 0 )
    {
        return a;
    }

    //cout<<"\ngcd(b, a%b): gcd("<<b<<", "<<a%b<<")\n";
    return gcd(b, a%b); // divide to a by b to make smaller number

    /*above code can write in one line
    return b == 0 ? (a) : ( gcd(b, a%b) );
    */


    /* same as above
    if( a == 0 )
    {
        return b;
    }

    return gcd(b%a, a);
    */
    /*above code can write in one line
    return a == 0 ? (b) : ( gcd(b%a, a) );
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
    Time Complexity: O(log(min(a,b))
    Auxiliary Space: O(log(min(a,b))
    */

    /*how it works in code?
    a = 105 , b = 30
    gcd(b, a%b): gcd(30, 15)

    a = 30 , b = 15
    gcd(b, a%b): gcd(15, 0)

    a = 15 , b = 0
    */
}
