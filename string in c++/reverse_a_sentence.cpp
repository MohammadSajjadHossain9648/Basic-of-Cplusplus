#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    /*
        to know more: https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/
    */
    string sentence;

    cout<<"enter a sentence: ";
    getline(cin,sentence);

    reverse(sentence.begin(), sentence.end());

    cout<<"reverse sentence: "<<sentence<<endl;

    //output:
    //    enter a sentence: i am new
    //    reverse sentence: wen ma i
}

