#include<iostream>
using namespace std;

int main()
{
    /*
        to know more:   https://www.geeksforgeeks.org/switch-statement-cc/
                        https://www.cprogramming.com/tutorial/lesson5.html
                        https://en.cppreference.com/w/cpp/language/switch
    */
    /*
        important things: switch case only take int and char type data.
    */

    int num;
    cout<<"enter a positive number between 0 to 10: ";
    cin>>num;

    switch(num)
    {
    case 0 ... 10:
        cout<<"input number is "<<num<<endl<<endl;
        break;
    default:
        cout<<"Invalid input number."<<endl<<endl;
        break;
    }
    //output:
    //    enter a positive number between 0 to 10: 5
    //    input number is 5


// another example check even or odd
    int num3;
    cout<<"enter a positive number: ";
    cin>>num3;

    switch(num3%2)
    {
    case 0:
        cout<<"input number "<<num3<<" is even."<<endl<<endl;
        break;
    case 1:
        cout<<"input number "<<num3<<" is even."<<endl<<endl;
        break;
    default:
        cout<<"Invalid input number."<<endl<<endl;
        break;
    }


// another example
    char op;
    cout<<"Enter an operator (+, -, *, /): ";
    cin>>op;

    int num1, num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1>>num2;


    switch(op)
    {
    case '+':
        cout<<"value of "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl<<endl;
        break;
    case '-':
        cout<<"value of "<<num1<<" - "<<num2<<" = "<<num1-num2<<endl<<endl;
        break;
    case '*':
        cout<<"value of "<<num1<<" * "<<num2<<" = "<<num1*num2<<endl<<endl;
        break;
    case '/':
        cout<<"value of "<<num1<<" / "<<num2<<" = "<<num1/num2<<endl<<endl;
        break;
    default:
        cout << "Error! The operator is not correct";
        break;
    }

    //output:
    //    Enter an operator (+, -, *, /): +
    //    Enter two numbers:
    //    10
    //    20
    //    value of 10 + 20 = 30


}
