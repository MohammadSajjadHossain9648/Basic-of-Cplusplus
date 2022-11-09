#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = a+1;

    if((a=3)==b){ //we can assign here variable value like a=3
        cout<<a;
    }
    else{
        cout<<a+2;
    }
    
    
    /*note:
    in if condition, a is assigned 3. and a==b is true. so it print 3.
    */
}
