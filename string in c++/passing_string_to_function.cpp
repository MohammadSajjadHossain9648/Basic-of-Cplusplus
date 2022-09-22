#include<iostream>
#include<limits>
using namespace std;

void display_by_char(char c[]); // void display_by_char(char c);; ->if sent a character
void display_by_string(string d);

int main(){
    char a[100]; // char a; ->if sent a character
    string b;

    cout<<"sentence 1: ";
    cin.get(a,100); // cin>>a; ->if sent a character

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout<<"sentence 2: ";
    getline(cin,b);

    display_by_char(a);
    display_by_string(b);

}

void display_by_char(char c[]){  // void display_by_char(char c);; ->if sent a character
    cout<<"enter sentence by char variable: "<<c<<endl;
}
void display_by_string(string d){
    cout<<"enter sentence by string variable: "<<d<<endl;
}
