#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter an integer: ";
    cin>>n;

    int length=floor(log10(n))+1; //int length = trunc(log10(n))+1;
    cout<<"length of the integer value, "<<n<<" is "<<length<<endl<<endl;

    //output:
    //    enter an integer: 123456
    //    length of the integer value, 123456 is 6



// another way can find the length of an int

    int size=0,num=n;
    while(num>0)
    {
        num/=10;
        size++;
    }
    cout<<"length of the integer value, "<<n<<" is "<<size<<endl<<endl;

    // output:
    //    length of the integer value, 123456 is 6
}
