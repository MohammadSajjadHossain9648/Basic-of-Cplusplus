#include<iostream>
using namespace std;

int main() {
  int a, b;
  /* cin never count space/tab/enter but left it as a garbage when we give
  input. like 5        2 or
  5

  2*/
  cin >> a >> b;
  cout << "value of a and b is " << a << " " << b << endl;

  /* only cin.get() count space/tab/enter when we give input like 5    2.*/
  int x, y;
  x = cin.get();
  y = cin.get();
  cout << "value of x and y is " << x << " " << y << endl;
  /*
    1 2
    value of a and b is 1 2
    1 2
    value of x and y is 10 49
  Explain what happen in above code:
  When we input 1-2/1--2/ 1-2/1---2, [- is equal to press space/tab/enter button],
  only one - stay as a garbage. We know that cin.get() take char. So x take the
  garbage one so that output is x=10 from ASCII table. Y take 1 as an input. So
  here, 1 is char. So that output is y=49 from ASCII table. Here, x and y are
  int and input value is char. So it is convert to char into int.

  How to solve this garbage issue? not found

  issues:
  console input:
  1.2 or 1’2
  value of a and b is 1 0
  value of x and y is -1 -1

*/
}
