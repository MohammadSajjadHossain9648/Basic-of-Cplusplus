#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/functions-in-cpp/
*/
/*
    note: rightmost value must define or set as default argument. then you can set second rightmost value as default
    argument.
*/

// here b = 20 is a default argument. if you sent no value of b, it works with default value as argument.
int printNumbers(int a, int b = 20)
{
    cout<<"a = "<< a <<endl, cout<<"b = "<< b <<endl<<endl;
}

//another example
//show error -> void printArray(int *arr, int start=0, int end) -> see note above
void printArray(int *arr, int start, int end=5)
{
    cout<<"\n\nint arr[] = ";
    for(int i=start; i<end; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout<<"printNumbers(10): "<<endl;
    printNumbers(10);

    cout<<"printNumbers(10, 40): "<<endl;
    printNumbers(10, 40);

    //output:
    //    printNumbers(10):
    //    a = 10
    //    b = 20
    //
    //    printNumbers(10, 40):
    //    a = 10
    //    b = 40


//another example
    int arr[] = {1,2,3,4,5,6,7,8,9,10};

    printArray(arr, 0, 10);
    printArray(arr, 0);



    //output:
    //
    //    int arr[] = 1 2 3 4 5 6 7 8 9 10
    //
    //    int arr[] = 1 2 3 4 5
}
