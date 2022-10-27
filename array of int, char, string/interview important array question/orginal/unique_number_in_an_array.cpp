#include<iostream>
#include<algorithm>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/find-unique-element-element-occurs-k-times-except-one/
                  https://leetcode.com/problems/unique-number-of-occurrences/
                  https://www.codingninjas.com/codestudio/problems/find-unique_625159
*/

void findUnion1(int arr[], int length)
{
    int answer = 0;
    for(int i=0; i<length; i++)
    {
        answer ^= arr[i];
    }
    cout<<"Unique number in given array is: "<<answer<<endl;
}

bool findUnion2(int arr[], int length)
{
    sort(arr, arr+length);

    int count_occurance[100], index=0;
    for(int i=0; i<length; i++)
    {
        int count = 0;
        for(int j=i; j<length; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        count_occurance[index] = count;
        index++;
        i += (count-1);
    }

    sort(count_occurance, count_occurance+index);

    for(int i=0; i<index; i++)
    {
        if(count_occurance[i] == count_occurance[i+1])
        {
            return false;
        }
    }

    return true;

    //without using sort of count_occurance
    //    for(int i=0; i<index; i++){
    //        for(int j=i+1; j<index; j++){
    //            if(count_occurance[i] == count_occurance[j]){
    //                return false;
    //            }
    //        }
    //    }
    //
    //    return true;
}
int main()
{
//for codestudio question
    int arr1[] = {2, 3, 1, 6, 3, 6, 2};
    int length1 = sizeof(arr1)/sizeof(int);
    findUnion1(arr1, length1);
    cout<<endl<<endl;

//for leetcode question
    int arr2[] = {-3,0,1,-3,1,1,1,-3,10,0};
    int length2 = sizeof(arr2)/sizeof(int);
    findUnion2(arr2, length2) ?  (cout<<"true"<<endl<<endl) : (cout<<"false"<<endl<<endl);



    //output:
    //    Unique number in given array is: 1
    //
    //
    //    true



    /*
     in question of https://www.codingninjas.com/codestudio/problems/find-unique_625159,
     here array size is 2M+1, M is input. like M=3, array size = 2*3+1 = 7
     and M number are present twice thats mean 3 numbers are present twice like 2 3 2 1 1 3
     and only one number is present once which is 4.

     step 1: we xor the all values then we get the unique number. ->2^3^4^2^1^1^3 = 4
     reason behind it: xor of 0 and 1 is always 1. otherwise 0.
     so same number xor is always 0 -> num^num = 0 and 0^num = num

     like an example
        100 -> 4
       ^100 -> 4
      -----------
        000 -> 0

        another one:
        100 -> 4
       ^000 -> 0
      -----------
        100 -> 4
    */
    /*
        in question of https://leetcode.com/problems/unique-number-of-occurrences/,
        arr = [1,2,2,1,1,3]
        Output: true
        Explanation: The value 1 has 3 occurrences,
                         value 2 has 2 occurrences
                         value 3 has 1 occurrences.

        hints:if, two values have the same number of occurrences, show false.
            otherwise if all are difference occurrences happen, show true.
    */
}
