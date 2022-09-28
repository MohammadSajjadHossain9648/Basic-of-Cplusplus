#include <iostream>
using namespace std;

int main()
{
// Assignment Operators (=, +=, -=, *=, /=, %=)
    cout<<"Assignment Operators (=, +=, -=, *=, /=, %=)"<<endl<<endl;

    int x = 5;
    cout << "Initial value of x is " << x <<endl;

    cout << "x += 5 gives :" << (x += 5) <<endl;

    cout << "x -= 5 gives : " << (x -= 5) <<endl;

    cout << "x *= 5 gives :" << (x *= 5) <<endl;

    cout << "x /= 5 gives : " << (x /= 5) <<endl;

    cout << "x %= 5 gives : " << (x %= 5) <<endl;
    // or can be write same as 
    //    x %= 5;
    //    cout << "x %= 5 gives : " << x <<endl; 

    // output:
    //    Assignment Operators (=, +=, -=, *=, /=, %=)
    //
    //    Initial value of x is 5
    //    x += 5 gives :10
    //    x -= 5 gives : 5
    //    x *= 5 gives :25
    //    x /= 5 gives : 5
    //    x %= 5 gives : 0
}

