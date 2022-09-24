#include <iostream>
using namespace std;

int main()
{
    int n,i=2;
    cout<<"input an integer: ";
    cin>>n;

    while(i<=n/2){
        if(n%i==0){
            cout<<n<<" is not prime number."<<endl;
            return 0; // here we direct end this code if integer is not prime
        }
        i+=1;
    }

    cout<<n<<" is a prime number."<<endl;

/*
    if we use in a project, dont use return 0 in while loop.
    because it stop running the project.

    int n,i=2;
    cout<<"input an integer: ";
    cin>>n;
    bool flag= false; // we can use int flag=0; as alternative and just change the value flag=1 in while condition and flag==0 in if condition

    while(i<=n/2){
        if(n%i==0){
            cout<<n<<" is not prime number."<<endl;
            flag=true;
            break;
        }
        i+=1;
    }

    //    or can use for loop instead of while loop
//    for(i=2;i<=n/2;i++){
//        if(n%i==0){
//            cout<<n<<" is not prime number."<<endl;
//            flag=true;
//            break;
//        }
//        i+=1;
//    }
//

    if(!flag){ //line means "if flag is not true"
        cout<<n<<" is a prime number."<<endl;
    }

*/

}
