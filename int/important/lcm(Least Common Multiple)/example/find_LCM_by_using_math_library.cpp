#include<iostream>
#include<numeric>
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
    For using this function , we have to declare a header file <numeric>.

    Syntax:

    std::lcm (m, n)
    Arguments: m, n
    Returns: 0, if either of m or n are 0
                else, returns lcm of mod(m) and mod(n)
*/

int main()
{
    int a, b;
    cout<<"enter two integers: \n";
    cin>>a;
    cin>>b;

    cout<<"\n\nlcm( "<<a<<", "<<b<<" ) : "<<lcm(a, b); //Syntax for C++14 and Library: 'numeric'


    //output:
    //    enter two integers:
    //    105
    //    30
    //
    //    lcm( 105, 30 ) : 210

}
