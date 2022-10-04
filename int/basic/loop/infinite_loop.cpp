#include <iostream>
using namespace std;

int main()
{
/*                      What about an Infinite Loop?

        An infinite loop (sometimes called an endless loop ) is a piece of coding that
        lacks a functional exit so that it repeats indefinitely.
        An infinite loop occurs when a condition is always evaluated to be true.
        Usually, this is an error.
*/

    for(;;){
        cout<<"This loop will run forever."<<endl;
    }


/*
    // This is an infinite for loop as the condition
    // given in while loop will keep repeating infinitely

    int i=-1; // never give positive number cause when i=0, it stop run.
    while (i != 0)
    {
        i-- ;
        cout<<"This loop will run forever."<<endl;
    }
*/


/*
    // This is an infinite for loop as the condition
    // given in while loop is "true"

    //if while(false),the loop didnot start and it print nothing.
    while (true) // or same as while(1)
    {
        cout<<"This loop will run forever."<<endl;
    }

    can be write this way with do while
    do{
        cout<<"This loop will run forever."<<endl;
    }while(true) // or same as while(1)
*/
}

