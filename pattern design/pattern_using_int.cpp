#include<iostream>
using namespace std;

int main()
{
//    pattern 1:
//        1 2 3 4
//        1 2 3 4
//        1 2 3 4
//        1 2 3 4
    //or
//        1 4 9 16
//        1 4 9 16
//        1 4 9 16
//        1 4 9 16

    int r1;
    cout<<"enter row for pattern 1: "<<endl;
    cin>>r1;

    for(int i=1; i<=r1; i++)
    {
        for(int j=1; j<=r1; j++)
        {
            cout<<j<<" "; //1 2 3 4
            //cout<<j*j<<" "; //square: 1 4 9 16
        }
        cout<<endl;
    }

//    pattern 2:
//      6 5 4 3
//      6 5 4 3
//      6 5 4 3
//      6 5 4 3

    int r2;
    cout<<"enter row for pattern 2: "<<endl;
    cin>>r2;

    int num=6;
    for(int i=1; i<=r2; i++)
    {
        for(int j=1; j<=r2; j++)
        {
            cout<<num-j+1<<" ";    //note: for reverse the value use num-j+1 (num is highest number to start)
        }
        cout<<endl;
    }

//    pattern 3:
//    1
//    2 3
//    3 4 5
//    4 5 6 7
//    5 6 7 8 9

//  note: if you see first column is increment of 1st row and do this in inner loop, value=value+i+j-2
    int r3;
    cout<<"enter row for pattern 3: "<<endl;
    cin>>r3;

    for(int i=1; i<=r3; i++)
    {

        for(int j=1; j<=i; j++)
        {
            int num=1+i+j-2;
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    //or
    //    int r3;
    //    cout<<"enter row for pattern 3: "<<endl;
    //    cin>>r3;
    //
    //    for(int i=1; i<=r3; i++)
    //    {
    //        int num=i;
    //        for(int j=1; j<=i; j++)
    //        {
    //            cout<<num<<" ";
    //            num++;
    //        }
    //        cout<<endl;
    //    }

    // can we write this code without use int num; try this

    //    sol:
    //    int r3;
    //    cout<<"row: ";
    //    cin>>r3;
    //
    //    for(int i=1; i<=r3; i++)
    //    {
    //        for(int j=1; j<=i; j++)
    //        {
    //            cout<<j+i-1<<" ";
    //        }
    //        cout<<endl;
    //    }


//    pattern 4:
//        1
//        2 1
//        3 2 1
//        4 3 2 1
//        5 4 3 2 1

    int r4;
    cout<<"enter row for pattern 4: "<<endl;
    cin>>r4;

    for(int i=1; i<=r4; i++)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    //    or,
    //    for(int i=1; i<=r4; i++)
    //    {
    //        for(int j=1; j<=i; j++)
    //        {
    //            cout<<i-j+1<<" ";
    //        }
    //        cout<<endl;
    //    }



//    pattern 5:
//        1 2 3 4
//        5 6 7
//        8 9
//        10

    int r5;
    cout<<"enter row for pattern 5: "<<endl;
    cin>>r5;

    int number=1;
    for(int i=r5; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }



//    pattern 6:
//            1
//          1 2 1
//        1 2 3 2 1
//      1 2 3 4 3 2 1
//    1 2 3 4 5 4 3 2 1



    int r6;
    cout<<"enter row for pattern 6: "<<endl;
    cin>>r6;

    for(int i=1; i<=r6; i++)
    {
        for(int j=i; j<r6; j++)
        {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++)
        {
            cout<<k<<" ";
        }

        for(int l=1; l<i; l++)
        {
            cout<<i-l<<" ";
        }
        cout<<endl;
    }



//    pattern 7:
//    1 2 3 4 5 5 4 3 2 1
//    1 2 3 4 * * 4 3 2 1
//    1 2 3 * * * * 3 2 1
//    1 2 * * * * * * 2 1
//    1 * * * * * * * * 1

    int r7;
    cout<<"enter row for pattern 7: "<<endl;
    cin>>r7;

    for(int i=1; i<=r7; i++)
    {
        for(int j=1; j<=r7-i+1; j++)
        {
            cout<<j<<" ";
        }

        for(int k=2; k<i*2; k++)
        {
            cout<<"* ";
        }
        for(int l=i; l<=r7; l++)
        {
            cout<<r7-l+1<<" ";
        }
        cout<<endl;
    }

    //    or
    //    int r7;
    //    cout<<"enter row for pattern 7: "<<endl;
    //    cin>>r7;
    //    int x;
    //
    //    for(int i=1;i<=r7;i++){
    //        for(int j=1;j<=r7-i+1;j++){
    //            cout<<j<<" ";
    //            x=j;
    //        }
    //
    //        for(int k=2;k<i*2;k++){
    //            cout<<"* ";
    //        }
    //        for(int l=x;l>=1;l--){
    //            cout<<l<<" ";
    //        }
    //        cout<<endl;
    //    }



//    pattern 8:
//    9 8 7
//    6 5 4
//    3 2 1

    int r8;
    cout<<"enter row for pattern 8: "<<endl;
    cin>>r8;

    for(int i=r8;i>=1;i--){
        for(int j=1;j<=r8;j++){
            cout<<r8*i-j+1<<" ";
        }
        cout<<endl;
    }

}
