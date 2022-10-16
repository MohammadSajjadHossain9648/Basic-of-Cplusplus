#include<iostream>
using namespace std;

/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
                  https://www.programiz.com/cpp-programming/recursion
*/
/*
    The total number of ways for selecting r elements out of n options are nCr = (n!) / (r! * (n-r)!)
*/

int factorial(int num)
{
    int answer = 1;
    if(num < 1)
    {
        answer *= 1;
    }
    else
    {
        answer = ( num * factorial(num-1) );  //call recursion
    }
    return answer;

    //can be write
    //    if(num < 1)
    //    {
    //        return 1;
    //    }
    //    else
    //    {
    //        return ( num * factorial(num-1) );  //call recursion
    //    }
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    int r;
    cout<<"enter r: ";
    cin>>r;

    if( (n < r) || (n < 0 ) || (r < 0 ) )
    {
        cout<<"please enter n \>\= r \>\= 0"<<endl;
        return 0;
    }

    int rn = n - r;

    int factorial_n = factorial(n);
    int factorial_r = factorial(r);
    int factorial_rn = factorial(rn);

    int answer = (factorial_n)/(factorial_r * factorial_rn);
    cout<<endl<<"Combinations Calculator (nCr) = (n!) / (r! * (n-r)!): "<<answer<<endl<<endl;

    //output:
    //    enter n: 5
    //    enter r: 2
    //
    //    Combinations Calculator (nCr) = (n!) / (r! * (n-r)!): 10


    /*
        how factorial number works?
        n! = n * (n-1) * (n-2) * (n-3) ... * 1

        More concretely, 5! (factorial of 5) would be:

        5! = 5 * 4 * 3 * 2 * 1 = 120

        in code,
        5 * factorial(4)
        5 * ( 4 * factorial(3) )
        5 * ( 4 * ( 3 * factorial(2) ) )
        5 * ( 4 * ( 3 * ( 2 * factorial(1) ) ) )
        5 * ( 4 * ( 3 * 2 * ( 1 * factorial(0) ) ) )
    */
}
