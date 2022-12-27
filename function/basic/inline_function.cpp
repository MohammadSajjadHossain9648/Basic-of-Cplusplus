#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/inline-functions-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/inline-function-in-cpp
*/
/*
    always remember that inline means one line.
    note:
    1. Inline functions that are small have higher efficiency and better results than the lengthier inline functions.
    So, try to keep your inline functions small or one line in length. if you write 2-3 lines, inline function maybe
    work or not. if more than 3, inline function didnot work.
    2. no extra memory usage and no function call happen or overhead
*/
int cube(int x)
{
    return x*x*x;
}
inline int cube2(int x)
{
    return x*x*x;
}

int main()
{
    cout<<"\nwithout using inline function:\nThe cube of 3 is: "<<cube(3);
    cout<<"\n\nwith using inline function:\nThe cube of 3 is: "<<cube2(3);

    //output:
    //
    //    without using inline function:
    //    The cube of 3 is: 27
    //
    //    with using inline function:
    //    The cube of 3 is: 27

    /* what difference between cube and cube2 function?
    in cube function:
    we take main() which store in stack and then we take cube() which store in stack. so that we need memory storage.
    when we sent 3 in cube function, we actually sent a copy of value 3 which we call pass by value. so we need extra
    memory.

    in cube2 function:
    we take main() which store in stack and then we didnot take cube2() which store in stack. cause it is inline
    function. so that cube2 is not store in stack and no need call cube2 function.
    see the visualization during compilation,
    in code -> cout<<"\n\nwith using inline function:\nThe cube of 3 is: "<<cube2(3);
    after compiler behave like -> cout<<"\n\nwith using inline function:\nThe cube of 3 is: "<<3*3*3;
    */
}
