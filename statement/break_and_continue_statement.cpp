#include <iostream>
using namespace std;

int main()
{
    /*
        to know more: https://www.geeksforgeeks.org/exit-a-loop-in-c/?ref=rp
    */

//  break statement is a loop control statement which is used to terminate the loop.

    cout<<"**** break statement ****"<<endl<<endl;

    for(int i=1; i<=10; i++)
    {
        if(i == 5)
        {
            break;
        }
        cout<<i<<" ";
    }
    cout<<endl;

    //same as before
    //    int i=1;
    //    while(1)
    //    {
    //        if(i == 5)
    //        {
    //            break;
    //        }
    //        cout<<i<<" ";
    //        i++;
    //    }
    //    cout<<endl;

    // output:
    //    **** break statement ****
    //
    //    1 2 3 4



// the continue statement is used to skip the current iteration of the loop
// and the control of the program goes to the next iteration.

    cout<<"**** continue statement ****"<<endl<<endl;
    for(int i=1; i<=5; i++)
    {
        cout<<"hi,";
        cout<<"person "<<i<<endl;
        continue;
        cout<<"hello, friend"; // it's unreachable and always skip this line. cause this after continue statement
    }
    cout<<endl;

    //output:
    //    hi,person 1
    //    hi,person 2
    //    hi,person 3
    //    hi,person 4
    //    hi,person 5


    for(int i=1; i<=10; i++)
    {
        if(i == 5)
        {
            continue;
        }
        cout<<i<<" ";
    }
    cout<<endl<<endl;

    //output:
    //    **** continue statement ****
    //
    //    1 2 3 4 6 7 8 9 10

    //as same as using goto statement with while loop
    int i=1;
label:
    while(i<=10)
    {
        if(i == 5)
        {
            i++;
            goto label;
        }
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    //output:
    //  1 2 3 4 6 7 8 9 10
}

