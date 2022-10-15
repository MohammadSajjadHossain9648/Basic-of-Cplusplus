#include<iostream>
using namespace std;

/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
                  https://www.programiz.com/cpp-programming/function
*/
/*
    A function prototype is simply the declaration of a function that
    specifies function's name, parameters and return type. It doesn't contain function body.
*/


//function prototype
int power(int a, int b); //can be write int power(int, int);

int main()
{
    int x,y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;

    int answer = power(x,y);
    cout<<endl<<"power of ("<<x<<" , "<<y<<"): "<<answer<<endl<<endl;
}

int power(int a, int b)
{
    int answer = 1;
    for(int i=1; i<=b; i++)
    {
        answer = answer * a;
    }
    return answer;
}
