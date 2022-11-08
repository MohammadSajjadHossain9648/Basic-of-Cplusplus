#include <iostream>
using namespace std;

int main()
{
    for(int i=0;i<=15;i++){
        cout<<i<<" ";
        if( i&1 ){
            continue;
        }
        i++;
    }
    cout<<endl;
}

