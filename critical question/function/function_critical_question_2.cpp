#include <iostream>
using namespace std;

int update(int a)
{
    a -= 5;
    return a;
}
int main()
{
    int a=10;
    update(a);
    cout<<a<<endl;
}
