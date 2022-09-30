#include <iostream>
using namespace std;

// global variable
int number1 = 5;

int main()
{
/*
     to know more: https://www.geeksforgeeks.org/scope-of-variables-in-c/
*/

    // local variable with same name as that of global variable
	int number1 = 2;
	cout<<"global variable number1 is 5 & local variable number1 is 2 "<<endl;
	cout<<"number1 inside main function is :"<<number1<<endl;


	//note if you want to use global variable in local area, just use ::number1 (:: ->scope resolution operator) instead of number1
	cout<<"number1 outside of main function/ globally declare is :"<<::number1<<endl;

	//output:
    //    global variable number1 is 5 & local variable number1 is 2
    //    number1 inside main function is :2
    //
    //    number1 outside of main function/ globally declare is :5


}
