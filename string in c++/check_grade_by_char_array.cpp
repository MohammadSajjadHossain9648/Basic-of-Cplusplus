#include<iostream>
using namespace std;

int main()
{
    char grade[6] = {'A','B','C','D','E','F'};
    int gradeindex;
    int result;

    cout<<"enter you mark: ";
    cin>>result;

    switch(result)
    {
    case 80 ... 100:
        gradeindex=0;
        break;
    case 70 ... 79:
        gradeindex=1;
        break;
    case 60 ... 69:
        gradeindex=2;
        break;
    case 50 ... 59:
        gradeindex=3;
        break;
    case 40 ... 49:
        gradeindex=4;
        break;
    case 0 ... 39:
        gradeindex=5;
        break;
    }

    cout<<"your grade is "<<grade[gradeindex]<<endl;

}
