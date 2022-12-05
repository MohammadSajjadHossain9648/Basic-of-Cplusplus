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
    Sieve of Eratosthenes is an algorithm for finding all the prime numbers smaller than n.
    This method was introduced by Greek Mathematician Eratosthenes in the third century B.C.

    The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when
    n is smaller than 10 million or so.

*/
/*
    How to find prime numbers using the Sieve of Eratosthenes method?
    The Sieve of Eratosthenes method is easy to use. We need to cancel all the multiples of each prime number
    beginning with 2 (including the number 1, which is not a prime or composite) and encircle the rest of the numbers.
    The encircled numbers will be the required prime numbers.
*/
/*
    Problems with Simple Sieve:
    The Sieve of Eratosthenes looks good, but consider the situation when n is large, the Simple Sieve faces
    the following issues.
    1. An array of size O(n) may not fit in memory
    2. The simple Sieve is not cached friendly even for slightly bigger n. The algorithm traverses the array
    without locality of reference

    so, A Better Approach is to use this Simple Sieve of Eratosthenes. without it, finding all prime numbers in range
    of large number, compiler gives "Time Limit Exceeds", which means not possible to execute for a large number's prime.
*/
/*
    important part:
    to know more about harmonic series prime numbers -> see taylor series
    1.https://byjus.com/maths/taylor-series/
    2.https://www.studysmarter.co.uk/explanations/math/calculus/taylor-series/
*/
int main()
{
    /*
    Example:
    Find the all prime numbers less than the 25.

    Step 1 : crossed number 0 and 1 as not prime number.
    () () 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24

    Step 2 : Write all the prime number between 2 to 25.

    () () 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24

    Step 3 : According to the algorithm we mark all appropriate multiples of 2 as a composite
    (because 2 is the smallest prime number and the first number of the list)

    () () 2 3 () 5 () 7 () 9 () 11 () 13 () 15 () 17 () 19 () 21 () 23 ()

    Step 4 : The next number of the list after 2 is 3, we mark all appropriate multiples of 3

    () () 2 3 () 5 () 7 () 9 () 11 () 13 () 15 () 17 () 19 () () () 23 ()

    Step 5 : The next number in the list after 3 is 5 which has not yet been crossed; we mark all appropriate
    multiples of 5

    () () 2 3 () 5 () 7 () 9 () 11 () 13 () () () 17 () 19 () () () 23 ()

    Step 6 : The next number in the list after 5 is 7 which has not yet been crossed; we mark all appropriate
    multiples of 7

    () () 2 3 () 5 () 7 () 9 () 11 () 13 () () () 17 () 19 () () () 23 ()

    Step 7 : This process will run until n.

    2 3 5 7 11 13 17 19 23
    */

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
    */
}
