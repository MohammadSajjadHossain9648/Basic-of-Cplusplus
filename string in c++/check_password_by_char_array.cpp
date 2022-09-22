#include<iostream>
using namespace std;

int main(){
    //char array
    char system_password[]={'a','s','d','f'};
    char input_password[5];

//Note that when an array is used as a string, the last character is a null value represented by \0 like input_password[5];.
//This value does not have to be manually specified, but an array of 4 characters is, in fact, 5 characters long.

    cout<<"please enter the 4 digit password: ";
    cin>>input_password; //input:asdf output: match, if give asdfg, it will show error.
    // or,   cin.get(input_password, 5); //input:asdf output: match, if give asdfg, it will not show error because g is terminate here by '\0'.

    for (int i=0;i<4;i++){
        if(input_password[i] != system_password[i]){
            cout<<"Password didnot match."<<endl;
            return 0;
        }
    }
    cout<<"Password match"<<endl;
}
