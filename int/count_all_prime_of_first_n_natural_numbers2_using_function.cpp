#include<iostream>
using namespace std;
/*
    to know more: https://leetcode.com/problems/count-primes/
*/
int countPrimes(int num)
{
    int count = 0;
    if(num < 2)
    {
        return 0;
    }

    for(int i=2; i<=num; i++)
    {
        bool prime = true;
        for(int j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
        {
            count++;
            cout<<"\nvalue: "<<i<<" -> count = "<<count;
        }
    }

    return count;
}
int main()
{
    int num;
    cout<<"enter an integer: ";
    cin>>num;

    int count = countPrimes(num);
    cout<<"\ntotal number of prime numbers: "<<count;
}
