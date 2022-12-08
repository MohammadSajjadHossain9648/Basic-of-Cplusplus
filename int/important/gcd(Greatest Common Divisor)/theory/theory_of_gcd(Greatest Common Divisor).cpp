#include<iostream>
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
/*
    The greatest common divisor (GCD) refers to the greatest positive integer that is a common divisor for a given
    set of positive integers. It is also termed as the highest common factor (HCF) or the greatest common factor (GCF).

    For a set of positive integers (a, b), the greatest common divisor is defined as the greatest positive number
    which is a common factor of both the positive integers (a, b). GCD of any two numbers is never negative or 0 as
    the least positive integer common to any two numbers is always 1.

    There are many ways to determine the greatest common divisor of two numbers:
    1.By finding the common divisors
    2.By Euclid's algorithm (By recursive function with use subtraction)
    3.By Euclid's algorithm (By recursive function with use a modulo operator instead of subtraction)
    4.Dynamic Programming Approach (Top Down Using Memoization)
    5.By LCM method
    6.By using math library

    method 1:
    Step 1. Find/write the divisors/factors of the first number
    Step 2. Find/write the divisors/factors of the second number
    Step 3. Find/write common divisors/factors of both numbers
    Step 4. Multiply them to get GCD

    method 2:
    Step 1: If a = b, stop -- the GCD of a and a is, of course, a. Otherwise, go to step 2.
    Step 2: If a > b, replace a with (a - b), and go back to step 1.
    Step 3: If b > a, replace b with (b - a), and go back to step 1.

    method 3:
    Step 1: If a = b, stop -- the GCD of a and a is, of course, a. Otherwise, go to step 2.
    Step 2: If a > b, replace a with (a % b), and go back to step 1.
    Step 3: If b > a, replace b with (b % a), and go back to step 1.

    method 5:
    Step 1: Find the product of a and b.
    Step 2: Find the least common multiple (LCM) of a and b.
    Step 3: Divide the values obtained in Step 1 and Step 2.
    Step 4: The obtained value after division is the greatest common divisor of (a, b).

*/
/*
    relation between least common multiple(LCM) and greatest common divisor(GCD) is
    (a*b) = LCM(a*b) * GCD(a*b)
*/
/*
    how count GCD in mathmatically?
    Example: Find the GCF (18, 27):
    The prime factorization of 18 is 2 x 3 x 3 = 18.
    The prime factorization of 27 is 3 x 3 x 3 = 27.

    The occurrences of common prime factors of 18 and 27 are 3 and 3.
    So the greatest common factor of 18 and 27 is 3 x 3 = 9.

    Example: Find the GCF (20, 50, 120):
    The prime factorization of 20 is 2 x 2 x 5 = 20.
    The prime factorization of 50 is 2 x 5 x 5 = 50.
    The prime factorization of 120 is 2 x 2 x 2 x 3 x 5 = 120.

    The occurrences of common prime factors of 20, 50 and 120 are 2 and 5.
    So the greatest common factor of 20, 50 and 120 is 2 x 5 = 10.
*/

int main()
{
}
