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
    int fact = 1;

    for(int i=1; i<n; i++) //iteration not start with 0
    {
        fact = fact*i;
        sum = sum + (pow(x,i)/fact);
    }
    sum = sum+1; //Since series starts with 1

    return sum;

    /*another way is
    float sum = 1.0f; // initialize sum of series

    for (int i = n - 1; i > 0; --i )
        sum = 1 + x * sum / i;

    return sum;
    */
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
    Time Complexity: O(n)
    Auxiliary Space: O(1), since no extra space has been taken.
    */
}
