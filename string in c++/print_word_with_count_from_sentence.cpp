#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string a = "Simple Questions To Check Your Software Testing Knowledge ";
    map<string, int> myMap;

    stringstream s(a);

    string word;

    while (s >> word)
        myMap[word]++;

    map<string, int>::iterator it;
    for (it = myMap.begin(); it != myMap.end(); it++)
        cout << it->first << " -> "
             << it->second << "\n";
    return 0;
}
