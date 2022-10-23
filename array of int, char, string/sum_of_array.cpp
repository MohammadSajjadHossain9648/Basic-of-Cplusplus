#include<iostream>
using namespace std;

int main()
{
    int x[5] = { 1, 2, 3, 4, 5 };
    int sum = 0;
    int length = sizeof(x) / sizeof(int);
    for(int i=0; i<length; i++)
    {
        sum += x[i];
    }
    cout<<"sum of all element of array: "<<sum<<endl<<endl;

    //output:
    //    sum of all element of array: 15
}
