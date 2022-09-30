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


	//note if you want to use global variable in local area, just use ::number1(:: ->scope resolution operator) instead of number1
	cout<<"number1 outside of main function/ globally declare is :"<<::number1<<endl;

	//output:
    //    global variable number1 is 5 & local variable number1 is 2
    //    number1 inside main function is :2
    //
    //    number1 outside of main function/ globally declare is :5


/*
    int number1=8; //here gives error cause same block cannot declare same variable with same name.
    cout<<"number1 inside main function is :"<<number1<<endl<<endl;

    but you can change the value by this
    note: next time when we use number1 value, it always use number1=8. cause number1 previous value is deleted forever.
*/
    number1=8;
    cout<<"number1 inside main function is :"<<number1<<endl<<endl;

    //output: number1 inside main function is :8



// another example of local variable
	int number = 10;

	while(1){
        int number = 5;
        cout<<"number inside while loop or number inside a block: "<<number<<endl<<endl;
        int number2=10;
        break;
	}

	cout<<"we are outside of while loop now"<<endl;
	cout<<"number inside main function or number inside a block: "<<number<<endl<<endl;

	/*it show error cause number2 is not initialized inside main function
	cout<<"number2 initialize inside while loop or number inside a block: "<<number2<<endl<<endl;
    */

    //output:
    //
    //    number inside while loop or number inside a block: 5
    //
    //    we are outside of while loop now
    //    number inside main function or number inside a block: 10




// another example of local variable

    if(1){
        int num=1;
        if(1){
            int num=2;
            if(1){
                cout<<"num value is inside if statement: "<<num<<endl; //it take before num value
            }
        }
    }

    /* or same as before
        if(1){
        int num=1;
        if(1){
            int num=2;
            if(1){
                if(1){
                    cout<<"num value is inside if statement: "<<num<<endl; //it take last num value
                }
            }
        }
    }
    */

    //output:
    //    num value is inside if statement: 2


}
