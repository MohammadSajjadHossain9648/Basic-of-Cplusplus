#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    string binaryNumber;
    cout<<"enter an binary number: ";
    getline(cin,binaryNumber);

    cout <<"decimal number is "<<stoi(binaryNumber, 0, 2)<<endl;

    //output:
    //    enter an binary number: 1000
    //    decimal number is 8
}
