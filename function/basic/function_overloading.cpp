#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
*/
/*
    C++ Overloading (Function)
    If we create two or more members having the same name but different in number or type of parameter,
    it is known as C++ overloading.

    In C++, we can overload:
                methods,
                constructors and
                indexed properties
    It is because these members have parameters only.

    Types of overloading in C++ are:
        Function overloading
        Operator overloading
*/

int main()
{
    /*
    C++ Function Overloading
    Function Overloading is defined as the process of having two or more function with the same name,
    but different in parameters is known as function overloading in C++. In function overloading,
    the function is redefined by using either different types of arguments or a different number of arguments.
    It is only through these differences compiler can differentiate between the functions.
    The advantage of Function overloading is that it increases the readability of the program
    because you don’t need to use different names for the same action.


    Example 1: changing number of arguments of add() method

    // program of function overloading when number of arguments
    // vary
        #include <iostream>
        using namespace std;
        class Cal {
        public:
            static int add(int a, int b) { return a + b; }
            static int add(int a, int b, int c)
            {
                return a + b + c;
            }
        };
        int main(void)
        {
            Cal C; // class object declaration.
            cout << C.add(10, 20) << endl;
            cout << C.add(12, 20, 23);
            return 0;
        }
        //output:
        //    30
        //    55


        Example 2: when the type of the arguments vary.
        // Program of function overloading with different types of
        // arguments.
        #include <iostream>
        using namespace std;
        int mul(int, int);
        float mul(float, int);

        int mul(int a, int b) { return a * b; }
        float mul(double x, int y) { return x * y; }
        int main()
        {
            int r1 = mul(6, 7);
            float r2 = mul(0.2, 3);
            cout << "r1 is : " << r1 << endl;
            cout << "r2 is : " << r2 << endl;
            return 0;
        }

        //output:
        //    r1 is : 42
        //    r2 is : 0.6


    */
}
