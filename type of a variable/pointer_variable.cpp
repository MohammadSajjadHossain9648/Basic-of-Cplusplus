#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/cpp-pointers/#:~:text=Pointers%20are%20symbolic%20representations%20of,the%20main%20use%20of%20pointers.
                  https://www.guru99.com/cpp-pointers.html
                  https://www.simplilearn.com/tutorials/cpp-tutorial/pointers-in-cpp
                  https://www.scaler.com/topics/cpp/pointers-in-cpp/
                  https://www.softwaretestinghelp.com/pointers-in-cpp/
                  https://www.javatpoint.com/cpp-pointers
                  https://cplusplus.com/doc/tutorial/pointers/
                  https://www.programiz.com/cpp-programming/pointers
                  https://www.tutorialspoint.com/cplusplus/cpp_pointers.htm
*/
/*
    NULL Pointer
    If there is no exact address that is to be assigned, then the pointer variable can be assigned a NULL.
    It should be done during the declaration. Such a pointer is known as a null pointer. Its value is zero and is
    defined in many standard libraries like iostream.
*/
int main()
{
//initialize a pointer
    int num = 5;
    int *ptr = &num; //declare reference variables ptr for num as follows and &num gives num address
    cout<<"address of num: "<<num; // -> print num variable value
    cout<<"\nvalue of &num: "<<&num; // -> print num variable address

    cout<<"\nown address of &ptr: "<<&ptr; // -> print own ptr variable address
    cout<<"\naddress of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value

    //count size
    cout<<"\n\nsize of num: "<<sizeof(num); // only create a block of 4 bytes for memory allocation
    cout<<"\nsize of ptr: "<<sizeof(ptr); //pointer store value and address both with (4+4) byte = 8 byte

    /* can write line 24 using NULL pointer in line 31
    int *ptr = NULL; //or int *ptr = 0; ->if write after this line cout<<ptr; it print 0000000
    ptr = &num; //it stores num address

    or, can write
    int *ptr; //never write -> int *ptr = 0/NULL; ->cause next line print nothing
    *ptr = num; //it stores num value
    */

    /* bad practices ->never initialize this way

    // Wrong! and also show error
    // ptr is an address but num is not
    int num, *ptr;
    ptr = num;

    // Wrong!
    // &num is an address
    // *ptr is the value stored in &num
    int num, *ptr;
    *ptr = &num;

    // Correct!
    // ptr is an address and so is &num
    int num, *ptr;
    ptr = &num;

    // Correct!
    // both *ptr and num are values
    int num, *ptr;
    *ptr = num;
    */




// change the value with using pointer or without
// always remember that memory location is always remain same
    //without using pointer(change value at num variable)
    num = 10;
    cout<<"\n\nafter changing value of num:\naddress of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value

    //with using pointer(change value at address ptr)
    *ptr = 16; //ptr = 16; or &ptr = 16; -> it show error
    cout<<"\n\nafter changing num value by pointer:\naddress of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value


    //with using pointer(change value increase or decrease at address ptr)
    (*ptr)--;//same as num--;, but never write -> *ptr--; //ptr--; or &ptr--; -> it show error
    cout<<"\n\nafter changing num value by pointer:\naddress of ptr: "<<ptr; // -> print num variable address
    cout<<"\nvalue of *ptr: "<<*ptr; // -> print num variable value


    //output:
    //    value of num: 5
    //    address of &num: 0x36e01ff68c
    //    own address of &ptr: 0x6d785ffbf8
    //    value of ptr: 0x36e01ff68c
    //    address of *ptr: 5
    //
    //    size of num: 4
    //    size of ptr: 8
    //
    //    after changing value of num:
    //    address of ptr: 0x36e01ff68c
    //    value of *ptr: 10
    //
    //    after changing num value by pointer:
    //    address of ptr: 0x36e01ff68c
    //    value of *ptr: 16
    //
    //    after changing num value by pointer:
    //    address of ptr: 0x36e01ff68c
    //    value of *ptr: 15




//increment or decrement operator in pointer of int
    int x = 10;
    int *p1 = &x; //never write int *p1 = x++;, cause arr store in symbol table which never change
    (*p1)++;// never write p1++ or *p1++; -> print garbage like 10+1+4
    cout<<"\n\n\nvalue of *p1 is "<<*p1;
    cout<<"\nvalue of x is "<<x;

    //output:
    //    value of *p1 is 11
    //    value of x is 11




    //another example:
    int first = 6;
    int *p2 = &first;
    int *q2 = p2; //never write int *q2 = *p2; or int *q2 = &p2; cause p2 and q2 point to first value
    (*q2)++;
    cout<<"\n\nfirst = "<<first<<endl;

    //output: 7
    //or
    float f1 = 12.5;
    float p4 = 21.5;
    float* ptr3 = &f1;
    (*ptr3)++;
    *ptr3 = p4;
    cout<<*ptr3<<" "<<f1<<" "<<p4<<endl;


    //output: 21.5 21.5 21.5


    //or
    int *p3 = 0;
    int first1 = 110;
    *p3 = first1;
    cout<<"\n*p3 = "<<*p3;  //print nothing cause pointer p3 is null


//can call pointer of all data types
    int    *i;    // a pointer to integer
    double *d;    // a pointer to double
    float  *f;    // a pointer to float
    char   *ch;     // a pointer to a character



//Pointers of Variables
    int *p; //same as int * p or int* p;
}
