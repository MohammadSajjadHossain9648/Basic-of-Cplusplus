#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int array[]= {1,2,3,4};

    //compute the array size
    int size=sizeof(array)/sizeof(array[0]);

    //printing the array
    cout<<"array : ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl<<endl;




    //convert to an integer with same flow

    cout<<"**** convert this array to an integer with same flow ****"<<endl<<endl;

    //    int num1=0,i1=size-1;
    //    for(int i=0; i<size; i++)
    //    {
    //        num1+=array[i]*pow(10,i1);
    //        i1--;
    //    }
    //
    //    cout<<"an integer with same flow: "<<num1<<endl<<endl;
    /*
     how it works:
     0+1*10^3
     1000+2*10^2
     1200+3*10^1
     1230+4*10^0
    */

    //or same as
    int num1=0,i1=size-1;
    for(int i=0; i<size; i++)
    {
        num1=array[i]+num1*10;
    }

     /*
     how it works:
     1+0*10
     2+1*10
     3+12*10
     4+123*10
     */

    cout<<"an integer with same flow: "<<num1<<endl<<endl;



    //convert to an integer with reverse flow

    cout<<"**** convert this array to an integer with reverse flow ****"<<endl<<endl;

    int num2=0,i2=0;
    for(int i=0; i<size; i++)
    {
        num2+=array[i]*pow(10,i2);
        i2++;
    }

    cout<<"an integer with reverse flow: "<<num2<<endl<<endl;

    /*
     how it works:
     0+1*10^0
     1+2*10^1
     21+3*10^2
     321+4*10^3
     */

    //output:
    //    array : 1 2 3 4
    //
    //    **** convert this array to an integer with same flow ****
    //
    //    an integer with same flow: 1234
    //
    //    **** convert this array to an integer with reverse flow ****
    //
    //    an integer with reverse flow: 4321
}
