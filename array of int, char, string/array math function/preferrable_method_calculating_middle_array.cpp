#include<iostream>
using namespace std;
/*
    to know more:
*/

/*
    Why (start + (end – start)/2) is preferable method for calculating middle of an array over ((start + end)/2) ?

    I am very sure that everyone is able to find middle index of array once you know start index and end index
    of array, but there are certain benefits of using (start + (end – start)/2) over ((start + end)/2),
    which are described below :

    The very first way of finding middle index is
            mid = (start + end)/2
    But there is problem with this approach, what if value of start or end or both is INT_MAX, it will cause
    integer overflow.

    The better way of calculating mid index is :
            mid = start + (end - start)/2

    Note : (end – start) may overflow if end < 0 or start < 0
*/
int main()
{
    int start = INT_MAX, end = INT_MAX;
    cout<<"start = "<<start<<endl;
    cout<<"end = "<<end<<endl;

    // method 1
    int mid1 = (start + end) / 2;
    cout<<"mid using (start + end)/2 = "<<mid1<<endl;

    // method 2
    int mid2 = start + (end - start) / 2;
    cout<<"mid using start + (end - start)/2 = "<<mid2<<endl;

    //output:
    //    start = 2147483647
    //    end = 2147483647
    //    mid using (start + end)/2 = -1
    //    mid using start + (end - start)/2 = 2147483647

    /*
    Note : (end – start) may overflow if end < 0 or start < 0
    If you see the output, by using second method you get correct output and first method fails to calculate mid
    and if you use this index (-1 in this case), it can cause segmentation fault because of invalid index of array.
    */

    /*
    start + (end – start)/2 also works even if you are using pointers :

    Example :
    Method 1

    int s = 2, e = 3;
    int* start = &s;
    int* end = &e;
    int* mid = (start + end) / 2;

    //show error: invalid operands of types ‘int*’ and ‘int*’ to binary ‘operator+’
        int *mid = (start + end)/2;

    Method 2(solution of Method 1):
    */
    int s = 2, e = 3;
    int* start1 = &s;
    int* end1 = &e;
    int* mid = start1 + (end1 - start1) / 2;
    cout<<"mid using start + (end - start)/2 = "<<mid<<endl;

    //output:
    // mid using start + (end - start)/2 = 0xc86c9ffd74
}
