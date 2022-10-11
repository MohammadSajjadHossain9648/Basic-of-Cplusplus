#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    /*
        to know more:
        https://www.techcrashcourse.com/2017/01/cpp-program-to-convert-binary-to-decimal.html
        https://www.geeksforgeeks.org/program-binary-decimal-conversion/
        https://blog.devgenius.io/number-systems-and-their-conversions-using-c-5b1ea99f200b
        https://coderspacket.com/number-system-conversion
        https://www.geeksforgeeks.org/program-decimal-binary-conversion/
        https://www.geeksforgeeks.org/add-1-to-a-given-number/
    */


//decimal to binary conversion

    cout<<"**** decimal to binary conversion ****"<<endl<<endl;

    int num;
    cout<<"enter a decimal number: ";
    cin>>num;

    if(num>=0) //for positive decimal value
    {
        int answer=0,i=0;
        while(num!=0)
        {
            int last_digit=num%2;
            answer+=last_digit*pow(10,i);
            num/=2;
            i++;
        }
        cout<<"binary number is "<<answer<<endl<<endl;

        //as same as using bit wise operator for positive decimal number
        //        int num;
        //        cout<<"enter a decimal number: ";
        //        cin>>num;
        //
        //        int answer=0,i=0;
        //        while(num!=0)
        //        {
        //            int last_bit=num&1;
        //            answer+=last_bit*pow(10,i); //all time check last bit
        //            num=num>>1; //after check last bit just shift 1 bit
        //            i++;
        //        }
        //        cout<<"binary number by using bitwise operator(&,>>) is "<<binary2<<endl<<endl;

    }
    else  //for negative decimal value
    {
        int answer[16]= {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

        //1's complement
        int j=15;
        num*=-1;
        while(num!=0)
        {
            if(num%2==0)
            {
                answer[j]=1;
            }
            else
            {
                answer[j]=0;
            }

            num/=2;
            j--;
        }


        //2's complement just add 1
        for(int i=15; i>=0; i--)
        {
            if(answer[i]==0)
            {
                for(int j=i; j<=15; j++)
                {
                    if(answer[j]==0)
                    {
                        answer[j]=1;
                    }
                    else
                    {
                        answer[j]=0;
                    }
                }
                break;
            }
        }
        cout<<endl<<"binary number is ";

        for(int i=0; i<16; i++)
        {
            cout<<answer[i];
        }

        cout<<endl<<endl;
    }







//binary to decimal conversion

    cout<<"**** binary to decimal conversion ****"<<endl<<endl;

    int num2;
    cout<<"enter a binary number: ";
    cin>>num2;

    int answer2=0,i2=0;
    while(num2!=0)
    {
        int last_digit=num2%10;
        answer2+=last_digit*pow(2,i2);
        num2/=10;
        i2++;
    }
    cout<<"decimal number is "<<answer2<<endl<<endl;




// decimal to binary to show 32 bit of result
    cout<<"**** decimal to binary conversion ****"<<endl<<endl;

    int num1;
    cout<<"enter a decimal number: ";
    cin>>num1;

    cout<<endl<<"binary number is ";
    for (int i = 31; i >= 0; i--)
    {
        int k = num1 >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }

    //    output:
    //    enter a decimal number: 10
    //
    //    binary number is 00000000000000000000000000001010
    //
    //    enter a decimal number: -10
    //
    //    binary number is 11111111111111111111111111110110

}

