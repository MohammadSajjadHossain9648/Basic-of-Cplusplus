#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
*/

// here b = 20 is a default argument. if you sent no value of b, it works with default value as argument.
int printNumbers(int a, int b = 20)
{
    cout<<"a = "<< a <<endl, cout<<"b = "<< b <<endl<<endl;
}

int main()
{
    cout<<"printNumbers(10): "<<endl;
    printNumbers(10);

    cout<<"printNumbers(10, 40): "<<endl;
    printNumbers(10, 40);

    //output:
    //    printNumbers(10):
    //    a = 10
    //    b = 20
    //
    //    printNumbers(10, 40):
    //    a = 10
    //    b = 40
}
