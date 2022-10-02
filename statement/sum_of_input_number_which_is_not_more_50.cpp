#include <iostream>
using namespace std;

int main()
{
    int i=1,x,sum=0;
    cout<<"enter 5 numbers which value is not more than 50"<<endl;
    while(i<=5)
    {
        cin>>x;
        if(x>50)
        {
            i++;
            cout<<x<<" is more than 50"<<endl;
            continue;
        }
        sum+=x;
        i++;
    }
    cout<<endl<<"sum of numbers: "<<sum<<endl;

    //output:
    //    enter 5 numbers which value is not more than 50
    //    10
    //    20
    //    30
    //    50
    //    60
    //    60 is more than 50
    //
    //    sum of numbers: 110
}
