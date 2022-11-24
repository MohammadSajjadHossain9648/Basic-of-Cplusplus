#include <iostream>
using namespace std;

int main()
{
    int n,i=2;
    cout<<"input an integer: ";
    cin>>n;

    // we can use bool/int prime=0; as alternative and just change the value prime=1 into while or for loop and write If(prime==0/prime!=1/!prime) in last line.
    bool prime= true; //or, bool prime;

    if(n < 2) 
    {
        cout<<n<<" is not a prime number"<<endl;
        prime=false;
    }
    
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0){
            cout<<n<<" is not a prime number"<<endl;
            prime=false;
            break;
        }
    }
    if(prime)   // if write only bool prime in line 11, use if(!prime)
    { 
        cout<<n<<" is a prime number"<<endl;
    }


/*
    note:if we use this code in a project, dont use return 0 instead of break statement into while or for loop.
    because it stop running the project. we need to use break statement and bool(bool prime) value to check.

    int n,i=2;
    cout<<"input an integer: ";
    cin>>n;

    bool prime = true;
    
    if(n < 2) 
    {
        cout<<n<<" is not a prime number"<<endl;
        prime = false;
    }

    for(i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<n<<" is not prime number."<<endl;
            prime = false;
            break;
        }
        i+=1;
    }
    
    if(prime) //line means "if prime is true"
    { 
        cout<<n<<" is a prime number."<<endl;
    }

    //   or can use while loop instead of for loop

    while(i<=n/2){
        if(n%i==0){
            cout<<n<<" is not prime number."<<endl;
            prime = false;
            break;
        }
        i+=1;
    }

    if(prime) //line means "if prime is true"
    { 
        cout<<n<<" is a prime number."<<endl;
    }

*/



/*
    note: if number is not prime number, we can stop executing this program by return 0 instead of break statement writing into while or for loop.

    danger alert: if, we use this code in a project, dont use return 0 into while or for loop.
    because it stop running the project.


    int n,i=2;
    cout<<"input an integer: ";
    cin>>n;

    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0){
            cout<<n<<" is not a prime number"<<endl;
            return 0;
        }
    }
    cout<<n<<" is a prime number"<<endl;

    or same as,
    while(i<=n/2){
        if(n%i==0){
            cout<<n<<" is not prime number."<<endl;
            return 0; // here we direct end this program if integer is not prime
        }
        i+=1;
    }

    cout<<n<<" is a prime number."<<endl;
*/

}
