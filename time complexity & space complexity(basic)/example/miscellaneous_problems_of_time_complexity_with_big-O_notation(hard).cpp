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
    // for explaination of code go to here: https://www.geeksforgeeks.org/miscellaneous-problems-of-time-complexity/

//example 1:
    //    void function(int n)
    //    {
    //        int i = 1, s = 1;
    //        while (s < n)
    //        {
    //            s = s + i;
    //            i++;
    //        }
    //    }

    /*
        When S>=n , then loop will stop at nth iterations,
        ⇒ S>=n ⇒ S=n
        ⇒ 2 + 2 + 3 + 4 + ……+ k = n
        ⇒ 1 + (k * (k + 1))/2  = n
        ⇒  k^2 = n
        k = √n
        Hence, the time complexity is O(√n).
    */



// example 2:
    //    void fun(int n)
    //    {
    //        if (n < 5)
    //            cout << "GeeksforGeeks";
    //        else
    //        {
    //            for (int i = 0; i < n; i++)
    //            {
    //                cout << i;
    //            }
    //        }
    //    }
    /*
        Solution – Time complexity = O(1) in best case and O(n) in worst case.

        This program contains if and else condition. Hence, there are 2 possibilities of time complexity.
        If the value of n is less than 5, then we get only GeeksforGeeks as output and its time complexity will be O(1).
        But, if n>=5, then for loop will execute and time complexity becomes O(n), it is considered as worst case
        because it takes more time.
    */



// example 3:
    //    void fun(int a, int b)
    //    {
    //        while (a != b) {
    //            if (a > b)
    //                a = a - b;
    //            else
    //                b = b - a;
    //        }
    //    }

    // Solution – Time complexity = O(1) in best case and O(max(a, b)) worst case.


// example 4:
    //    void fun(int a, int b)
    //    {
    //        for(int i=0; i*i<n; i++)
    //            cout<<"GeeksforGeeks";
    //    }

    /*
    Solution – Time complexity = O(√n).
    Explanation –
    Let k be the no. of iteration of the loop.

    i	i*i
    -------
    1	1^1
    2	2^2
    3	3^2
    4	4^2
    …	…
    k	 k^2
    ⇒ The loop will stop when i * i >=n       i.e.,  i*i=n
    ⇒ i*i=n ⇒ k^2 = n
    ⇒k =√n
    Hence, the time complexity is O(√n).
    */


// example 5:
    for (int i = 1; i < n; i = i * x) //or for(int i = n; i >=1; i = i / x)
        cout << "GeeksforGeeks";

    //Solution – Time complexity = O(logn).



// example 6:
    //    void fun(int n)
    //    {
    //        for (int i = 0; i < n / 2; i++)
    //            for (int j = 1; j + n / 2 <= n; j++)
    //                for (int k = 1; k <= n; k = k * 2)
    //                    cout << "GeeksforGeeks";
    //    }

    /*
    Time complexity of 1st for loop = O(n/2) ⇒ O(n).
    Time complexity of 2nd for loop = O(n/2) ⇒ O(n).
    Time complexity of 3rd for loop = O(log2n).                                     (refer question number – 5)

    Hence, the time complexity of function will become O(n2log2n).
    */



// example 7:
    //    void fun(int n)
    //    {
    //        for (int i = 1; i <= n; i++)
    //            for (int j = 1; j <= n; j = j + i)
    //                cout << "GeeksforGeeks";
    //    }

    /*
    Time complexity of 1st for loop = O(n). 2nd loop executes n/i times for each value of i which is O(log n).
    so, Time complexity = O(nlogn).
    */



// example 8:
    //    void fun(int n)
    //    {
    //        for (int i = 0; i <= n / 3; i++)
    //            for (int j = 1; j <= n; j = j + 4)
    //                cout << "GeeksforGeeks";
    //    }

    /*
    Time complexity of 1st for loop = O(n/3) ⇒ O(n).
    Time complexity of 2nd for loop = O(n/4) ⇒ O(n).
    Hence, the time complexity of function will become O(n2).
    */


// example 9:
    //    void fun(int n)
    //    {
    //        int i = 1;
    //        while (i < n) {
    //            int j = n;
    //            while (j > 0) {
    //                j = j / 2;
    //            }
    //            i = i * 2;
    //        }
    //    }

    /*
    In each iteration , i become twice (T.C=O(logn)) and j become half (T.C=O(logn)).
    So, time complexity will become O(log(logn)).
    We can convert this while loop into for loop.
        for( int i = 1; i < n; i = i * 2)
        for( int j=n ; j > 0; j = j / 2).

    Time complexity of above for loop is also O(log(logn)).
    */



// example 10:
    //    void fun(int n)
    //    {
    //        int j = 1;
    //        while (j <= n) {
    //            j = j * 2;
    //        }
    //    }

    /*
    Let k be the no. of iteration of the loop. After the kth step, the value of j is 2k.
    Hence, k=log2n. Here, we use ceil of log2n, because log2n may be in decimal.
    Since we are doing one more comparison for exiting from the loop.
    So, the answer is ceil(log2n)+1.
    */



//example 11:
    //    void function(int n)
    //    {
    //        int count = 0;
    //
    //        // outer loop executes n/2 times
    //        for (int i=n/2; i<=n; i++)
    //
    //            // middle loop executes  n/2 times
    //            for (int j=1; j+n/2<=n; j = j++)
    //
    //                // inner loop executes logn times
    //                for (int k=1; k<=n; k = k * 2)
    //                    count++;
    //    }

    // Time Complexity: O(n2logn).


//example 12:
    //    function(int n)
    //    {
    //        if (n==1)
    //           return;
    //        for (int i=1; i<=n; i++)
    //        {
    //            // Inner loop executes only one
    //            // time due to break statement.
    //            for (int j=1; j<=n; j++)
    //            {
    //                printf("*");
    //                break;
    //            }
    //        }
    //    }

    /*
    Time Complexity: O(n), Even though the inner loop is bounded by n, but due to the break statement,
    it is executing only once.
    */


//example 13:
    //    void function(int n)
    //    {
    //        int count = 0;
    //        for (int i=n/2; i<=n; i++)
    //
    //            // Executes O(Log n) times
    //            for (int j=1; j<=n; j = 2 * j)
    //
    //                // Executes O(Log n) times
    //                for (int k=1; k<=n; k = k * 2)
    //                    count++;
    //    }
    // Time Complexity: O(n logn logn) =O(n log^2 (n)).



//example 14:
    //    void function(int n)
    //    {
    //        int count = 0;
    //
    //        // outer loop executes n/2 times
    //        for (int i=n/2; i<=n; i++)
    //
    //            // middle loop executes  n/2 times
    //            for (int j=1; j+n/2<=n; j = j++)
    //
    //                // inner loop executes logn times
    //                for (int k=1; k<=n; k = k * 2)
    //                    count++;
    //    }

    // Time Complexity: O(n^2 * logn)



//example 15:
    //    void function(int n)
    //    {
    //        int count = 0;
    //
    //        // executes n times
    //        for (int i=0; i<n; i++)
    //
    //            // executes O(n*n) times.
    //            for (int j=i; j< i*i; j++)
    //                if (j%i == 0)
    //                {
    //                    // executes j times = O(n*n) times
    //                    for (int k=0; k<j; k++)
    //                        printf("*");
    //                }
    //    }
    // Time Complexity: O(n^5)
}
