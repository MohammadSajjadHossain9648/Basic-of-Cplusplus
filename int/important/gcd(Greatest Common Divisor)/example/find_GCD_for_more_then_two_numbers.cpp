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

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

// Function to find gcd of array of numbers
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
            return 1;
        }
    }

    return result;
}

// Driver code
int main()
{
    int arr[] = { 2, 4, 6, 8, 16 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"\ngcd is "<<findGCD(arr, n)<<endl;
    return 0;

    //output: gcd is 2

    /*
    Time Complexity: O(n*logn), where n is the largest element of the array
    Auxiliary Space: O(1)
    */
}
