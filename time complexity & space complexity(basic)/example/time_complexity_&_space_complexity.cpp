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
                cout<<i<<" "<<j<<"\n";
            }
        }
    here, outer loop i runs N times and inner loop j runs N times. so time complexity is big-o(N*N)->big-o(N^2).
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
int main()
{
    // time complexity example
//example 1:
    cout << "Hello World";
    return 0;
    /*
    Time Complexity: In the above code “Hello World” is printed only once on the screen.
    So, the time complexity is constant: O(1) i.e. every time a constant amount of time is required to
    execute code, no matter which operating system or which machine configurations you are using.
    */


//example 2:
    int i, n = 8;
    for (i = 1; i <= n; i++)
    {
        cout << "Hello World !!!"<<endl;
    }
    /*
    Time Complexity: In the above code “Hello World !!!” is printed only n times on the screen,
    as the value of n can change.
    So, the time complexity is linear: O(n) i.e. every time, a linear amount of time is required to execute code.
    */

    //but in here
    for (i = 1; i <= 8; i++)
    {
        cout << "Hello World !!!"<<endl;
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
    int i1, n1 = 8;
    for (i1 = 1; i1 <= n1; i1=i1*2)
    {
        cout << "Hello World !!!"<<endl;
    }
    // time complexity: O(log2(n))


//example 5:
    int i2, n2 = 8;
    for (i2 = 2; i2 <= n2; i2=pow(i2,2))
    {
        cout << "Hello World !!!"<<endl;
    }
    // time complexity: O(log(log n))






    //space complexity example
//example 1:
    int N1 = 5;
    for(int i=1; i<=N1; i++)
    {
        for(int j=1; j<=N1; j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
    //here, variable is N1. so space complexity is O(1).

//example 2:
    int arr[5] = {1,2,3,4,5,6};
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //here, array with fixed size 5. so space complexity is O(1).


//example 3:
    int n;
    cin>>n;
    int arr[n];

    //or
    for(int i=0; i<5; i++)
    {
        int arr2[n];
        for(int j=0; j<5; j++)
        {

        }
    }

    //here, array with size n. so space complexity is O(n). cause we don't know the size.
}
