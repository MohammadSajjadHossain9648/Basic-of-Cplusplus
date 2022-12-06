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

int SieveOfEratosthenes(int num)
{
    vector<bool> prime (num+1, true);
    /* can use array instead of vector and use header #include<cstring>
    bool prime[num + 1];
    memset(prime, true, sizeof(prime));
    */

    int count = 0;

    //Making 0 and 1 as false since they are not prime
    prime[0] = prime[1] = false;

    for(int i=2; i<num; i++)
    {
        if(prime[i])
        {
            count++;

            // Cancelling out all the multiples of i cause they are not prime
            for(int j=2*i; j<num; j+=i)
            {
                prime[j] = false;
            }
        }
    }

    return count;
}

int main()
{
    int num;
    cout<<"enter an integer: ";
    cin>>num;

    int count = SieveOfEratosthenes(num);
    cout<<"\ntotal number of prime numbers: "<<count;


    /* it only work in given small number
    int num;
    cout<<"enter an integer: ";
    cin>>num;

    int prime[num] = {0}; //means let, all numbers is prime numbers

    int count = 0;

    for(int i=2; i<num; i++)
    {
        for(int j=i*i; j<num; j+=i)
        {
            prime[j-1] = 1;
        }
    }


    for(int i=2; i<num; i++)
    {
        if(prime[i-1] == 0)
        {
            count++;
        }
    }

    cout<<"\ntotal number of prime numbers: "<<count;
    */

    //output:
    //    enter an integer: 20
    //
    //    total number of prime numbers: 8

    /*here, we take total number of elements/ numbers is n which is 20.
    then first, we marked 2 as prime and crossed rest of 2 multipications is non-prime. so total number is n/2.
    then, we marked 3 as prime and crossed rest of 2 multipications is non-prime. so total number is n/3.
    things to do in rest like 5, 7, 11...
    so, total number of iteration = (n/2 + n/3 + n/5 + n/7 + n/11 + ...)
                                  = n (1/2 + 1/3 + 1/5 + 1/7 + 1/11 + ...) -> n * harmonic series prime numbers
                                  = n * log(log n)
                                  = n log(log n)
    Time Complexity: O(n*log(log n))

    Array ‘primes[]’ is using O(√n) space, size of every segment we are passing in segmentedSieve method is O(√n).
    For calculating all the primes using the simpleSieve method, we require O(√n) space. Everywhere in the
    implementation, we have used either constant space or O(√n) space. Hence taking the higher-order term, the space
    complexity = O(√n).
    Auxiliary Space: O(√n)


    important part:
    to know more about harmonic series prime numbers -> see taylor series
    1.https://byjus.com/maths/taylor-series/
    2.https://www.studysmarter.co.uk/explanations/math/calculus/taylor-series/
    */
}
