#include <iostream>
using namespace std;

int main()
{
    int a;
    char b;
    string c;
    float d;
    double e;

    cout<<"int :";
    cin>>a;
    cout<<"char :";
    cin>>b;
    cout<<"string :";
    cin>>c;
    cout<<"float :";
    cin>>d;
    cout<<"double :";
    cin>>e;
    cout<<endl;

    cout<<"int :"<< a <<endl;
    cout<<"char :"<< b <<endl;
    cout<<"string :"<< c <<endl;
    cout<<"float :"<< d <<endl;
    cout<<"double :"<< e <<endl;

    /*Remember two things always, cin can only take single char as input and rest of char leave as garbage.
    cin never count space/tab/enter button press when we give input like 5        2 or
    5

    2
    But one issue is, space/tab/enter make a garbage in program which effect on next input variable to store that garbage.
    That’s not expected.
    */

    /*
    issue 1:
    input:
    int :123
    char :abcd
    string :float :12.36
    double :222

    output:
    int :123
    char :a
    string :bcd
    float :12.36
    double :222
    in here, why not cin taking string because b take value a as store. so rest of char store in string as a garbage.

    issue 2:
    int :12
    char :a
    string :i am new/ iam new
    float :double :

    output:
    int :12
    char :a
    string :i
    float :0
    double :6.95156e-310
    in here, why not cin taking float and double because c take value i as store of single char.
    so rest of word store in float and double as a garbage.

    issue 3:
    int :12 23
    char :string :float : i / i am new
    double :

    output:
    int :12
    char :2     / .
    string :3   /23
    float :0
    double :6.95164e-310
         or
    int :12.23
    char :string :float :1.23
    double :1.64

    output:
    int :12
    char :.
    string :23
    float :1.23
    double :1.64
    in here, why not cin taking char and string because a take value 12 as store of single char.
    so rest of word store in float and double as a garbage.

    */
}
