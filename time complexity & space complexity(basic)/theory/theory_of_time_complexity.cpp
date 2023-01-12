#include<iostream>
#include<math.h>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/time-complexity-and-space-complexity/
                  https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/ (go next related article)
                  https://afteracademy.com/blog/time-and-space-complexity-analysis-of-algorithm
                  https://www.geeksforgeeks.org/analysis-of-algorithms-set-4-analysis-of-loops/
                  https://www.geeksforgeeks.org/miscellaneous-problems-of-time-complexity/
                  https://www.geeksforgeeks.org/practice-questions-time-complexity-analysis/
                  https://www.geeksforgeeks.org/knowing-the-complexity-in-competitive-programming/
                  https://www.geeksforgeeks.org/g-fact-86/
                  https://towardsdatascience.com/space-and-time-complexity-in-computer-algorithms-a7fffe9e4683
                  https://www.simplilearn.com/tutorials/data-structure-tutorial/time-and-space-complexity
                  https://www.studytonight.com/data-structures/introduction-to-data-structures (go next page for more)
                  https://www.geeksforgeeks.org/analysis-of-algorithms-set-2-asymptotic-analysis/
                  https://algorithmtutor.com/Analysis-of-Algorithm/Best-Average-Worst-case-analysis-of-Algorithms/
*/

/*
    Time Complexity: The time complexity of an algorithm quantifies the amount of time taken by an algorithm
    to run as a function of the length of the input. Note that the time to run is a function of the length
    of the input and not the actual execution time of the machine on which the algorithm is running on.
    like an example:
        for(int i=1; i<=N; i++)
        {
            cout<<i<<" ";
        }
    here, i loop runs N times. so time complexity is big-o(N).
    another example:
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=N; j++)
            {
                cout<<i<<" "<<j<<""<<endl;
            }
        }
    here, outer loop i runs N times and inner loop j runs N times. so time complexity is big-o(N*N)->big-o(N^2).
*/

/*
    we use Asymptotic analysis to compare space and time complexity. It analyzes two algorithms based on changes
    in their performance concerning the increment or decrement in the input size.

    Understanding Notations of Time Complexity with Example
    1. Big-Oh (O) notation
    We define an algorithm’s worst-case time complexity by using the Big-O notation, which determines
    the set of functions grows slower than or at the same rate as the expression.
    Furthermore, it explains the maximum amount of time an algorithm requires considering all input values.

    2. Big Omega ( Ω ) notation
    It defines the best case of an algorithm’s time complexity, the Omega notation defines whether
    the set of functions will grow faster or at the same rate as the expression.
    Furthermore, it explains the minimum amount of time an algorithm requires considering all input values.

    3. Big Theta ( Θ ) notation
    It defines the average case of an algorithm’s time complexity, the Theta notation defines when
    the set of functions lies in both O(expression) and Omega(expression), then Theta notation is used.
    This is how we define a time complexity average case for an algorithm.

    Suppose you have calculated that an algorithm takes f(n) operations, where,
    f(n) = 3*n^2 + 2*n + 4.   // n^2 means square of n

    Since this polynomial grows at the same rate as n^2, then you could say that the function f
    lies in the set Theta(n^2). (It also lies in the sets O(n^2) and Omega(n^2) for the same reason.)

    The simplest explanation is, because Theta denotes the same as the expression.
    Hence, as f(n) grows by a factor of n^2, the time complexity can be best represented as Theta(n^2).

    to know more:
    https://afteracademy.com/blog/time-and-space-complexity-analysis-of-algorithm
    https://www.geeksforgeeks.org/analysis-of-algorithms-set-2-asymptotic-analysis/
*/

/*
    Interesting information about asymptotic notations:
    A) For some algorithms, all the cases (worst, best, average) are asymptotically the same. i.e.,
    there are no worst and best cases.

    Example:  Merge Sort does Θ(n log(n)) operations in all cases.

    B) Where as most of the other sorting algorithms have worst and best cases.

    Example 1: In the typical implementation of Quick Sort (where pivot is chosen as a corner element),
    the worst occurs when the input array is already sorted and the best occurs when the pivot elements
    always divide the array into two halves.
    Example 2: For insertion sort, the worst case occurs when the array is reverse sorted
    and the best case occurs when the array is sorted in the same order as output.
*/

/*
    Best case, Worst case, and Average case in Asymptotic Analysis:

    Best Case: It defines as the condition that allows an algorithm to complete the execution of statements
    in the minimum amount of time. In this case, the execution time acts as a lower bound
    on the algorithm’s time complexity.

    Average Case: In the average case, we get the sum of running times on every possible input combination
    and then take the average. In this case, the execution time acts as both lower bound and upper bound
    on the algorithm’s time complexity.

    Worst Case: It defines as the condition that allows an algorithm to complete the execution of statements
    in the maximum amount of time. In this case, the execution time acts as an upper bound
    on the algorithm’s time complexity.

    to know more:
    https://www.geeksforgeeks.org/analysis-of-algorithms-set-2-asymptotic-analysis/
    https://algorithmtutor.com/Analysis-of-Algorithm/Best-Average-Worst-case-analysis-of-Algorithms/
    https://afteracademy.com/blog/time-and-space-complexity-analysis-of-algorithm
*/

