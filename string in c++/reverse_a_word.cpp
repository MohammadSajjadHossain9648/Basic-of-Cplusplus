#include<iostream>
#include<algorithm>
#include<limits>
using namespace std;

int main()
{
    /*
        to know more:
        https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/
        https://www.geeksforgeeks.org/program-to-reverse-words-in-a-given-string-in-c/#:~:text=Reverse%20the%20given%20string%20str,the%20STL%20function%20reverse().
    */
    string word, sentence;
    cout<<"enter a word: ";
    cin>>word;

    reverse(word.begin(), word.end());
    cout<<"reverse word: "<<word<<endl;

    //output:
    //    enter a word: google
    //    reverse word: elgoog
}

