#include <iostream>
#include<limits>
using namespace std;

int main()
{
    char line[20];
    cout << "Type a line terminated by 'n'" << endl;
    cin.getline( line, 20, 'n' );
    cout <<"output: " <<line;

    // Type a line terminated by 'n'
    //i am a good new gamer
    //output: i am a good
}

