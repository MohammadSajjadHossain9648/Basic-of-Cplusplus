#include<iostream>
#include<vector>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/sieve-of-eratosthenes/
                  https://www.geeksforgeeks.org/c-program-for-sieve-of-eratosthenes/
                  https://byjus.com/maths/sieve-of-eratosthenes/
                  https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html#implementation
                  https://www.tutorialspoint.com/cplusplus-program-to-implement-sieve-of-eratosthenes-to-generate-prime-numbers-between-given-range
                  https://www.sanfoundry.com/cpp-program-implement-sieve-eratosthenes/
                  https://www.javatpoint.com/sieve-of-eratosthenes
                  https://www.geeksforgeeks.org/segmented-sieve/
                  https://www.scaler.com/topics/segmented-sieve/
                  https://cppsecrets.com/users/9999109111117110105971171035048484864103109971051084699111109/C00-Segmented-Sieve-Print-Primes-In-a-Range.php
                  https://www.codingninjas.com/codestudio/library/segmented-sieve
                  https://www.codespeedy.com/find-prime-numbers-in-a-range-in-c-segmented-sieve-method/
*/


void SegmentedSieve(bool prime[])
{
    //setting TRUE for every number
    for(int i=2; i<=1000000; i++)
    {
        prime[i]=1;
    }

    //Making 0 and 1 as false since they are not prime
    prime[0] = prime[1] = false;

    for(int i = 2; i<=1000000; i++)
    {

        if(prime[i])
        {
            // Cancelling out all the multiples of i cause they are not prime
            for(int j = 2*i; j<=1000000; j+=i)
            {
                prime[j] = 0;
            }
        }
    }

}


int main()
{
    bool prime[1000001];
    SegmentedSieve(prime);

    int num;
    cout<<"enter an integer: ";
    cin>>num;

    if(prime[num])
    {
        cout<<num<<" is a Prime Number"<<endl;
    }
    else
    {
        cout<<num<<" is not a Prime Number"<<endl;
    }


    /*
    Time Complexity: O(n)
    Auxiliary Space: O(1)
    */
}

