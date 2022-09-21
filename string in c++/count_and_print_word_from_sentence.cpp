#include <iostream>
#include <sstream>
#include<string>

using namespace std;

int main()
{

    string a = "Simple Questions To Check Your Software Testing Basic Knowledge";
    string word;

    // Used for breaking words
    stringstream s(a);
//    or same way, Used to split string around spaces.
//    istringstream s(a);

    cout<<"sentence: "<<a<<endl<<endl;

    int count = 0;
    cout<<"words are in sentence:"<<endl;
    while (s >> word) //store all word individually in string word
    {
        cout<<word<<endl; //show all words individually
        count++;
    }
//    or same way
//    while (getline(s, word, ' ')) { //store all word individually in string word
//        cout << word << endl; //show all words individually
//    }

    cout<<endl<<"Number of words in given string are: " << count<<endl;

//    To count the number of words in a given string, we first convert it to the stringstream object.
//    Then we count each word using an extraction operator (as it stops at each whitespace) in a loop.
//    Finally, we print the value of the total number of words.


}
