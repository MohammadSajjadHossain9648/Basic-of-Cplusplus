#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/time-complexity-and-space-complexity/
                  https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/
                  https://afteracademy.com/blog/time-and-space-complexity-analysis-of-algorithm
                  https://www.geeksforgeeks.org/g-fact-86/
                  https://towardsdatascience.com/space-and-time-complexity-in-computer-algorithms-a7fffe9e4683
                  https://www.simplilearn.com/tutorials/data-structure-tutorial/time-and-space-complexity
                  https://www.studytonight.com/data-structures/introduction-to-data-structures (go next page for more)

*/

/*
    Space Complexity: The space complexity of an algorithm quantifies the amount of space taken by an algorithm
    to run as a function of the length of the input.
    like an example:
        int N1 = 5;
        for(int i=1; i<=N1; i++)
        {
            for(int j=1; j<=N1; j++)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    here, variable is N1. so space complexity is O(1).

    NOTE: In normal programming, you will be allowed to use 256MB of space for a particular problem.
    So, you can't create an array of size more 10^8 because you will be allowed to use only 256MB.
    Also, you can't create an array of size more than 10^6 in a function because the maximum space
    allotted to a function is 4MB. So, to use an array of more size, you can create a global array.
*/

/*
    Methods for Calculating Space Complexity
    With an example, you will go over how to calculate space complexity in this section.
    Here is an example of computing the multiplication of array elements:

            int mul, i
            While i < = n do
               mul <- mul * array[i]
               i <- i + 1
            end while
            return mul

    Let S(n) denote the algorithm's space complexity. In most systems, an integer occupies 4 bytes of memory.
    As a result, the number of allocated bytes would be the space complexity.

    Line 1 allocates memory space for two integers, resulting in S(n) = 4 bytes multiplied by 2 = 8 bytes.
    Line 2 represents a loop. Lines 3 and 4 assign a value to an already existing variable.
    As a result, there is no need to set aside any space. The return statement in line 6 will allocate
    one more memory case. As a result, S(n)= 4 times 2 + 4 = 12 bytes.

    Because the array is used in the algorithm to allocate n cases of integers, the final space complexity
    will be fS(n) = n + 12 = O (n).
*/
int main()
{
}
