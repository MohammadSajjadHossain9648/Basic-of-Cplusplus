#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/sort-c-stl/
                  https://www.digitalocean.com/community/tutorials/sort-in-c-plus-plus      
*/
int main()
{
    int array[]= {1,7,5,4,3,6,2,8};
    int array2[]= {1,7,5,4,3,6,2,8};
    
    //compute the size
    int size=sizeof(array)/sizeof(int);
    int size2=sizeof(array2)/sizeof(int);

    //print the array
    cout<<"array[] = {}: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }

    //Sorting in Ascending Order
    sort(array, array+size);
    
    //Sorting in Descending Order
    sort(array2, array2+size2, greater<int>());
    /* can be write Sorting in Descending Order by using a lambda function
        sort(array2, array2+size2, [](int &e1, int &e2){ return e1>e2; } );
    */

    //print the reverse array in Ascending Order
    cout<<endl<<"sort array in Ascending Order: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }
    cout<<endl;
    
    //print the reverse array in Descending Order
    cout<<endl<<"sort array in Descending Order: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<"  ";
    }
    cout<<endl;

    //output:
    //    array[] = {}: 1  7  5  4  3  6  2  8
    //    sort array in Ascending Order: 1  2  3  4  5  6  7  8
    //    sort array in Descending Order: 8  7  6  5  4  3  2  1
}
