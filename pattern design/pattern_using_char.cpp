#include<iostream>
using namespace std;

int main()
{
//   char pattern 1:
//        a b c d
//        a b c d
//        a b c d
//        a b c d
    //or
//        A B C D
//        A B C D
//        A B C D
//        A B C D

    int r1;
    cout<<"enter row for pattern 1: "<<endl;
    cin>>r1;

    for(int i=1; i<=r1; i++)
    {
        char ch='a'; //char ch='A';
        for(int j=1; j<=r1; j++)
        {
            cout<<ch<<' ';
            ch++;
        }
        cout<<endl;
    }
    //    or
    //    int r1;
    //    cout<<"enter row for pattern 1: "<<endl;
    //    cin>>r1;
    //
    //    for(int i=1; i<=r1; i++)
    //    {
    //        for(int j=1; j<=r1; j++)
    //        {
    //            char ch='a'+j-1; //char ch='A';
    //            cout<<ch<<' ';
    //        }
    //        cout<<endl;
    //    }

//    pattern 2:
//            A
//          B B
//        C C C
//      D D D D
//    E E E E E

    int r2;
    cout<<"enter row for pattern 2: "<<endl;
    cin>>r2;

    for(int i=1; i<=r2; i++)
    {
        for(int j=i; j<r2; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++)
        {
            char ch='A'+i-1; //char ch='a';
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    //    or
    //    int r2;
    //    cout<<"enter row for pattern 2: "<<endl;
    //    cin>>r2;
    //
    //    char ch='A'; //char ch='a';
    //    for(int i=r2; i>=1; i--)
    //    {
    //        for(int j=1; j<i; j++)
    //        {
    //            cout<<"  ";
    //        }
    //        for(int k=r2; k>=i; k--)
    //        {
    //            cout<<ch<<" ";
    //        }
    //        ch++;
    //        cout<<endl;
    //    }

    //    or
    //    int r2;
    //    cout<<"enter row for pattern 2: "<<endl;
    //    cin>>r2;
    //
    //    for(int i=1; i<=r2; i++)
    //    {
    //        for(int j=i; j<r2; j++)
    //        {
    //            cout<<"  ";
    //        }
    //        for(int k=1; k<=i; k++)
    //        {
    //            char ch='A'+i-1; //char ch='a';
    //            cout<<ch<<" ";
    //        }
    //        cout<<endl;
    //    }



//    pattern 3:
//    A B C D
//    E F G H
//    I J K L
//    M N O P

    int r3;
    cout<<"enter row for pattern 3: "<<endl;
    cin>>r3;

    char ch='A';
    for(int i=1; i<=r3; i++)
    {
        for(int j=1; j<=r3; j++)
        {
            cout<<ch<<' ';
            ch++;
        }
        cout<<endl;
    }



//    pattern 4:
//        A B C D
//        B C D E
//        C D E F
//        D E F G

//  note: if you see first column is increment of 1st row and do this in inner loop, value=value+i+j-2

    int r4;
    cout<<"enter row for pattern 4: "<<endl;
    cin>>r4;

    for(int i=1; i<=r4; i++)
    {

        for(int j=1; j<=r4; j++)
        {
            char ch='A'+i+j-2;
            cout<<ch<<' ';
            ch++;
        }
        cout<<endl;
    }

    //    or
    //    int r4;
    //    cout<<"enter row for pattern 4: "<<endl;
    //    cin>>r4;
    //
    //    for(int i=1; i<=r4; i++)
    //    {
    //        char ch='A'+i-1;
    //        for(int j=1; j<=r4; j++)
    //        {
    //            cout<<ch<<' ';
    //            ch++;
    //        }
    //        cout<<endl;
    //    }



//    pattern 5:
//      A
//      B C
//      C D E
//      D E F G

//  note: if you see first column is increment of 1st row and do this in inner loop, value=value+i+j-2

    int r5;
    cout<<"enter row for pattern 5: "<<endl;
    cin>>r5;

    for(int i=1; i<=r5; i++)
    {
        for(int j=1; j<=i; j++)
        {
            char ch='A'+i+j-2;  //always remember this thing
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }


//    pattern 6:
//      A
//      B C
//      D E F
//      G H I J


    int r6;
    cout<<"enter row for pattern 6: "<<endl;
    cin>>r6;

    char ch='A'; //char ch='a';
    for(int i=1; i<=r6; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }


//    pattern 7:
//        D
//        C D
//        B C D
//        A B C D

        int r7;
        cout<<"enter row for pattern 7: "<<endl;
        cin>>r7;

        for(int i=1; i<=r7; i++)
        {
            for(int j=1; j<=i; j++)
            {
                char ch='D'-i+j;
                cout<<ch<<" ";
            }
            cout<<endl;
        }
}
