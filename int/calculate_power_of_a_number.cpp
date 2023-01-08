#include<iostream>
using namespace std;
/*
    understanding the efficient way of calculating power of a number: see method 2
         |-----> if x is even -> a^(x^1/2) * a^(x^1/2) )
    a^x --
         |-----> if x is odd -> a * a^(x^1/2) * a^(x^1/2)

    like an example: what is the value of 2^9?
    2^9 = 2 * 2^8
    2^8 = 2^4 * 2^4
        = (2^4)^2
    2^4 = 2^2 * 2^2
        = (2^2)^2
    2^2 = 2^1 * 2^1
        = (2^1)^2
    2^1 = 2 * 2^0 * 2^0
        = 2 * (2^0)^2

    after calculate value:
    2^0 = 1
    2^1 = 2 * (2^0)^2 = 2 * 1^2 = 2
    2^2 = (2^1)^2 = (2)^2 = 4
    2^4 = (2^2)^2 = (4)^2  = 16
    2^8 = (2^4)^2 = (16)^2  = 256
    2^9 = 2 * 2^8 = 2 * 256 = 512
*/
int calculatePower(int num2, int power2)
{
    int ans = 1;

    while(power2 > 0)
    {
        if((power2 & 1) == 1) //here, power2 = 1 and calculation: 2^1 = 2 * (2^0)^2 = 2 * 1^2 = 2 which mean ans multiply with num2
        {
            ans *= num2;
        }
        power2 = power2 >> 1;
        num2 *= num2;
    }
    return ans;
}

int main()
{
//method 1: using loop
    int num = 2, power = 10;

    int ans = 1;
    for(int i=0; i<power; i++)
    {
        ans *= num;
    }

    cout<<num<<" to the power "<<power<<" = "<<ans;


//method 2: effective way
    int num2 = 2, power2 = 10;
    cout<<"\n"<<num2<<" to the power "<<power2<<" = "<<calculatePower(num2, power2);

    //output:
    //    2 to the power 10 = 1024
    //    2 to the power 10 = 1024
}
