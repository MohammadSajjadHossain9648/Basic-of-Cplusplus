#include<iostream>
using namespace std;
/*
    to know more: https://www.programiz.com/cpp-programming/if-else
                  https://www.geeksforgeeks.org/decision-making-c-cpp/
                  https://learn.microsoft.com/en-us/cpp/cpp/if-else-statement-cpp?view=msvc-170
                  https://www.javatpoint.com/cpp-if-else
*/

bool isTrue()
{
    return true;
}

int main()
{
//example 1: if statement in C/C++
    int num1 = 10;
    if (num1 > 15)
    {
        cout<<"10 is greater than 15"<<endl;
    }
    cout<<"I am Not in if"<<endl;


//example 2: if-else statement in C/C++
    int num2 = 20;
    if (num2 < 15)
        cout<<"i is smaller than 15"<<endl;
    else
        cout<<"i is greater than 15"<<endl;

    //as same as using ternary operator
    //    int num2 = 20;
    //    (num2 < 15) ? (cout<<"i is smaller than 15"<<endl) : (cout<<"i is greater than 15"<<endl);


//example 3: nested-if in C++
    int num3 = 10;
    if(num3 != 0)
    {
        if(num3 > 0)
        {
            cout<<num3<<" is a positive number"<<endl;
        }
        else
        {
            cout<<num3<<" is a negative number"<<endl;
        }
    }
    else
    {
        cout<<num3<<" is zero"<<endl;
    }

    //another example
    num3 = 10;
    if (num3 == 10)
    {
        // First if statement
        if (num3 < 15)
            cout<<"num3 is smaller than 15"<<endl;

        // Nested - if statement
        // Will only be executed if
        // statement above is true
        if (num3 < 12)
            cout << "num3 is smaller than 12 too"<<endl;
        else
            cout << "num3 is greater than 15"<<endl;
    }

//example 4: if-else-if ladder in C/C++
    int num4 = 10;
    if(num4 > 0)
    {
        cout<<num4<<" is a positive number"<<endl;
    }
    else if(num4 == 0)
    {
        cout<<num4<<" is zero"<<endl;
    }
    else
    {
        cout<<num4<<" is a negative number"<<endl;
    }



//example 5:  Jump Statements (break & continue & goto) in C++
    int num5 = 8;

    for(int i=0; i<=10; i++)
    {
        if(i == 4)
        {
            continue; //means skip this iteration
        }
        if(num5 == i)
        {
            cout<<"found the number of 8"<<endl;
            break;
        }
    }

    // print 1 to 10 using goto statement
    int num6 = 1;
label:
    cout<<num6<<" ";
    num6++;

    if(num6<=10)
    {
        goto label;
    }
    cout<<endl;


//example 6: function call in if else condition
    if(isTrue())
    {
        cout<<"we are inside if condition"<<endl<<endl;
    }
    else
    {
        cout<<"we are inside else condition"<<endl<<endl;
    }
}
