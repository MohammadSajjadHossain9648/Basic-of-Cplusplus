#include <iostream>
using namespace std;

// global variable
int number = 5;

void display(){
    cout<<number<<endl;
}

int main()
{
/*
     to know more: https://www.geeksforgeeks.org/scope-of-variables-in-c/
*/

    cout<<"print global and local variable by calling a function without passing an argument"<<endl<<endl;

    cout<<"global variable, number = ";
    display();


    cout<<"local variable, number = ";
    // local variable with same name as that of global variable
	int number = 2; //if you write here int number = 2. in both display() show number = 5
	display();

    //output:
    //    print global and local variable by calling a function without passing an argument
    //
    //    global variable, number = 5
    //    local variable, number = 5

}
