#include<iostream>
using namespace std;

int countPrimes(int num)
{
    if(num < 2)
    {
        return 0;
    }

    //2 is prime number
    int count = 1;
    cout<<"\nvalue: "<<2<<" -> count = "<<count;

    //only count prime number between all odd numbers. Cause all even numbers is divisible by 2.
    for(int i=3; i<=num; i=i+2)
    {
        bool prime = true;
        for(int j=3; j<i; j=j+2)
        {
            if(i%j == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
        {
            count++;
            cout<<"\nvalue: "<<i<<" -> count = "<<count;
        }
    }

    return count;
}

int main()
{
    int num;
    cout<<"enter an integer: ";
    cin>>num;

    int count = countPrimes(num);
    cout<<"\ntotal number of prime numbers: "<<count;
}
