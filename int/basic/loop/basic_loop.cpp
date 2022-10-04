#include <iostream>
using namespace std;

int main()
{
// For loop
    cout<<"**** For loop ****"<<endl<<endl;
    int x;
    cout<<"enter a number: ";
    cin>>x;

    for(int i=1; i<=x; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //as same as
    //    int i=1;
    //    for(;;){
    //        if(i<=x){
    //            cout<<i<<" ";
    //        }
    //        else{
    //            break;
    //        }
    //    }

    for(int i=x; i>=1; i--)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output:
    //    enter a number: 10
    //    1 2 3 4 5 6 7 8 9 10
    //    10 9 8 7 6 5 4 3 2 1


//nested for loop
    for(int i=1; i<=2; i++)
    {
        for(int j=1; j<=2; j++)
        {
            cout<<i<<" "<<j<<"\n";
        }
    }

    //output:
    //    1 1
    //    1 2
    //    2 1
    //    2 2




// while loop
    cout<<"**** while loop ****"<<endl<<endl;

    int i1=1;
    while(i1<=10){
        cout<<i1<<" ";
        i1++;
    }
    cout<<endl;

    int i2=10;
    while(i2>=1){
        cout<<i2<<" ";
        i2--;
    }
    cout<<endl;

    //output:
    //    **** while loop ****
    //    1 2 3 4 5 6 7 8 9 10
    //    10 9 8 7 6 5 4 3 2 1


//nested while loop
    int i3=1;
    while(i3<=2){
        int i4=1;
        while(i4<=2){
            cout<<i3<<" "<<i4<<endl;
            i4++;
        }
        i3++;
        cout<<endl;
    }

    //output:
    //    1 1
    //    1 2
    //
    //    2 1
    //    2 2





// do while loop
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

