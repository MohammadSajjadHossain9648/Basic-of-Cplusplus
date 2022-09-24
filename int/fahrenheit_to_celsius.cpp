#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"input fahrenheit (in degrees): ";
    cin>>n;

    double x;
    x = (n-32)*5/9.0;

    cout<<"celsius (in degrees): "<<x<<endl;
    return 0;
/*
    note: how to convert fahrenheit to celsius
     x°C = (n°F − 32) × 5/9
         = (60°F − 32) × 5/9
         = 15.556°C

*/
}
