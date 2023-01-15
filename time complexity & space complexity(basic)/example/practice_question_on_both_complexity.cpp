#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/miscellaneous-problems-of-time-complexity/
                  https://victoria.dev/blog/a-coffee-break-introduction-to-time-complexity-of-algorithms/#:~:text=Its%20time%20complexity%20depends%20on,a%20single%20execution's%20time%20complexity.&text=The%20time%20complexity%20of%20a%20single%20execution%20is%20constant.
                  https://adrianmejia.com/how-to-find-time-complexity-of-an-algorithm-code-big-o-notation/#:~:text=Let's%20use%20T(n)%20as,statement%20or%20group%20of%20statements.&text=T(n)%20%3D%20t(,constant%20time%20O(1)%20.
                  https://adrianmejia.com/most-popular-algorithms-time-complexity-every-programmer-should-know-free-online-tutorial-course/#Mergesort
                  https://www.geeksforgeeks.org/practice-questions-time-complexity-analysis/
*/

// before start please read all theory___.cpp files for theory and calculate_complexity_with_big-O_notation.cpp.


int main()
{
//exmaple 1:
    int i, j, a = 0, b = 0;
    for (i = 0; i < N; i++) {
        a = a + rand();
    }
    for (j = 0; j < M; j++) {
        b = b + rand();
    }
    // time complexity -> Big-O(N+M)
    // space complexity -> Big-O(1)
    /*
    Explanation: The first loop is O(N) and the second loop is O(M). Since N and M are independent variables,
    so we can’t say which one is the leading term. Therefore Time complexity of the given problem will be O(N+M).
    Since variables size does not depend on the size of the input, therefore  Space Complexity will be constant or O(1).
    */


//exmaple 2:
    a = 0;
    for (i = 0; i < N; i++) {
        for (j = N; j > i; j--) {
            a = a + i + j;
        }
    }
    // time complexity -> Big-O(N^2)
    // space complexity -> Big-O(1)

    /*
        Explanation:
        The above code runs total no of times
        = N + (N – 1) + (N – 2) + … 1 + 0
        = N * (N + 1) / 2
        = 1/2 * N^2 + 1/2 * N
        O(N^2) times.
    */


//exmaple 3:
    int k = 0;
    for (i = n / 2; i <= n; i++) {
        for (j = 2; j <= n; j = j * 2) {
            k = k + n / 2;
        }
    }
    // time complexity -> Big-O(n logn)
    // space complexity -> Big-O(1)
    /*
    Explanation: If you notice, j keeps doubling till it is less than or equal to n. Several times, we can double a number till it is less than n would be log(n).
    Let’s take the examples here.
    for n = 16, j = 2, 4, 8, 16
    for n = 32, j = 2, 4, 8, 16, 32
    So, j would run for O(log n) steps.
    i runs for n/2 steps.
    So, total steps = O(n/ 2 * log (n)) = O(n*logn)
    */


//exmaple 4:
    int a = 0, i = N;
    while (i > 0) {
        a += i;
        i /= 2;
    }
    // time complexity -> Big-O(log N)
    // space complexity -> Big-O(1)
    /*
    Explanation: We have to find the smallest x such that N / 2^x N
    x = log(N)
    */


//exmaple 5:
    k = 1;
    for(int i=0;i<n;i++){
      i*=k;
    }
    // time complexity -> Big-O(logk(n))
    // space complexity -> Big-O(1)
    /*
    Explanation: Because loops for the kn-1 times, so after taking log it becomes logk(n).
    */


//exmaple 6:
    int value = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<i;j++)
            value += 1;

    // time complexity -> Big-O(n(n-1))
    // space complexity -> Big-O(1)
    /*
    Explanation: First for loop will run for (n) times and another for loop will be run for
    (n-1) times so overall time will be n(n-1).
    */



//exmaple 7:
    int n;
    cin>>n;

    vector<int> num(n); // int arr[n]
    // time complexity -> Big-O(1)
    // space complexity -> Big-O(n)

    /*
    Explanation:here, vector num with size n. so space complexity is big-O(n). cause we don't know the size.
    */



//exmaple 8:
    cin>>n;
    for(int i=0;i<n;i++)
    {
        vector<int> num(n);
        for(int j=0;j<i;j++)
        {
            // some O(1) expressions
        }
    }
    // time complexity -> Big-O(n^2)
    // space complexity -> Big-O(n)
    /*
    Explanation: run two for loop with 0 to n, so time complexity is Big-O(n^2).
    here, vector num with size n. so space complexity is big-O(n). cause we don't know the size.
    */



//question 1:
//    What does it mean when we say that an algorithm X is asymptotically more efficient than Y?
//
//    Options:
//    1.X will always be a better choice for small inputs
//    2.X will always be a better choice for large inputs
//    3.Y will always be a better choice for small inputs
//    4.X will always be a better choice for all inputs

    // answer 2
    /*
    Explanation: In asymptotic analysis, we consider the growth of the algorithm in terms of input size.
    An algorithm X is said to be asymptotically better than Y if X takes smaller time than y for
    all input sizes n larger than a value n0 where n0 > 0.
    */



//question 2:
//    Which of the following best describes the useful criterion for comparing the efficiency of algorithms?
//
//    1.Time
//    2.Memory
//    3.Both of the above
//    4.None of the above

    // answer 3
    /*
    Explanation: Comparing the efficiency of an algorithm depends on the time and memory taken by an algorithm.
    The algorithm which runs in lesser time and takes less memory even for a large input size is considered
    a more efficient algorithm.
    */


//question 3:
//    How is time complexity measured?
//
//    1.By counting the number of algorithms in an algorithm.
//    2.By counting the number of primitive operations performed by the algorithm on a given input size.
//    3.By counting the size of data input to the algorithm.
//    4.None of the above

    // answer 2



//exmaple 4:
//    Algorithm A and B have a worst-case running time of O(n) and O(logn), respectively.
//    Therefore, algorithm B always runs faster than algorithm A.
//
//    1.True
//    2.False

    // answer 2
    /*
    Explanation: The Big-O notation provides an asymptotic comparison in the running time of algorithms.
    For n < n0​​, algorithm A might run faster than algorithm B, for instance.
    */

}
