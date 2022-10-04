#include <iostream>
using namespace std;

int main()
{
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
}

