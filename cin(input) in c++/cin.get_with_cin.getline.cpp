#include<iostream>
using namespace std;

int main()
{
    int x;
    string name;

    cout << "Type your favorite number: ";

    // The cin statement uses the x and leaves the \n
    // in the stream as garbage
    cin >> x;

    cout << "Type your name : ";

    // getline() reads \n and finish reading
    getline(cin, name);

    // In output only x will be displayed not name
    cout << name << ", your favourite number is : "<< x;

    //Type your favorite number: 7
    //Type your name : , your favourite number is : 7


//    solve:
//        cout << "Type your name: ";
//
//    // Usage of std::ws will extract all  the whitespace character
//    getline(cin >> ws, name);

                //or
//        #include<limits>
//        cin.ignore(numeric_limits<streamsize>::max(),'\n');
//        cout << "Type your name: ";
}
