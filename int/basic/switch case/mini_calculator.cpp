#include<iostream>
using namespace std;

int main()
{
    char op;
    cout<<"Enter an operator (+, -, *, /, %): ";
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
    case '%':
        cout<<"value of "<<num1<<" % "<<num2<<" = "<<num1%num2<<endl<<endl;
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