/*
    Methods for Calculating Time Complexity

    To calculate time complexity, you must consider each line of code in the program.
    Consider the multiplication function as an example. Now, calculate the time complexity of the multiply function:

            mul <- 1
            i <- 1
            While i <= n do
                 mul = mul * 1
                 i = i + 1
            End while

    Let T(n) be a function of the algorithm's time complexity. Lines 1 and 2 have a time complexity of O(1).
    Line 3 represents a loop. As a result, you must repeat lines 4 and 5 (n -1) times.
    As a result, the time complexity of lines 4 and 5 is O(n).

    Finally, adding the time complexity of all the lines yields the overall time complexity of the multiple
    function fT(n) = O(n).

    The iterative method gets its name because it calculates an iterative algorithm's time complexity
    by parsing it line by line and adding the complexity.

    Aside from the iterative method, several other concepts are used in various cases. The recursive process,
    for example, is an excellent way to calculate time complexity for recurrent solutions that use recursive
    trees or substitutions. The master's theorem is another popular method for calculating time complexity.
*/

/*
    Some general time complexities are listed below with the input range for which they are accepted in competitive programming:

    Input Length	Worst Accepted Time Complexity	    Usually type of solutions

    10 -12                     O(N!)                     Recursion and backtracking

    15-18                    O(2^N * N)                   Recursion, backtracking, and bit manipulation

    18-22                    O(2^N * N)                   Recursion, backtracking, and bit manipulation

    30-40                   O(2^N/2 * N)	              Meet in the middle, Divide and Conquer

    100                         O(N^4)                    Dynamic programming, Constructive

    400                         O(N^3)                    Dynamic programming, Constructive

    2K                      O(N^2* log N)                Dynamic programming, Binary Search, Sorting,
                                                                    Divide and Conquer

    10K                         O(N^2)                   Dynamic programming, Graph, Trees, Constructive

    1M                       O(N* log N)                Sorting, Binary Search, Divide and Conquer

    100M                O(N), O(log N), O(1)            Constructive, Mathematical, Greedy Algorithms


    priority based time complexity:
    O(N!) 		-> highest complexity
    O(2^N)
    O(N^3)
    O(N^2)
    O(N* log N)
    O(N)
    O(log N)
    O(1) 	    -> lowest/least complexity

*/

/*
    A lot of students get confused while understanding the concept of time complexity, but in this article,
    we will explain it with a very simple example.

    Q. Imagine a classroom of 100 students in which you gave your pen to one person.
    You have to find that pen without knowing to whom you gave it.

    Here are some ways to find the pen and what the O order is.

    O(n^2): You go and ask the first person in the class if he has the pen. Also, you ask this person
    about the other 99 people in the classroom if they have that pen and so on,
    This is what we call O(n^2).

    O(n): Going and asking each student individually is O(N).

    O(log n): Now I divide the class into two groups, then ask: “Is it on the left side,
    or the right side of the classroom?” Then I take that group and divide it into two and ask again,
    and so on. Repeat the process till you are left with one student who has your pen.
    This is what you mean by O(log n).

    The O(n^2) searches if only one student knows on which student the pen is hidden.

    The O(n) if one student had the pen and only they knew it.

    The O(log n) search if all the students knew, but would only tell me if I guessed the right side.
*/

/*
    for competitive programming :
        https://www.geeksforgeeks.org/knowing-the-complexity-in-competitive-programming/
    for practice:
        https://www.geeksforgeeks.org/miscellaneous-problems-of-time-complexity/
        https://www.geeksforgeeks.org/practice-questions-time-complexity-analysis/
*/
int main()
{
    //example 1:
    cout << "Hello World";
    return 0;
    /*
    Time Complexity: In the above code “Hello World” is printed only once on the screen.
    So, the time complexity is constant: O(1) i.e. every time a constant amount of time is required to
    execute code, no matter which operating system or which machine configurations you are using.
    */


//example 2:
    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        cout<<"Hello World !!!"<<endl;
    }
    /*
    Time Complexity: In the above code “Hello World !!!” is printed only n times on the screen,
    as the value of n can change.
    So, the time complexity is linear: O(n) i.e. every time, a linear amount of time is required to execute code.
    */
    //but here
    for (int i = 1; i <= 8; i++)
    {
        cout<<"Hello World !!!"<<endl;
    }
    /*
    Time Complexity: In the above code “Hello World !!!” is printed only 8 times on the screen
    So, the time complexity is constant: O(1) i.e. every time a constant amount of time is required to
    execute code, no matter which operating system or which machine configurations you are using.
    */

//example 3:
    int N = 5;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
    //here, outer loop i runs N times and inner loop j runs N times.
    //so time complexity is big-o(N*N)->big-o(N^2).

//example 4:
    int n1 = 8;
    for (int i = 1; i <= n1; i=i*2)
    {
        cout<<"Hello World !!!"<<endl;
    }
    // time complexity: O(log2(n))


//example 5:
    int n2 = 8;
    for (int i = 2; i <= n2; i=pow(i,2))
    {
        cout<<"Hello World !!!"<<endl;
    }
    // time complexity: O(log(log n))
}
