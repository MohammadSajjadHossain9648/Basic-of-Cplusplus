#include<iostream>
using namespace std;
/*
    to know more: https://java2blog.com/return-array-from-function-cpp/
                  https://codeforwin.org/2017/12/pass-return-array-function-c.html
                  https://devenum.com/how-to-return-an-array-from-a-function-in-c/
                  https://linuxhint.com/return-array-from-function-c/
                  https://www.digitalocean.com/community/tutorials/return-array-in-c-plus-plus-function
                  https://www.geeksforgeeks.org/how-to-return-a-local-array-from-a-cpp-function/
*/
/*
    what is static mean?
    When static keyword is used, variable or data members or functions can not be modified again.
    It is allocated for the lifetime of program. Static functions can be called directly by using class name.

    Static variables are initialized only once. Compiler persist the variable till the end of the program.
    Static variable can be defined inside or outside the function. They are local to the block.
    The default value of static variable is zero. The static variables are alive till the execution of the program.

    link: https://www.tutorialspoint.com/static-keyword-in-cplusplus
*/

/*
    Using a static array with pointers
    We can handle the abnormal behaviour of the normal array by declaring it as static. It is the only way
    to avoid warnings and unwanted results.
*/

//declaring function as a pointer type
int* staticArray()   // int staticArray[]() -> give error
{
    static int arr[] = {1, 2, 3, 4, 5};
    return arr;

    /*  can be write same way
    static int arr[5];

    arr[0] = 1 ;
    arr[1] = 2 ;
    arr[2] = 3 ;
    arr[3] = 4 ;
    arr[4] = 5 ;

    return arr;
    */
}
int main()
{
    //int arr[] = staticArray(); -> give error
    int* arr = staticArray();

    int i=0;
    cout<<"arr[]: ";
    while(arr[i] != '\0')
    {
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;

    delete[] arr;

    /*can be print this way
        cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;

        delete[] arr;
    */


    //output: arr[]: 1 2 3 4 5
}
