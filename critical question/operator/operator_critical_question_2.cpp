#include <iostream>
using namespace std;

int main()
{
    int a=1, b=2;
    if(a-- >0 && ++b >2 ) // or if(a-- >0 || ++b >2 )
    {
        cout<<"it is inside if condition"<<endl;
    }
    else
    {
        cout<<"it is outside if condition"<<endl;
    }

    cout<<"a="<<a<<", b="<<b<<endl;
}
