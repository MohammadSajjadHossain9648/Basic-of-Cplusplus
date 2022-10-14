#include<iostream>
#include<iomanip>
using namespace std;

/*
    to know more: https://www.educba.com/c-plus-plus-setw/
                  https://cplusplus.com/reference/iomanip/setw/
                  https://cplusplus.com/reference/iomanip/setfill/
                  https://cplusplus.com/reference/ios/ios_base/width/
                  https://www.geeksforgeeks.org/iomanip-setw-function-in-c-with-examples/
*/
/*
    width is same as C++ manipulator setw function stands for set width.
    fill is same as C++ manipulator setfill() function is used to specify a different character to fill
     the unused filed width of the value.

     note: same as setw and setfill
*/
int main()
{
    cout<<"*** using cout.width(int x) & cout.fill(character y) ***"<<endl<<endl;

//example 1:
    int num = 50;

    cout<<"Before setting the width: "<<endl;
    cout<<num<<endl;

    cout<<"Setting the width using width to 10:"<<endl;
    cout.width(10);
    cout<<num<<endl<<endl;
    // same as setw
    //    cout<<"Setting the width using setw to 10:"<<endl;
    //    cout<<setw(10);
    //    cout<<num<<endl;

    cout<<"Setting the width using width to 10 with fill:"<<endl;
    cout.width(10);
    cout.fill('*');
    cout<<num<<endl<<endl;

    // same as setw and setfill
    // cout<<setfill('*')<<setw(10)<<num<<endl<<endl;
    // or
    // cout<<"Setting the width using setw to 10 with setfill:"<<endl;
    // cout<<setw(10)<<setfill('*');
    // cout<<num<<endl<<endl;


    //output:
    //    *** using cout.width(int x) & cout.fill(character y) ***
    //
    //    Before setting the width:
    //    50
    //    Setting the width using width to 10:
    //            50
    //
    //    Setting the width using width to 10 with fill:
    //    ********50




// another example 2: indicates where width() we use in cout
    int x = 10, y=20;
    cout<<"two numbers are :";
    cout.width(5);
    cout<<left<<x<<y<<endl<<endl; //same as, cout<<x<<setw(5)<<y<<endl<<endl;

    cout.width(5);
    cout<<x<<right<<y<<endl<<endl;

    //same as
    //    cout<<x; cout.width(5); cout<<right<<y<<endl<<endl;
    //    cout.width(5); cout<<x; cout<<right<<y<<endl<<endl;

    //output:
    //two numbers are :10   20
    //10   20


// another example 3: Setting the width greater than the number of characters used in the output.
    string str="Hello Coder! Lets set the width";
    int a = str.length();
    cout.width(a+3);
    cout<<str<<endl<<endl;

    //output:
    //    Hello Coder! Lets set the width




// another example 4: width() function with for loop
    for(int row=1; row<=5; row++)
    {
        for(int col=1; col<=5; col++)
        {
            cout.width(5);
            cout<<row*col;
        }
        cout<<endl;
    }

    //output:
    //    1    2    3    4    5
    //    2    4    6    8   10
    //    3    6    9   12   15
    //    4    8   12   16   20
    //    5   10   15   20   25


    /*
    how setw() and setfill() works in code? which same as width and fill?
    let see the example 3: we take str which length is 31 and we call setw(31 + 3) so here total length is 34.
    so, here unused space length is 3.
    step 1: check x as width of setw(int x). then count variable length.
    step 2: length of space = variable length - x as width of setw(int x). thats much space puts in beginning line.

           or you can indicates where space you want to set (see example 2)
           cout<<left<<setw(5)<<x<<y<<endl<<endl;
           what happen here?
           left indicates the first variable(x) to set in left first, then rest of space will executes after x.

           cout<<x<<right<<setw(5)<<y<<endl<<endl;
           what happen here?
           right indicates the first variable(y) to set in right first, then rest of space will executes before y.

    step 3(optional): you can change space with character like * by using setfill('*')
    */
}
