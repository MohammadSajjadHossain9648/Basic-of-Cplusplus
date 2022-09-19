#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int b = a+1;

    if((a=3)==b){ //((a=2)==b) or ((a==3)==b) or ((a==2)==b)
        cout<<a;
    }
    else{
        cout<<a+1;
    }
}
