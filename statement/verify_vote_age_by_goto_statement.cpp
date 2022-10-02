#include <iostream>
using namespace std;

int main()
{
label:
    int age;
    cout<<"Enter your age to vote: ";
    cin>>age;

    if(age<18)
    {
        cout<<"Sorry, you are not eligible to vote."<<endl;
        goto label;
    }
    else
    {
        cout<<"Congrats, you are eligible to vote."<<endl;
    }

    //output:
    //    Enter your age to vote: 12
    //    Sorry, you are not eligible to vote.
    //    Enter your age to vote: 11
    //    Sorry, you are not eligible to vote.
    //    Enter your age to vote: 18
    //    Congrats, you are eligible to vote.
}

