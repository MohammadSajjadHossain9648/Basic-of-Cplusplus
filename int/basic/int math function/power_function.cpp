#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    /*
    pow(a, b) = a (to the power) b
    The syntax of the pow() function is: pow(double base, double exponent);
    and remember: always use #include<math.h> in header.
    */

    cout<<"pow(5,3): "<<pow(5,3)<<endl<<endl;

    int x=10,y=2;
    cout<<"pow("<<x<<","<<y<<"): "<<pow(x,y)<<endl<<endl;

    float a = 6.1, b = 4.8;
    float result1 = pow(a, b);
    cout<<"float value of pow("<<a<<","<<b<<"): "<<pow(a,b)<<endl<<endl;

    double c = 4.1, d = 2.8;
    double result2 = pow(c,d);
    cout<<"float value of pow("<<c<<","<<d<<"): "<<pow(c,d)<<endl<<endl;

    //output:
    //    pow(5,3): 125
    //
    //    pow(10,2): 100
    //
    //    float value of pow(6.1,4.8): 5882.79
    //
    //    float value of pow(4.1,2.8): 51.975
}

