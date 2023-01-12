#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/time-complexity-and-space-complexity/
                  https://www.geeksforgeeks.org/understanding-time-complexity-simple-examples/ (go next related article)
                  https://afteracademy.com/blog/time-and-space-complexity-analysis-of-algorithm
                  https://www.geeksforgeeks.org/g-fact-86/
                  https://towardsdatascience.com/space-and-time-complexity-in-computer-algorithms-a7fffe9e4683
                  https://www.simplilearn.com/tutorials/data-structure-tutorial/time-and-space-complexity
                  https://www.studytonight.com/data-structures/introduction-to-data-structures (go next page for more)
                  https://www.geeksforgeeks.org/analysis-of-algorithms-set-2-asymptotic-analysis/
                  https://algorithmtutor.com/Analysis-of-Algorithm/Best-Average-Worst-case-analysis-of-Algorithms/
                  https://www.codingninjas.com/codestudio/guided-paths/competitive-programming/content/126222/offering/1476042
                  for Time Limit Exceed(TLE):
                  https://www.geeksforgeeks.org/overcome-time-limit-exceedtle/
                  https://www.geeksforgeeks.org/how-an-online-judge-works-and-how-to-avoid-time-limit-exceeded-problem/#:~:text=If%20you%20take%20more%20time,the%20complexity%20of%20an%20algorithm.
*/

// before start please read theory_of_time_complexity.cpp and theory_of_space_complexity.cpp

/*
    basic of big-Oh notation:
    1. constant time -> O(1)
    2. linear time -> O(n)
    3. logarithmic time -> O(log n)
    4. quadratic time -> O(n^2)
    5. cubic time -> O(n^3)

    priority based time complexity:
    O(N!) 		-> highest complexity
    O(2^N)
    O(N^3)
    O(N^2)
    O(N* log N)
    O(N)
    O(log N)
    O(1) 	   -> lowest/least complexity


    why we need to know priority based time complexity, like an example:
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        }
    }

    here, 1st for loop time complexity is O(N^3) and 2nd for loop time complexity is O(N^2).
    so, f(n) = n^3 + n^2. now we pick the worst of highest priority based time complexity which is O(N^3).

    **some question with big-Oh notation answer:
    question      ->       big-oh
    f(n) = 2n^2+3n      -> O(n^2)
    f(n) = 2n^4+3n^3    -> O(n^4)
    f(n) = n^2+log n    -> O(n^2)
    f(n) = 12001        -> O(1)
    f(n) = 3n^3+2n^2+5  -> O(n^3)
    f(n) = n^3/500      -> O(n^3)
    f(n) = n/4          -> O(n)
    f(n) = (n+4)/4      -> O(n)

*/
/*
    Many programmers always argue that the problems in Competitive Programming always end up with
    TLE(Time Limit Exceed). The main problem with this error is that it will not allow you to know
    that your solution would reach to correct solution or not!

    **Why Do We Get TLE?
    When your algorithm doesn’t have the required efficiency you get TLE so the idea is to complete
    the processing in a finite amount of time. Let’s assume you are calculating whether a number is
    prime or not and the number is of the order 10^18. If you are using the O(n) algorithm you are bound
    to get TLE and if you use the O(log N) algorithm you won’t get TLE. Below are some common reasons
    for TLE error…
    Online judges put some restrictions on time and it doesn’t allow you to process your instruction
    after that time limit. If you take more time than the time limit which is specified than you will get
    the TLE error.
    TLE error also depends on the server architecture, operating system, and the complexity of an algorithm.
    For different platform server architectures are different and the speed of the execution for the code
    varies on each server.
    If the programmer is using a slow method of reading and writing the input in the code then it will give
    you a TLE error.

    **How To Avoid TLE?
    1. Analyze the constraints: If the time limit is 1 sec, your processor is able to execute 10^8 operations.
    2. Choose faster input and output method. For example:
        1.Use buffer reader in java, do not use Scanner
        2.In C++ use scanf/printf instead of cin/cout,
    3. Your program must not contain 4 nested loops if N<=100.
    4. Sometimes too many nested loops can make your program slower. So it’s better to optimize your code
    and reduce the number of loops according to the instruction of input bound already specified in the question.
    So read the bounds in your code carefully and according to that write your program.
    5. Optimize your algorithm or try to find a different solution for the problem statement
    using another data structure.
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

/*  before start it read before section
    10^8 operation rule: most of the modern machine can perform 10^8/second.
    <Input Length   ->  Worst Accepted Time Complexity
    <10 - 12             O(N!)
    <15 - 18             O(2^N * N^2)
    <18 - 22             O(2^N * N)
    <100                 O(N^4)             -> four nested for loop
    <400                 O(N^3)             -> three nested for loop
    <2000                O(N^2* log N)
    <10^4                O(N^2)    `        -> two nested for loop
    <10^6                O(N* log N)        -> one for loop with divide side like left right
    <10^8                O(N), O(log N)

    in your question, always give Constraints like 1<n<10^6.

    **link: https://leetcode.com/problems/find-all-duplicates-in-an-array/
    question: find all duplicates in array and given Constraints is 1 <= n <= 10^5.
    step 1: first see input length which is <10^5. we can use any of below.
            <10^6                O(N* log N)        -> one for loop with divide side like left right
            <10^8                O(N), O(log N)
            best worst case is O(N* log N).
    step 2: now use the worst case to code. we choose best worst case is O(N* log N).
            which mean one for loop with divide the class.

            or if we choose worst case is O(N). which means we run a loop and compare with next value.
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

    2000                    O(N^2* log N)                Dynamic programming, Binary Search, Sorting,
                                                                    Divide and Conquer

    10k                         O(N^2)                   Dynamic programming, Graph, Trees, Constructive

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
    Algorithms Cheat Sheet:
    Algorithm	    Best Case	Average Case	Worst Case
    Selection Sort	O(n^2)  	O(n^2)      	O(n^2)
    Bubble Sort	    O(n)	    O(n^2)	        O(n^2)
    Insertion Sort	O(n)	    O(n^2)	        O(n^2)
    Tree Sort	    O(nlogn)	O(nlogn)	    O(n^2)
    Radix Sort	    O(dn)	    O(dn)	        O(dn)
    Merge Sort	    O(nlogn)	O(nlogn)	    O(nlogn)
    Heap Sort	    O(nlogn)	O(nlogn)	    O(nlogn)
    Quick Sort	    O(nlogn)	O(nlogn)	    O(n^2)
    Bucket Sort 	O(n+k)	    O(n+k)	        O(n^2)
    Counting Sort	O(n+k)	    O(n+k)	        O(n+k)
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
    // for calculate bigO with code go to -> calculate_complexity_with_big-O_notation.cpp file
}
