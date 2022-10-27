#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
/*
    to know more: https://leetcode.com/problems/find-the-duplicate-number/
                  https://www.codingninjas.com/codestudio/problem-details/duplicate-in-array_893397
                  https://www.techiedelight.com/find-duplicate-element-limited-range-array/
                  https://www.geeksforgeeks.org/stdunique-in-cpp/

*/

duplicateNumber(int arr[], int len)
{
    int answer = 0;

    //xor all array element
    for(int i=0; i<len; i++)
    {
        answer ^= arr[i];
    }

    //xor again with range[1, N-1]
    for(int i=1; i<len; i++)
    {
        answer ^= i;
    }
    return answer;

}
int main()
{
    int arr[] = {1, 2, 3, 4, 4};

    int len = sizeof(arr)/sizeof(int);

    int answer = duplicateNumber(arr, len);
    cout<<"Duplicate number in given array: "<<answer<<endl<<endl;

    //output:
    //  Duplicate number in given array: 4

    /*
    in codeninja, You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1
    at least once. There is a single integer value that is present in the array twice.
    Your task is to find the duplicate integer value present in the array.

    here N = 5; so value range is 1 to 5-1=4 and one number is twice here.
    ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4.

    in code, first we know one value is common.
    step 1: we xor all the arrray value like answer= 1^2^3^4^4
    step 2: we xor all answer value with i(1 to 4) = (1^2^3^4^4)^(1^2^3^4) = 4
    */
}
