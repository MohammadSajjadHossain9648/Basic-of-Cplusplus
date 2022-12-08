#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
    to know more: https://byjus.com/maths/taylor-series/
                  https://www.studysmarter.co.uk/explanations/math/calculus/taylor-series/
                  https://www.studytonight.com/c/programs/important-concepts/sum-of-taylor-series
                  https://www.geeksforgeeks.org/program-to-efficiently-calculate-ex/
                  https://www.geeksforgeeks.org/program-to-calculate-ex-by-recursion/
                  https://dotnettutorials.net/lesson/taylor-series-using-recursion-in-c/
*/
/*
    Below is a program on sum of taylor series.
    (n+1)th term of taylor series is given by (x^n)/n! , where series starts with 1.

    or can say that,
    The value of Exponential Function e^x can be expressed using following Taylor Series.
    e^x = 1 + x/1! + x^2/2! + x^3/3! + ......

    The series can be re-written as
    e^x = 1 + (x/1) (1 + (x/2) (1 + (x/3) (........) ) )
*/

float exponential(float x, int n)
{
    float sum = 0;
    static float fact = 1, power = 1;

    // Termination condition
    if (n == 0)
        return 1;

    // Recursive call
    sum = exponential(x, n - 1);

    // Update the power of x
    power = power * x;

    // Factorial
    fact = fact * n;

    return (sum+ power/fact);
}

int main()
{
    float x;
    cout<<"Enter the value of x in the series: ";
    cin>>x;
    int n;
    cout<<"Enter the number of term in the series: ";
    cin>>n;

    cout<<"e^x = "<<fixed<<setprecision(5)<<exponential(x, n);

    //output:
    //    Enter the value of x in the series: 4
    //    Enter the number of term in the series: 15
    //    e^x = 54.59788


    /*
    let, x = 4, n = 15
    Time Complexity:

    To find this we will determine the total multiplication performed.

    e^x = 1 + x/1! + x^2/2! + x^3/3! + …… + until n terms
        = 1 + x/1  + x*x/1*2 + x*x*x/1*2*3 + x*x*x*x/1*2*3*4 …… + until n terms

         0     0           2                  4                        8        Number of Multiplications in above terms

    So, for n terms total multiplication performed is comparable to sum of n natural numbers (as a parallel series
    of even numbers is formed).

    and we know sum of n natural numbers = n*(n+1)/2 whose order is n^2
    Hence, the time complexity if this approach is O(n^2)

    Auxiliary Space:
    The recursive call will take place n+1 times and hence n + 1 activation records will get created at max.
    That shows the space complexity is O(n).
    */
}
