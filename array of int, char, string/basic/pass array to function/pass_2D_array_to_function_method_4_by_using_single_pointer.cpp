#include <iostream>
using namespace std;
/*
    to know more: https://www.scaler.com/topics/two-dimensional-array-in-cpp/
                  https://www.folkstalk.com/tech/how-to-pass-a-multidimensional-array-to-a-function-in-c-and-c-with-code-examples/
                  https://www.geeksforgeeks.org/pass-2d-array-parameter-c/
                  https://www.programiz.com/cpp-programming/passing-arrays-function
                  https://www.techiedelight.com/pass-2d-array-function-parameter-cpp/
                  https://www.digitalocean.com/community/tutorials/two-dimensional-array-in-c-plus-plus
                  https://java2blog.com/pass-2d-array-to-function-cpp/
*/
/*
    step to pass array
    method 1: When both dimensions are available globally (either as a macro or as a global constant).
    method 2: When only second dimension is available globally (either as a macro or as a global constant).
    method 3: If compiler is C99 compatible
    method 4: Using a single pointer
    method 5: Using the concept of pointer to an array
*/

// method 4: Using a single pointer
void print(int *arr, int r, int c)
{
    cout<<"\narr["<<r<<"]["<<c<<"]: \n";
    for(int row = 0; row < r; row++)
    {
        for(int column = 0; column < c; column++)
        {
            cout<<*((arr+row*c)+column)<<" "; //we write -> cout<<*((arr+row*c)+column) * 2<<" "; no effect on orginal array
        }
        cout<<endl;
    }
}

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; //it show error ->int arr[][]
    int r = sizeof(arr)/sizeof(arr[0]);
    int c = sizeof(arr[0])/sizeof(arr[0][0]);
    print( (int *)arr, r, c ); // this didnot change orginal array value, if we want to multiply by 2

    //output:
    //    arr[3][3]:
    //    1 2 3
    //    4 5 6
    //    7 8 9
}
