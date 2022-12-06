#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/program-to-find-lcm-of-two-numbers/
                  https://www.geeksforgeeks.org/stdlcm-in-cpp17/
                  https://www.scaler.com/topics/lcm-of-two-numbers-in-cpp/
                  https://www.javatpoint.com/lcm-of-two-numbers-in-cpp
                  https://www.tutorialspoint.com/cplusplus-program-to-find-lcm
                  http://www.trytoprogram.com/cpp-examples/cplusplus-program-to-find-lcm/
                  https://www.studytonight.com/cpp-programs/cpp-program-to-find-gcd-and-lcm
                  https://www.calculatorsoup.com/calculators/math/lcm.php
                  https://www.geeksforgeeks.org/lcm-of-given-array-elements/
                  https://www.geeksforgeeks.org/finding-lcm-two-array-numbers-without-using-gcd/
*/
/*
    LCM (Least Common Multiple) of two or more numbers is the smallest number which can be divided by all numbers.
    note: LCM never count zero and negative numbers.

    There are many ways to determine the greatest common divisor of two numbers:
    1.By finding the common divisors
    2.By GCD method
    3.By using math library

    no solution for least common multiple(LCM) by using use Euclidean algorithm.
    4.By Euclid's algorithm (By recursive function with use subtraction)
    5.By Euclid's algorithm (By recursive function with use a modulo operator instead of subtraction)

    method 1:
    Step 1. Find/write the divisors/factors of the first number
    Step 2. Find/write the divisors/factors of the second number
    Step 3. Find/write common divisors/factors of both numbers
    Step 4. Multiply them to get LCM


    method 3:
    Step 1: Find the product of a and b.
    Step 2: Find the greatest common divisor(GCD) of a and b.
    Step 3: Divide the values obtained in Step 1 and Step 2.
    Step 4: The obtained value after division is the greatest common divisor of (a, b).


    method 4:
    Step 1: If a = b, stop -- the GCD of a and a is, of course, a. Otherwise, go to step 2.
    Step 2: If a > b, replace a with (a - b), and go back to step 1.
    Step 3: If b > a, replace b with (b - a), and go back to step 1.
    Step 4: After getting GCD value, Find the product of a and b.
    step 5: Divide the values obtained in Step 1 and Step 4 -> LCM(a, b) = (a * b)/GCD(a, b)

    method 5:
    Step 1: If a = b, stop -- the GCD of a and a is, of course, a. Otherwise, go to step 2.
    Step 2: If a > b, replace a with (a % b), and go back to step 1.
    Step 3: If b > a, replace b with (b % a), and go back to step 1.
    Step 4: After getting GCD value, Find the product of a and b.
    step 5: Divide the values obtained in Step 1 and Step 4 -> LCM(a, b) = (a * b)/GCD(a, b)

*/
/*
    relation between least common multiple(LCM) and greatest common divisor(GCD) is
    (a*b) = LCM(a*b) * GCD(a*b)
*/
/*
    how count LCM in mathmatically?
    For example, for LCM(12,30) we find:
    Prime factorization of 12 = 2 × 2 × 3
    Prime factorization of 30 = 2 × 3 × 5

    Using all prime numbers found as often as each occurs most often we take 2 × 2 × 3 × 5 = 60
    Therefore LCM(12,30) = 60.

    For example, for LCM(24,300) we find:
    Prime factorization of 24 = 2 × 2 × 2 × 3
    Prime factorization of 300 = 2 × 2 × 3 × 5 × 5

    Using all prime numbers found as often as each occurs most often we take 2 × 2 × 2 × 3 × 5 × 5 = 600
    Therefore LCM(24,300) = 600.

    Example: LCM(12,18,30)
    Prime factors of 12 = 2 × 2 × 3
    Prime factors of 18 = 2 × 3 × 3
    Prime factors of 30 = 2 × 3 × 5

    List all the prime numbers found, as many times as they occur most often for any one given number and multiply
    them together to find the LCM
    2 × 2 × 3 × 3 × 5 = 180

    Using exponents instead, multiply together each of the prime numbers with the highest power 22 × 32 × 51 = 180
    So LCM(12,18,30) = 180
*/
int main()
{
}
