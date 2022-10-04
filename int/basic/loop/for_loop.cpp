#include <iostream>
using namespace std;

int main()
{
    /*
        to know more:
            https://www.guru99.com/cpp-for-loop.html
            https://www.geeksforgeeks.org/loops-in-c-and-cpp/

        syntex of for loop:
        for(initialization; condition; incr/decr){
                //code to be executed
        }
    */

    int x;
    cout<<"enter a number: ";
    cin>>x;

    for(int i=1; i<=x; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //as same as
    //    int i=1;
    //    for(;;){
    //        if(i<=x){
    //            cout<<i<<" ";
    //        }
    //        else{
    //            break;
    //        }
    //    }

    for(int i=x; i>=1; i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output:
    //    enter a number: 10
    //    1 2 3 4 5 6 7 8 9 10
    //    10 9 8 7 6 5 4 3 2 1



// nested for loop
    for(int i=1; i<=2; i++)
    {
        for(int j=1; j<=2; j++)
        {
            cout<<i<<" "<<j<<"\n";
        }
    }

    //output:
    //    1 1
    //    1 2
    //    2 1
    //    2 2
}

