#include<iostream>
#include<vector>
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

unsigned long long int LCM(int arr[], int n)
{
    // Find the maximum value in arr[]
    int max_num = 0;
    for(int i=0; i<n; i++)
        if (max_num < arr[i])
            max_num = arr[i];

    // Initialize result
    unsigned long long int res = 1;

    // Find all factors that are present in
    // two or more array elements.
    int x = 2;  // Current factor.
    while(x <= max_num)
    {
        // To store indexes of all array
        // elements that are divisible by x.
        vector<int> indexes;
        for(int j=0; j<n; j++)
        {
            if (arr[j]%x == 0)
                indexes.push_back(j);
        }


        // If there are 2 or more array elements
        // that are divisible by x.
        if(indexes.size() >= 2)
        {
            // Reduce all array elements divisible
            // by x.
            for (int j=0; j<indexes.size(); j++)
                arr[indexes[j]] = arr[indexes[j]]/x;

            res = res * x;
        }
        else
            x++;
    }

    // Then multiply all reduced array elements
    for(int i=0; i<n; i++)
        res = res*arr[i];

    return res;
}

// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 10, 20, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"\nlcm is "<<LCM(arr, n)<<endl;
    return 0;

    //output: lcm is 420

    /*
    Time Complexity: O(n*logn), where n is the largest element of the array
    Auxiliary Space: O(1)
    */
}
