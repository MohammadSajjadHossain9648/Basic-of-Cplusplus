#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout<<"enter taka amount: ";
    cin>>amount;
    cout<<endl;

    cout<<"you get back total amount of note from bank: "<<endl<<endl;
    switch(0)
    {
    case 0:
        if(amount >= 1000)
        {
            cout<<"note of 1000 BDT: "<<(amount/1000)<<endl;
            amount %= 1000;
        }

    case 1:
        if(amount >= 500)
        {
            cout<<"note of 500 BDT: "<<(amount/500)<<endl;
            amount %= 500;
        }

    case 2:
        if(amount >= 200)
        {
            cout<<"note of 200 BDT: "<<(amount/200)<<endl;
            amount %= 200;
        }

    case 3:
        if(amount >= 100)
        {
            cout<<"note of 100 BDT: "<<(amount/100)<<endl;
            amount %= 100;
        }

    case 4:
        if(amount >= 50)
        {
            cout<<"note of 50 BDT: "<<(amount/50)<<endl;
            amount %= 50;
        }

    case 5:
        if(amount >= 20)
        {
            cout<<"note of 20 BDT: "<<(amount/20)<<endl;
            amount %= 20;
        }

    case 6:
        if(amount >= 10)
        {
            cout<<"note of 10 BDT: "<<(amount/10)<<endl;
            amount %= 10;
        }

    case 7:
        if(amount >= 5)
        {
            cout<<"note of 5 BDT: "<<(amount/5)<<endl;
            amount %= 5;
        }

    case 8:
        if(amount >= 2)
        {
            cout<<"note of 2 BDT: "<<(amount/2)<<endl;
            amount %= 2;
        }

    case 9:
        if(amount >= 1)
        {
            cout<<"coin of 1 BDT: "<<(amount/1)<<endl;
            amount %= 1;
        }
        break;

    default:
        cout<<"invalid amount"<<endl;
        break;
    }

}
