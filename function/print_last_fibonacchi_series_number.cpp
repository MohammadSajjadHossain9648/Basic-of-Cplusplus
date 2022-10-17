#include<iostream>
using namespace std;

void fibonacci(int num)
{
    int a=0,b=1, newNumber=0;
    int i=2;
    while(i<num)
    {
        newNumber = a+b;
        a=b;
        b=newNumber;
        i++;
    }
    cout<<"last fibonacci series number is "<<b<<endl;
}
int main()
{
    int num;
    cout<<"enter total number of fibonacci series: ";
    cin>>num;

    fibonacci(num);

    //output:
    //    enter total number of fibonacci series: 5
    //    last fibonacci series number is 3
}
