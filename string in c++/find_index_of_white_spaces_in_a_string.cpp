#include<iostream>
using namespace std;

int main()
{
    string str = "1 2 + 3 8 - *";
    cout<<"\nstring: "<<str;

    cout<<"\n\nindex of spaces: ";
    for(int i=0; i<str.size(); i++)
    {
        int index = str.find(" ", i+1);
        i = index;
        if(i == -1)
        {
            break;
        }
        cout<<index<<" ";
    }

    //output:
    //
    //    string: 1 2 + 3 8 - *
    //
    //    index of spaces: 1 3 5 7 9 11
}
