#include<iostream>
#include<bits/stdc++.h>
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
int static dp[1001][1001];

// Function to return gcd of a and b
int gcd(int a, int b)
{
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
    if (a == b)
        return a;

    // if a value is already present in dp
    if(dp[a][b] != -1)
        return dp[a][b];

    if (a > b)
        dp[a][b] = gcd(a-b, b);
    else
        dp[a][b] = gcd(a, b-a);

    // return dp
    return dp[a][b];
}

int main()
{
    int a, b;
    cout<<"enter two integers: \n";
    cin>>a;
    cin>>b;

    memset(dp, -1, sizeof(dp));
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
    Auxiliary Space: O(1)
    */
}
