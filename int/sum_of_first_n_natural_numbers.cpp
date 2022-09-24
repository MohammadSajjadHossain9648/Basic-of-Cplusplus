#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"input range: ";
    cin>>n;

    int i=1,sum=0;
    while(i<=n)
    {
        sum=sum+i;
        i+=1;
    }

    cout<<"the sum is "<<sum<<endl;
    return 0;
/*
    note: how to count sum of 1 ....n in mathematically like n=5
    Sn  =  n(n+1)/2
        =  (5*(1+5))/2
        =  15

*/
}
