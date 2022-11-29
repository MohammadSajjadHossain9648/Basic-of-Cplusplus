#include<iostream>
using namespace std;
/*
    to know more: https://leetcode.com/problems/count-primes/
*/
int isPrime(int num)
{
    for(int i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }

    return true;
}

void printPrimes(int num)
{
    if(num < 2)
    {
        cout<<"\nthere is no prime number.";
    }

    cout<<"\nprime number: ";
    for(int i=2; i<=num; i++)
    {
        if(isPrime(i))
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int num;
    cout<<"enter an integer: ";
    cin>>num;

    printPrimes(num);
}
