#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string a = "Simple Questions To Check Your Software Testing Knowledge ";
    map<string, int> myMap;

    //divide all word from sentence
    stringstream s(a);

    string words;

    // now store all separate words
    while (s >> words) //here store all words in string words
    {
        myMap[words]++; //it seems like myMap[string][count]
    }
    cout<<endl;

    for(auto i: myMap)
        cout<<i.first<<" -> "<< i.second<<"\n";
    
    /* same as above for loop
    map<string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); it++)
        cout<< it->first <<" -> "<< it->second <<"\n";
    */
    
    return 0;
    
    //output:
    //    Simple Questions To Check Your Software Testing Knowledge
    //    Check -> 1
    //    Knowledge -> 1
    //    Questions -> 1
    //    Simple -> 1
    //    Software -> 1
    //    Testing -> 1
    //    To -> 1
    //    Your -> 1
}
