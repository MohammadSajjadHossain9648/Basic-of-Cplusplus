#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<iomanip>
using namespace std;

int evaluatePostfix(string &str)
{
    // Write your code here.
    int *nums = new int[10000];
    int index = 0;

    for(int i=0; i<str.size(); i++)
    {
        int begin_index = i, end_index = str.find(" ", i+1);
        int numLen = end_index - begin_index + 1;
        string num = str.substr(0, numLen);
        nums[index++] = stoi(num);
        i = end_index;
    }

    cout<<"\n\nnums: \n";
    for(int i=0; i<index; i++)
    {
        cout<<nums[i]<<endl;
    }
}

int main()
{
    string exp = "1 2 3 8"; //try this->  "1 2 + 3 8 - *" or "1 2 3 + * 8 -" or "2 3 1 * + 9 -" or "100 200 + 2 / 5 * 7 +"
    cout<<"\nPostfix expression: "<<exp<<endl;

    evaluatePostfix(exp);


    //output:
    //
    //    Postfix expression: 1 2 3 + * 8 -
    //
    //
    //    nums:
    //    1
    //    2
    //    3
    //    8

    /*
    time complexity: Big-O(n)
    space complexity: Big-O(n)
    */
}
