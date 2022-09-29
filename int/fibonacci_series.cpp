#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"number of element to print: ";
    cin>>x;

    cout<<endl<<"Fibonacci series is given below:"<<endl;

    int a=0,b=1,nextNumber;
    cout<<a<<" "<<b<<" ";

    for(int i=2;i<x;i++){
        nextNumber=a+b;
        a=b;
        b=nextNumber;
        cout<<nextNumber<<" ";
    }
    cout<<endl;

    //output:
    //    number of element to print: 10
    //
    //    Fibonacci series is given below:
    //    0 1 1 2 3 5 8 13 21 34

    /*
        how to calculate fabonacci seires (next value = sum of back two values)
        1. we take input number of element to print.
        2. we take 0 and 1 as value of a,b. print it before for loop.int nextNumber is empty which is sum of a and b.
        3. loop start with 2 cause 0 and 1 is print already.
        4. after printing a and b value before loop, we need to print nextNumber into for loop which is sum of a and b.
        how to proceed the for loop?
         4.1. first add nextNumber by a and b
         4.2. then store the value of b in a which is a=b
         4.3. then update the nextNumber value in b which is b=nextNumber
         4.4. now we can print the nextNumber. or else, we can print after the 4.1.

         danger alert: never write 4.3. before 4.2. cause a never take b old value.
    */
    
}
