#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/arithmetic-progression/
                  https://www.geeksforgeeks.org/program-print-arithmetic-progression-series/
*/
/*
    what is Arithmetic progression?
    A sequence of numbers is called an Arithmetic progression if the difference between
    any two consecutive terms is always the same.

    Given first term (a), common difference (d) and a integer n of the Arithmetic Progression
    series, the task is to print the series.

    Approach :
    We know the Arithmetic Progression series is like = 2, 5, 8, 11, 14 …. …
    In this series 2 is the stating term of the series .
    Common difference = 5 – 2 = 3 (Difference common in the series).
    so we can write the series as :
    t1 = a1 + (1-1) * d
    t2 = a1 + (2-1) * d
    t3 = a1 + (3-1) * d
    .
    .
    .
    tn = a1 + (n-1) * d
*/

int printProgression(int a, int d, int n)
{
    for(int i=1; i<=n; i++)
    {
        int num = a + (i - 1) * d;
        cout<<num<<" ";
    }
}

int main()
{
    int a, d, n;
    cout<<"input first term (a): ";
    cin>>a;
    cout<<"input common difference (d): ";
    cin>>d;
    cout<<"input integer n of the Arithmetic Progression series: ";
    cin>>n;

    cout<<endl<<"Arithmetic Progression series: ";
    printProgression(a, d, n);

    //output:
    //    input first term (a): 5
    //    input common difference (d): 2
    //    input integer n of the Arithmetic Progression series: 10
    //
    //    Arithmetic Progression series: 5 7 9 11 13 15 17 19 21 23
}
