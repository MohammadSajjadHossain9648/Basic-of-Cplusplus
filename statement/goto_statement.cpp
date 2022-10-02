#include <iostream>
using namespace std;

int main()
{
    /*
        to know more: https://www.geeksforgeeks.org/exit-a-loop-in-c/?ref=rp
    */


    int i=1;
label:
    while(i<=10)
    {
        if(i == 5)
        {
            i++;
            goto label; // it is same as continue statement
        }
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    //or same as do while
    //label:
    //    do
    //    {
    //        if(i == 5)
    //        {
    //            i++;
    //            goto label; // it is same as continue statement
    //        }
    //        cout<<i<<" ";
    //        i++;
    //    }
    //    while(i<=10);

    //output:
    //  1 2 3 4 6 7 8 9 10

}

