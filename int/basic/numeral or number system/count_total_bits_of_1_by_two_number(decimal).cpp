#include<iostream>
#include<math.h>
using namespace std;

int binary_base = 2;

int countBit(int a, int b){
    int count=0;
    while(a){
        if( (a % binary_base) == 1 ){
            count++;
        }
        a /= binary_base;
    }
    while(b){
        if( (b % binary_base) == 1 ){
            count++;
        }
        b /= binary_base;
    }
    return count;
}
int main()
{
    int a, b;
    cout<<"Enter two number: "<<endl;
    cin>>a>>b;

    cout<<"total bits of 1: "<<countBit(a,b)<<endl;

    //output:
    //    Enter two number:
    //    10
    //    3
    //    total bits of 1: 4
}
