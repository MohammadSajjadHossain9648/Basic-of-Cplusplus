#include<iostream>
using namespace std;

void findMaxMin(int array[], int size)
{
    int max_num = INT_MIN, min_num = INT_MAX; //always use this cause number can be positive or negative
    for(int i=0; i<size; i++)
    {
        max_num = max(max_num, array[i]);
        min_num = min(min_num, array[i]);
    }
    // as same as
    //    int max = 0, min = 100000;
    //    for(int i=0; i<size; i++){
    //        if(array[i] >= max){
    //            max = array[i];
    //        }
    //        if(array[i] <= min){
    //            min = array[i];
    //        }
    //    }
    cout<<"minimum number is "<<min_num<<endl<<endl;
    cout<<"maximum number is "<<max_num<<endl<<endl;
}

int main()
{
    int array[] = {1, 7, 5, -40, 3, 6, -22, 8};

    findMaxMin(array, size(array));

    //OUTPUT:
    //    minimum number is -40
    //
    //    maximum number is 8
}
