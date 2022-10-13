#include<iostream>
using namespace std;

int main()
{
    /*
        to know more: https://www.geeksforgeeks.org/nested-switch-statement-in-c/
                      https://www.brainkart.com/article/C---Nested-switch_36598/
    */
    int num;
    cout<<"enter a positive number: ";
    cin>>num;
    cout<<endl;

    switch(num)
    {
    case 0 :
        cout<<"input number is zero."<<endl<<endl;
        break;
    default:
        cout<<"input number is non-zero."<<endl<<endl;
        int check = num % 2;
        switch(check)
        {
        case 0:
            cout<<num<<" is a even number."<<endl<<endl;
            break;
        case 1:
            cout<<num<<" is a odd number."<<endl<<endl;
            break;
        }
    }

    //output:
    //    enter a positive number: 10
    //
    //    input number is non-zero.
    //
    //    10 is a even number.

}
