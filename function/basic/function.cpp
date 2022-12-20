#include<iostream>
using namespace std;

/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
                  https://www.programiz.com/cpp-programming/function
*/
/*
    There are two most popular ways to pass parameters:

    Pass by Value: In this parameter passing method, values of actual parameters are copied to the
    function�s formal parameters and the two types of parameters are stored in different memory locations.
    So any changes made inside functions are not reflected in the actual parameters of the caller.

    Pass by Reference: Both actual and formal parameters refer to the same locations, so any changes
    made inside the function are actually reflected in the actual parameters of the caller.
*/

// declaration
//return_type function_name (parameters)
int power(int a, int b);

//1 -> even
//0 -> odd
bool isEven(int x)    //bool function
{
    if( x%2 == 0)
    {
        return 1; //return true
    }
    return 0; //return false

    //can be write
    //    if( x&1 )
    //    {
    //        return 0;
    //    }
    //    return 1;
}

int main()
{
    int x,y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;

    //power(x, y) -> function_name (arguments)
    int answer = power(x,y); //pass by value
    cout<<endl<<"power of ("<<x<<" , "<<y<<"): "<<answer<<endl<<endl;


//another example
    cout<<"Is "<<x<<" a even or odd number?"<<endl<<endl;
    if(isEven(x))
    {
        cout<<x<<" is a even number"<<endl<<endl;
    }
    else
    {
        cout<<x<<" is a odd number"<<endl<<endl;
    }

    //output:
    //    Enter two numbers:
    //    10
    //    3
    //
    //    power of (10 , 3): 1000
}


// definition
int power(int a, int b) //int function
{
    int answer = 1;
    for(int i=1; i<=b; i++)
    {
        answer = answer * a;
    }
    return answer;
}
