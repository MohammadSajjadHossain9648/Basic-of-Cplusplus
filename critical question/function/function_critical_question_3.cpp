#include <iostream>
using namespace std;

int update(int a)
{
    int answer = a*a;
    return answer;
}
int main()
{
    int a=10;
    a = update(a);
    cout<<a<<endl;
}
