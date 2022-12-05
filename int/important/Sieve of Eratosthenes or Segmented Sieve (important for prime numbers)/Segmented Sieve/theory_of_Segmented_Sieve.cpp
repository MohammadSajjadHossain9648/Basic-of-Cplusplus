#include<iostream>
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
/*
    A Naive approach is to run a loop from 0 to n-1 and check each number for primeness. check a number is prime or not
    by using loop running smaller than or equal to √(n).
*/
/*
    Segmented Sieve
    The idea of a segmented sieve is to divide the range [0..n-1] in different segments and compute primes in all
    segments one by one. This algorithm first uses Simple Sieve to find primes smaller than or equal to √(n).
*/
/*
    Problems with Simple Sieve:
    The Sieve of Eratosthenes looks good, but consider the situation when n is large, the Simple Sieve faces
    the following issues.
    1. An array of size O(n) may not fit in memory
    2. The simple Sieve is not cached friendly even for slightly bigger n. The algorithm traverses the array
    without locality of reference

    A Better Approach is to use Simple Sieve of Eratosthenes. without it, finding all prime numbers in range of
    large number, compiler gives "Time Limit Exceeds", which means not possible to execute for a large number's prime.
*/
/*
    important part:
    to know more about harmonic series prime numbers -> see taylor series
    1.https://byjus.com/maths/taylor-series/
    2.https://www.studysmarter.co.uk/explanations/math/calculus/taylor-series/
*/
/*Frequently Asked Questions
    What is a segmented sieve?
    The Segmented Sieve is an optimised version of the normal Sieve Algorithm. Unlike the normal Sieve algorithm,
    the Segmented Sieve does not check for all multiples of every number but only for multiples of primes calculated
    till some predefined limit.

    What is the time complexity of segmented sieve?
    The time complexity of the Segmented Sieve algorithm is O(n), where n is the total number of elements present
    inside the given range. The space complexity of the Segmented Sieve algorithm is the same as the time complexity,
    i.e., O(n).

    What is a sieve algorithm?
    A Sieve algorithm is an optimised algorithm used to find the prime numbers in a given range. The naive method
    solves the problem in O(n^2) time complexity, and a Sieve algorithm does it in O(n*log(logn)), which can further
    reduce to O(n) using Segmented Sieve.
*/

int main()
{
    /*
    Time Complexity: O(√n)
    Auxiliary Space: O(1)
    */
}
