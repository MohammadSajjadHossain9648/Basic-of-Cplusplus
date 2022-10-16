#include<iostream>
using namespace std;

/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
                  https://www.programiz.com/cpp-programming/recursion
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
    int num;
    cout<<"enter a positive number: ";
    cin>>num;

    if(num < 0)
    {
        cout<<"Must be input a positive integer."<<endl;
        return 0;
    }

    cout<<endl<<"Factorial of number "<<num<<" : "<<factorial(num)<<endl<<endl;

    //output:
    //    enter a positive number: 5
    //
    //    Factorial of number 5 : 120


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
