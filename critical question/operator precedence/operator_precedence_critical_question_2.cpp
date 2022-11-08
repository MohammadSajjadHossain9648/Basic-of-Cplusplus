#include <iostream>
using namespace std;

int main()
{
    int a;
    a=1,2,3;
    cout<<"a = "<<a<<endl<<endl;

    a=(1,2,3);
    cout<<"a = "<<a<<endl<<endl;

    a=(1,2),3;
    cout<<"a = "<<a<<endl<<endl;
}
