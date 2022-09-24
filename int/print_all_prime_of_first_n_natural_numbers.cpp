#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"find all prime number between natural number n."<<endl;
    cout<<"input an natural number: ";
    cin>>n;
    int prime[n],k=0;

    for(int j=2; j<=n; j++) //check all number that is prime or not
    {
        bool flag=false;
        int i=2;
        while(i<=j/2) //check one by one  that is prime or not
        {
            if(j%i==0)
            {
                flag=true;
                break;
            }
            i=i+1;
        }
        if(!flag) //store value if a number is prime
        {
            prime[k] = j;
            k=k+1;
        }
    }

    cout<<"prime numbers : ";
    for(int i=0; i<k; i++)
    {
        cout<<prime[i]<<" ";
    }
    //    console:
    //    find all prime number between natural number n.
    //    input an natural number: 10
    //    prime numbers : 2 3 5 7


/*  or, can be write this way
    int n;
    cout<<"find all prime number between natural number n."<<endl;
    cout<<"input an natural number: ";
    cin>>n;

    for(int j=2; j<=n; j++)
    {
        bool flag=false;
        int i=2;
        while(i<=j/2)
        {
            if(j%i==0)
            {
                flag=true;
                break;
            }
            i=i+1;
        }
        if(!flag)
        {
            cout<<j<<" is a prime number."<<endl;
        }
    }
    //    console:
    //    find all prime number between natural number n.
    //    input an natural number: 5
    //    2 is a prime number.
    //    3 is a prime number.
    //    5 is a prime number.

*/
}

