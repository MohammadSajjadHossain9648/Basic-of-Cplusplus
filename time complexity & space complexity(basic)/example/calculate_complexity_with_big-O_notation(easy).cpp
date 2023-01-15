#include<iostream>
#include<math.h>
#include<array>
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
                  for Time Limit Exceed(TLE):
                  https://www.geeksforgeeks.org/overcome-time-limit-exceedtle/
                  https://www.geeksforgeeks.org/how-an-online-judge-works-and-how-to-avoid-time-limit-exceeded-problem/#:~:text=If%20you%20take%20more%20time,the%20complexity%20of%20an%20algorithm.
                  for practice code of time complexity:
                  https://www.enjoyalgorithms.com/blog/time-complexity-analysis-of-loop-in-programming
                  https://interviewsansar.com/time-complexity-of-for-loop/
                  https://victoria.dev/blog/a-coffee-break-introduction-to-time-complexity-of-algorithms/#:~:text=Its%20time%20complexity%20depends%20on,a%20single%20execution's%20time%20complexity.&text=The%20time%20complexity%20of%20a%20single%20execution%20is%20constant.
                  https://adrianmejia.com/how-to-find-time-complexity-of-an-algorithm-code-big-o-notation/#:~:text=Let's%20use%20T(n)%20as,statement%20or%20group%20of%20statements.&text=T(n)%20%3D%20t(,constant%20time%20O(1)%20.
                  https://adrianmejia.com/most-popular-algorithms-time-complexity-every-programmer-should-know-free-online-tutorial-course/#Mergesort
                  https://www.geeksforgeeks.org/practice-questions-time-complexity-analysis/
                  https://www.geeksforgeeks.org/analysis-algorithms-set-5-practice-problems/?ref=lbp
*/

