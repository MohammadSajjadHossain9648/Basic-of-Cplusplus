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

typedef long long int ll;

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

// Function to find gcd of array of numbers
ll findLCM(int arr[], int n)
{
    // Initialize result
    ll ans = arr[0];

    // ans contains LCM of arr[0], ..arr[i] after i'th iteration,
    for (int i = 1; i < n; i++)
    {
        ans = (arr[i] * ans)  / ( gcd(arr[i], ans) );
    }

    return ans;
}

// Driver code
int main()
{
    int arr[] = { 2, 7, 3, 9, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"\nlcm is "<<findLCM(arr, n)<<endl;
    return 0;

    //output: lcm is 252

    /*
    Time Complexity: O(n * log(min(a, b))), where n represents the size of the given array.
    Auxiliary Space: O(n*log(min(a, b))) due to recursive stack space.
    */
}
