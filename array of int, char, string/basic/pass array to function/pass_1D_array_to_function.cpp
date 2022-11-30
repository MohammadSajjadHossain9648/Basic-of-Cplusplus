#include<iostream>
#include<iomanip>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/how-arrays-are-passed-to-functions-in-cc/
                  https://www.educative.io/blog/pass-array-to-function-c-plus-plus
*/

void printArr(int arr[], int len) //same as void printArr(int *arr, int len)
{
    cout<<"function printArr ->int arr[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]*2<<setw(4);
    }
}

//method 2: change original array because we modify array in function
int *printArr2(int arr[], int len) //same as void printArr(int *arr, int len)
{
    for(int i=0; i<len; i++)
    {
        arr[i] *= 2;
    }
    return arr;
}

//method 3: without changing original array
int *printArr3(int arr[], int len) //same as void printArr(int *arr, int len)
{
    for(int i=0; i<len; i++)
    {
        arr[i] *= 2;
    }
    return arr;
}

int *printArr4(int arr[], int len) //same as void printArr(int *arr, int len)
{
    int new_arr[100];
    for(int i=0; i<len; i++)
    {
        new_arr[i] = arr[i] * 2;
    }
    return new_arr;
}

//method 4: Template Approach (Reference to Array)
template <size_t n> void printArr5(int (&arr4)[n])
{
    cout<<"\n\n\nfunction printArr5 ->int arr4[] = ";
    for(int i: arr4)
    {
        cout<<i<<setw(4);
    }
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(int);

    printArr(arr, len);

    cout<<"\nwithout modify array in printArr function:\nold -> int arr[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<setw(4);
    }



    //method 2: change original array because we modify array in function
    printArr2(arr, len);

    cout<<"\n\n\nafter modify array in printArr2 function:\nold -> int arr[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<setw(4);
    }



    //method 3: without changing original array
    int arr2[] = {1,2,3,4,5,6,7,8,9,10};
    len = sizeof(arr2)/sizeof(int);

    //create a new array and copy the old one
    int new_arr[100];
    copy(arr2, arr2+len, new_arr);
    printArr3(new_arr, len);

    cout<<"\n\n\nafter modify array in printArr3 function:\nold -> int arr2[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<arr2[i]<<setw(4);
    }

    cout<<"\nafter modify array in printArr3 function:\nnew -> int new_arr[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<new_arr[i]<<setw(4);
    }


    //another example of method 3 using pointer which same as above
    int arr3[] = {1,2,3,4,5,6,7,8,9,10};
    len = sizeof(arr3)/sizeof(int);

    int *new_arr2 = printArr4(arr3, len);

    cout<<"\n\n\nafter modify array in printArr4 function:\nold -> int arr3[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<arr2[i]<<setw(4);
    }

    cout<<"\nafter modify array in printArr4 function:\nnew -> int new_arr2[] = ";
    for(int i=0; i<len; i++)
    {
        cout<<new_arr[i]<<setw(4);
    }


    //method 4: Template Approach (Reference to Array)
    int arr4[] = {1,2,3,4,5,6,7,8,9,10};
    printArr5(arr4);


    //output:
    //    function printArr ->int arr[] = 2   4   6   8  10  12  14  16  18  20
    //    without modify array in printArr function:
    //    old -> int arr[] = 1   2   3   4   5   6   7   8   9  10
    //
    //
    //    after modify array in printArr2 function:
    //    old -> int arr[] = 2   4   6   8  10  12  14  16  18  20
    //
    //
    //    after modify array in printArr3 function:
    //    old -> int arr2[] = 1   2   3   4   5   6   7   8   9  10
    //    after modify array in printArr3 function:
    //    new -> int new_arr[] = 2   4   6   8  10  12  14  16  18  20
    //
    //
    //    after modify array in printArr4 function:
    //    old -> int arr3[] = 1   2   3   4   5   6   7   8   9  10
    //    after modify array in printArr4 function:
    //    new -> int new_arr2[] = 2   4   6   8  10  12  14  16  18  20
    //
    //
    //    function printArr5 ->int arr4[] = 1   2   3   4   5   6   7   8   9  10
}
