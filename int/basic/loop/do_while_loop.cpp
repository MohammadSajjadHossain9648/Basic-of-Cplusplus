#include <iostream>
using namespace std;

int main()
{
    cout<<"**** do while loop ****"<<endl<<endl;

    int j1=1;
    do{
        cout<<j1<<" ";
        j1++;
    }while(j1<=10);
    cout<<endl;

    int j2=10;
    do{
        cout<<j2<<" ";
        j2--;
    }while(j2>=1);
    cout<<endl;

    //output:
    //    **** do while loop ****
    //    1 2 3 4 5 6 7 8 9 10
    //    10 9 8 7 6 5 4 3 2 1
}

