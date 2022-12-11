#include<iostream>
#include<algorithm>
#include<numeric>
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
    C++ has the built-in function for calculating GCD. This function is present in header file.
    Syntax for C++14 :

    Library: 'algorithm'
     __gcd(m, n)
    Parameter :  m, n
    Return Value :  0 if both m and n are zero,
    else gcd of m and n.
    Syntax for C++17 :


    Library: 'numeric'
        gcd(m, n)
    Parameter :  m, n
    Return Value :  0 if both m and n are zero,
    else gcd of m and n.
*/

int main()
{
    int a, b;
    cout<<"enter two integers: \n";
    cin>>a;
    cin>>b;

    cout<<"\n\ngcd( "<<a<<", "<<b<<" ) : "<<__gcd(a, b); //Syntax for C++14 and Library: 'algorithm'
    cout<<"\n\ngcd( "<<a<<", "<<b<<" ) : "<<gcd(a, b); //Syntax for C++17 and Library: 'numeric'


    //output:
    //    enter two integers:
    //    105
    //    30
    //
    //    gcd( 105, 30 ) : 15

}
