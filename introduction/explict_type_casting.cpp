#include<iostream>
#include<math.h>
using namespace std;

int main(){
    //Explicit type casting means conversion of data types by losing its original meaning.
  int result, x=10, y=3;
  result = x/y;
  cout<<result<<endl;
  //In this case, after the division performed on variables x and y the result stored in the variable “result” will be in an integer format.
  //Whenever this happens, the value stored in the variable “result” loses its meaning.
  //Because it does not consider the fraction part which is normally obtained in the division of two numbers.
}