/*
1. Constant Time Complexity Big-O(1):
    // Here c is a constant
    for (int i = 1; i <= c; i++) { //constant c = 1 2 3 ....
        // some O(1) expressions
    }



2. Linear Time Complexity Big-O(n):
    The Time Complexity of a single loop is considered as O(n).

    // Here c is a positive integer constant
    for (int i = 1; i <= n; i += c) { //constant c = 1 2 3 ....
        // some O(1) expressions
    }
    ------------------------------------------------------------
    for (int i = n; i > 0; i -= c) {
        // some O(1) expressions
    }
    ------------------------------------------------------------
    for (int i = 1; i <= 3*n; i += c) {
        // some O(1) expressions
    }
    ------------------------------------------------------------
    while(i<n)
    {
        // some O(1) expressions
    }




3. Quadratic Time Complexity Big-O(n^c): ->indicates how many loops running inside it
    for (int i = 1; i <= n; i += c) {
        for (int j = 1; j <= n; j += c) {
            // some O(1) expressions
        }
    }
    ------------------------------------------------------------
    for (int i = n; i > 0; i -= c) {
        for (int j = i + 1; j <= n; j += c) {
            // some O(1) expressions
        }
    }
    ------------------------------------------------------------
    for (int i = 1; i <= n; i += c) {
        while(i<n)
        {
            // some O(1) expressions
        }
    }
    ------------------------------------------------------------
    for (int i = 1; i <= n; i += c) {
        fn1();  -> let fn1() has another n-length array with single for loop so time complexity is Big-O(n^2)
    }




4. Logarithmic Time Complexity Big-O(Log n):
    The time Complexity of a loop is considered as O(Logn) if the loop variables are divided/multiplied
    by a constant amount. And also for recursive calls in the recursive function, the Time Complexity
    is considered as O(Logn).

    for (int i = 1; i <= n; i = i * c) {
        // some O(1) expressions
    }
    // can be write above code like
    for (int i = 1; i <= n; ) {
        // some O(1) expressions
        i = i * c;
    }
    ------------------------------------------------------------
    for (int i = n; i > 0; i = i / c) {
        // some O(1) expressions
    }
    // can be write above code like
    int i = N;
    while (i > 0) {
        // some O(1) expressions
        i /= 2;
    }

    ------------------------------------------------------------
    or same as

    // Recursive function
    void recurse(n)
    {
        if (n == 0)
            return;
        else {
            // some O(1) expressions
        }
        recurse(n - 1);
    }
    ------------------------------------------------------------
    for (int i = 1; i <= n; i = i + 1) {  -> example of binary search
        n = n / 2;
        // some O(1) expressions
    }
    /*
    why binary search Time Complexity: Big-O(log n)?
    we take n-length array, each time we divide the n-length array by 2 which is n/2 because of half the array.

    in code,int arr[] = {7, 9, 10, 13, 19, 25, 29}; int key = 7;
    1st iteration,
        array   ->  7 9 10 13 19 25 29  =>  divide and take left half array   =>  7 9 10    (n/2 size)
    2nd iteration,
        array   ->  7 9 10   =>  divide and take left half array   =>  7    (n/4 size) -> (n/(2*2))
        ....
        ....

    k iteration,
         array   ->  7  => left only one variable in array  => (n/(2^k) size) [ here, k = total iteration]

    let, n/(2^k) = 1    [here, 1 is the length of array when last iteration happen]
        => n = 2^k
        => log(n) = log(2^k)
        => logn = k * 1
        => k = logn

    so, Time Complexity: Big-O(log n)
    /*




5. Logarithmic Time Complexity Big-O(nLog n):
    The Time Complexity of a single loop is considered as O(n).
    The time Complexity of a loop is considered as O(Logn) if the loop variables are divided/multiplied
    by a constant amount. And also for recursive calls in the recursive function, the Time Complexity
    is considered as O(Logn).

    here, we play nested loop. the outer loop Time Complexity is O(n) and the inner loop Time Complexity is O(Logn).

    for (int i = 1; i <= n; i += c) {
        for (int j = 1; j <= n; j = j * c) {
            // some O(1) expressions
        }
    }




6. Logarithmic Time Complexity Big-O(Log(Log n)):
    The Time Complexity of a loop is considered as O(LogLogn) if the loop variables are reduced/increased
    exponentially by a constant amount.

    // Here c is a constant greater than 1
    for (int i = 2; i <= n; i = pow(i, c)) {
        // some O(1) expressions
    }
    ------------------------------------------------------------
    // Here fun is sqrt or cuberoot or any other constant root
    for (int i = n; i > 1; i = fun(i)) {
        // some O(1) expressions
    }



7. Logarithmic Time Complexity Big-O((Log n)^2) -> Big-O(Log n * Log n):
    The time Complexity of a loop is considered as O(Logn) if the loop variables are divided/multiplied
    by a constant amount. And also for recursive calls in the recursive function, the Time Complexity
    is considered as O(Logn).

    int count = 0;
    // Executes O(Log n) times
    for (int i=1; i<=n; i=i*2)
    {
        // Executes O(Log n) times
        for (int j=1; j<=n; j=j*2)
        {
            count++;
        }
    }
    // Time Complexity: O(logn * logn) =O(n log^2 (n))



8. Function call statements
    for (int i = 1; i <= n; i += c) {
        fn1();
    }
    let fn1() has another n-length array with nested for loop so time complexity is Big-O(n * n^2) = Big-O(n^3).
    if fn1() time complexity is Big-O(log n). so final time complexity is Big-O(n log n).
    ------------------------------------------------------------
    if (isValid) {
      array.sort();  -> time complexity of sort() is Big-O(n log n)
      return true;
    } else {
      return false;
    }
    so time complexity is Big-O(n log n).
    note: without array.sort(), it will be Big-O(1)




9.How to combine the time complexities of consecutive loops?
    When there are consecutive loops, we calculate time complexity as a sum of the
    time complexities of individual loops.

    for (int i = 1; i <= m; i += c) {
        // some O(1) expressions
    }
    for (int i = 1; i <= n; i += c) {
        // some O(1) expressions
    }

    Time complexity of above code is O(m) + O(n) which is O(m + n)
    If m == n, the time complexity becomes O(n + n) which is O(n).
*/

