#include<iostream>
#include<sstream>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string a = "the sky is blue";
    stack<string> myStack;

    //divide all word from sentence
    stringstream s(a);

    string words;
    int count = 0;

    // now store all separate words
    while (s >> words) //here store all words in string words
    {
        myStack.push(words);
        count++;
    }

    //print the reverse sentence
    for(int i=0; i<count; i++)
    {
        cout<<myStack.top()<<" ";
        myStack.pop();
    }
    cout<<endl;

    return 0;

    //output:
    //    blue is sky the
}
