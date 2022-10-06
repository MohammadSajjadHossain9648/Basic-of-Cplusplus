#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter an integer: ";
    cin>>num;

    int answer=0;
    while(num!=0)
    {
        answer = (answer*10) + (num%10);
        num /= 10;
    }
    cout<<"reverse integer is "<<answer<<endl;

    //output:
    //    Enter an integer: 123
    //    reverse integer is 321

/*
    // without using length

    int answer=0;

    while(num!=0)
    {
        int digit=num%10;
        answer=answer*10+digit;
        num/=10;
    }
    cout<<"reverse integer is "<<answer<<endl;
*/


/*
    // with using for, length and pow function
    int length=floor(log10(num));  //input:123, length=2

    int answer=0;

    for(int i=length; i>=0; i--){
        int last_digit = num%10;
        answer += last_digit*pow(10,i);
        num /=10;
    }
    cout<<"reverse integer is "<<answer<<endl;
*/

/*
    // with using while, length and pow function
    int length=floor(log10(num));  //input:123, length=2

    int answer=0;

    while(num!=0)
    {
        int digit=num%10;
        num/=10;
        answer+=digit*pow(10,length);
        length--;
    }
    cout<<"reverse integer is "<<answer<<endl;
*/

}
