#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/references-in-c/
                  https://www.javatpoint.com/cpp-references
                  https://www.softwaretestinghelp.com/references-in-cpp/
                  https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-reference
                  https://www.educative.io/answers/reference-variables-and-memory-address-of-variables-in-cpp
                  https://www.tutorialspoint.com/what-is-a-reference-variable-in-cplusplus#:~:text=Reference%20variable%20is%20an%20alternate,used%20to%20declare%20reference%20variable.
                  https://www.cs.fsu.edu/~myers/c++/notes/references.html

    for more details: github:\code in c++ part 2\pointer & reference\Reference
*/
/*
    reference variable is almost same as initialize a pointer.
    Reference variable is an alternate name of already existing variable. It cannot be changed to refer another
    variable and should be initialized at the time of declaration and cannot be NULL. The operator �&� is used
    to declare reference variable.
*/
/*
    what is reference variable?
    A reference variable is one that refers to the address of another variable. It represents the name of another
    variable, location, or value. Once you initialize the variable references, that variable will be referred to
    using the variable name or reference name.
    The variable reference is nothing but an alternate name for the already existing variable.

    The reference operators:
    & is the address-of operator, and can be read simply as "address of"


    for an example:
    int num = 5;
    int &ptr = num; //declare reference variables ptr for num as follows.
    cout<<num; // -> print num variable address
    cout<<ptr; // -> print num variable value

    what happen in above code?
    when we create int num, a block create for int num with memory address like hexadecimal form(start 0x......)
    in memory and store value 5.
        ---
        |5|
        ---
        num -> address is 0x7fff5fbff8ac

    after create a pointer like int ptr with reference operator(&), it use to store the same value and same address
    of num variable.

    see the model below:
            num                                 ptr
            |                                     |
            |                                     |
            |         -------------------         |
            |-------> | 5(value of num) | <-------|
                      -------------------
                0x7fff5fbff8ac(address of num)
*/
/*
    note and remember:
    1)reference variable use to store the same value and same address of existing variable.(see the above model)
    2)A pointer can be declared as void but a reference can never be void.
    for example:
        int a = 10;
        void* aa = &a; // it is valid
        void& ar = a;  // it is not valid
*/
int main()
{
    //it is same as initialize a pointer but different cause it is called reference variable:
    int num = 5;
    int &ptr = num; //ptr is a reference to num

    cout<<"\n\nvalue of num: "<<num; // -> print num variable value
    cout<<"\naddress of &num: "<<&num; // -> print num variable address
    cout<<"\nvalue of ptr: "<<ptr; // -> print num variable value
    cout<<"\naddress of &ptr: "<<&ptr; // -> print num variable address



// change the value with using reference variable or without
// always remember that memory location is always remain same

    //without using reference variable(change value at num variable)
    num = 10;
    cout<<"\n\nafter changing value of num:\nvalue of ptr/num: "<<ptr; // -> print num variable value
    cout<<"\naddress of &ptr/&num: "<<&ptr; // -> print num variable address

    //with using reference variable(change value at reference variable ptr)
    ptr = 15; //*ptr = 15; or &ptr = 15; -> it show error
    cout<<"\n\nafter changing num value by reference variable ptr:\nvalue of ptr/num: "<<ptr; // -> print num variable value
    cout<<"\naddress of &ptr/&num: "<<&ptr; // -> print num variable address


    //output:
    //
    //    value of num: 5
    //    address of &num: 0xac7ddffb74
    //    value of ptr: 5
    //    address of &ptr: 0xac7ddffb74
    //
    //    after changing value of num:
    //    value of ptr/num: 10
    //    address of &ptr/&num: 0xac7ddffb74
    //
    //    after changing num value by reference variable ptr:
    //    value of ptr/num: 15
    //    address of &ptr/&num: 0xac7ddffb74



//another example
    int num2 = 5;
    int &ptr1 = num2; //ptr1 is a reference to num2
    int &ptr2 = ptr1; //same as int &ptr2 = num2; ptr2 is a reference to ptr1

    cout<<"\n\nvalue of num2: "<<num2; // -> print num2 variable value
    cout<<"\naddress of &num2: "<<&num2; // -> print num2 variable address
    cout<<"\nvalue of ptr: "<<ptr1; // -> print num2 variable value
    cout<<"\naddress of &ptr: "<<&ptr1; // -> print num2 variable address
    cout<<"\nvalue of ptr: "<<ptr2; // -> print num2 variable value
    cout<<"\naddress of &ptr: "<<&ptr2; // -> print num2 variable address


    //change value any of reference variable cause all point one block
    ptr2 = 10; //same as ptr1 = 10 or num2 = 10
    cout<<"\n\nafter change value:\nvalue of num2: "<<num2; // -> print num2 variable value
    cout<<"\naddress of &num2: "<<&num2; // -> print num2 variable address
    cout<<"\nvalue of ptr: "<<ptr1; // -> print num2 variable value
    cout<<"\naddress of &ptr: "<<&ptr1; // -> print num2 variable address
    cout<<"\nvalue of ptr: "<<ptr2; // -> print num2 variable value
    cout<<"\naddress of &ptr: "<<&ptr2; // -> print num2 variable address

    //output:
    //
    //    value of num2: 5
    //    address of &num2: 0xbce27ffdcc
    //    value of ptr: 5
    //    address of &ptr: 0xbce27ffdcc
    //    value of ptr: 5
    //    address of &ptr: 0xbce27ffdcc
    //
    //    after change value:
    //    value of num2: 10
    //    address of &num2: 0xbce27ffdcc
    //    value of ptr: 10
    //    address of &ptr: 0xbce27ffdcc
    //    value of ptr: 10
    //    address of &ptr: 0xbce27ffdcc


    /*  show error if we write this way

    error1 -> ptr declared as reference but not initialized
    int &ptr;
    ptr = num; //or, &ptr = num;


    error2 -> 'int& ptr' previously declared here cause one reference variable reference only one existing variable
    int num1=11;
    int num2=67;
    int &ptr=num1; // y reference to num1
    int &ptr=num2; // y reference to num2, but throws a compile-time error.
    */
}
