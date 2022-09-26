#include <iostream>
using namespace std;

int main()
{
    /*
    note: Full traingle pattern is like Pascal's triangle pattern whatever it is inverted or not.
    link:https://aperiodical.com/2021/12/pascals-triangle-and-its-secrets-introduction/
         https://favtutor.com/blogs/pascal-triangle-cpp
         https://www.geeksforgeeks.org/pascal-triangle/
                  1
                1   1
              1   2   1
            1   3   3   1
          1   4   6   4   1
    */

//  Pascal’s Triangle:
//              1
//            1   1
//          1   2   1
//        1   3   3   1
//      1   4   6   4   1

    int r;
    cout<<"enter row for pattern: "<<endl;
    cin>>r;

    for(int i=1; i<=r; i++)
    {
        int num=1;
        for(int j=i; j<r; j++)
        {
            cout<<" ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<num<<" ";
            num = num * (i-k) / k;
        }
        cout<<endl;
    }



}

