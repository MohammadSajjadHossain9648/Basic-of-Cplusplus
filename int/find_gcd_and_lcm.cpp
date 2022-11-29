#include<iostream>
#include<iomanip>
using namespace std;
/*
    to know more: https://www.sanfoundry.com/cpp-program-find-gcd-lcm-n-numbers/
*/
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;

    int minValue = (a < b) ? a : b;

    while(1)
    {
        if(a%minValue == 0 && b%minValue == 0)
        {
            break;
        }
        minValue--;
    }

    return minValue;
}

int lcm(int a, int b)
{
    if(a<=0 || b<=0)
    {
        return 0;
    }

    int maxValue = (a > b) ? a : b;

    while(1)
    {
        if(maxValue%a == 0 && maxValue%b == 0)
        {
            break;
        }
        maxValue++;
    }

    return maxValue;
}

int main()
{
    int a, b;
    cout<<"enter two integers: \n";
    cin>>a;
    cin>>b;

    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b);

    cout<<"\n\nGCD( "<<a<<", "<<b<<" ) : "<<gcdResult;
    cout<<"\n\nLCM( "<<a<<", "<<b<<" ) : "<<lcmResult;

    //output:
    //    enter two integers:
    //    105
    //    30
    //
    //
    //    GCD( 105, 30 ) : 15
    //
    //    LCM( 105, 30 ) : 210

    /* for gcd
    Time Complexity : O(min(a,b))
    Auxiliary Space: O(1) or constant
    */
    /* for lcm
    Time Complexity : O(max(a,b))
    Auxiliary Space: O(1) or constant
    */
}
