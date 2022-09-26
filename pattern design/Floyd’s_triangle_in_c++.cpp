#include<iostream>
using namespace std;

int main()
{
/*
note:
All half traingle pattern is like Floyd's triangle pattern whatever it is inverted or not.
Floyd's triangle is a triangular array of natural numbers, used in computer science education.
It is named after Robert Floyd. It is defined by filling the rows of the triangle with consecutive numbers, starting with a 1 in the top left corner:

link: https://www.geeksforgeeks.org/cpp-program-to-print-floyds-triangle/

                                1
                                2	3
                                4	5	6
                                7	8	9	10
                                11	12	13	14	15
*/

//   Floyd's triangle:
//        1
//        2	3
//        4	5 6
//        7	8 9	10
//        11 12	13 14 15

    int r;
    cout<<"enter row for Floyd's triangle: "<<endl;
    cin>>r;

    int num=1;
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