int main()
{
    cout<<"*** calculate time complexity ***"<<endl<<endl;

//example 1:
    cout << "Hello World";
    /*
    Time Complexity: In the above code “Hello World” is printed only once on the screen.
    So, the time complexity is constant: O(1) i.e. every time a constant amount of time is required to
    execute code, no matter which operating system or which machine configurations you are using.
    */


//example 2:
    int n1 = 8;
    for (int i = 1; i <= n1; i++)
    {
        cout<<"Hello World !!!"<<endl;
    }
    /*
    Time Complexity: In the above code “Hello World !!!” is printed only n times on the screen,
    as the value of n can change.
    So, the time complexity is linear: O(n) i.e. every time, a linear amount of time is required to execute code.
    */
    //but here in below example
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
    int n2 = 8;
    for (int i = 1; i <= n2; i=i*2)
    {
        cout<<"Hello World !!!"<<endl;
    }
    // time complexity: O(log2(n))


//example 4:
    int n3 = 8;
    for (int i = 2; i <= n3; i=pow(i,2))
    {
        cout<<"Hello World !!!"<<endl;
    }
    // time complexity: O(log(log n))


//example 5: reverse an array
    int arr[] = {1,2,3,4,5,6}, start=0, end=5;

    for(int i=0; i<size(arr)/2; i++)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // n length array, we do swap (n/2). so, time complexity is Big-O(n/2) = Big-O(n)



//example 6: linear search
    int key = 5, arr2[] = {1,2,3,4,5,6};
    for(int i=0; i<size(arr2); i++)
    {
        if(arr2[i] == key)
        {
            cout<<"found the number."<<endl<<endl;
        }
    }
    // n-length array, we search every index to get the key. so, time complexity is Big-O(n)



//example 7:
    int N = 5;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }

    //same as
    for(int i=1; i<=N; i++)
    {
        for(int j=N; j>=i; j--)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
    /*
    here, outer loop i runs N times and inner loop j runs N times.
    so time complexity is big-o(N*N)->big-o(N^2).
    */



//example 8:
    int a=0, b=0, m=2, n=3;
    for(int i=0; i<m; i++)
    {
        a += rand();
    }
    for(int j=0; j<n; j++)
    {
        b += rand();
    }
    /*
    here is two for loop. first one is m-length array which time complexity is Big-O(m) and
    second one is n-length array which time complexity is Big-O(n).
    now we pick the worst of highest priority based time complexity.
    if we compare as priority based time complexity: Big-O(m) vs Big-O(n). both are same priority.
    so we take both as time complexity.
    both for loop is separated, so we add the complexity which is Big-O(m+n).

    note:
    1. nested for loop time complexity always do by production like Big-O(n*n) -> see example 7
    2. separate for loop time complexity always do by adding like Big-O(m+n)
    */


//example 9:
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a += j;
        }
    }
    for(int k=0; k<n; k++)
    {
        b += k;
    }
    /*
    here is two for loop. first one is n-length array nested loop which time complexity is Big-O(n*n) and
    second one is n-length array for loop which time complexity is Big-O(n).
    now we pick the worst of highest priority based time complexity.
    if we compare as priority based time complexity: Big-O(n^2) vs Big-O(n). both are not same priority.
    so we take Big-O(n^2) as time complexity for worst case.
    both for loop is separated, so we add the complexity which is Big-O(n^2).
    */


//example 10:
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<8; j++)
        {
            a += j;
        }
    }
    /*
    here, outer loop i runs N times and inner loop j runs 8 times.
    so time complexity is big-o(N*8)->big-o(N).
    */


//example 11: prime number or not
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
            cout<<"it is a prime number"<<endl;
    }

    // here, outer loop i runs 2 to n times. so time complexity is big-o(n-2)->big-o(n).






    cout<<"*** calculate space complexity ***"<<endl<<endl;

//example 1:
    int N1 = 5;
    for(int i=1; i<=N1; i++)
    {
        for(int j=1; j<=N1; j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
    //here, variable is N1. so space complexity is big-O(1).


//example 2:
    int arr[5] = {1,2,3,4,5,6};
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //here, array with fixed size 5. so space complexity is big-O(1).


//example 3:
    int n;
    cin>>n;
    int arr[n]; // vector <int> num(n);

    //or
    for(int i=0; i<5; i++)
    {
        int arr2[n]; //or vector <int> v(n);
        for(int j=0; j<5; j++)
        {

        }
    }

    //here, array with size n. so space complexity is big-O(n). cause we don't know the size.

}
