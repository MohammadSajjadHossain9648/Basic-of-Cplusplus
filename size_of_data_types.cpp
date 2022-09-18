#include <iostream>
using namespace std;

int main() {
  cout << "size of data types in bytes" << endl;

  cout << "bool : " << sizeof(bool) << " bytes" << endl << endl;

  cout << "char : " << sizeof(char) << " bytes" << endl;
  cout << "signed char : " << sizeof(signed char) << " bytes" << endl;
  cout << "unsigned char : " << sizeof(unsigned char) << " bytes" << endl << endl;

  cout << "short int : " << sizeof(short int) << " bytes" << endl;
  cout << "signed short int : " << sizeof(signed short int) << " bytes" << endl;
  cout << "unsigned short int : " << sizeof(unsigned short int) << " bytes" << endl << endl;

  cout << "int : " << sizeof(int) << " bytes" << endl;
  cout << "signed int : " << sizeof(signed int) << " bytes" << endl;
  cout << "unsigned int : " << sizeof(unsigned int) << " bytes" << endl << endl;

  cout << "long int : " << sizeof(long int) << " bytes" << endl;
  cout << "long long int : " << sizeof(long long int) << " bytes" << endl;
  cout << "signed long int : " << sizeof(signed long int) << " bytes" << endl;
  cout << "unsigned long int : " << sizeof(unsigned long int) << " bytes" << endl << endl;

  cout << "float : " << sizeof(float) << " bytes" << endl;
  cout << "double : " << sizeof(double) << " bytes" << endl;
  cout << "long double : " << sizeof(long double) << " bytes" << endl << endl;

  cout << "string : " << sizeof(string) << " bytes" << endl;
}

