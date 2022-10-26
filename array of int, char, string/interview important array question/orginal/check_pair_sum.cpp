#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/
                  https://www.geeksforgeeks.org/print-all-pairs-with-given-sum/
                  https://www.geeksforgeeks.org/count-pairs-with-given-sum/
                  https://www.techiedelight.com/find-pair-with-given-sum-array/
                  https://afteracademy.com/blog/check-for-pair-in-an-array-with-a-given-sum
                  https://leetcode.com/problems/two-sum/
*/

bool find_sumPair(int arr[], int len, int target)
{
    bool flag;
    cout<<"pairs numbers of arr: "<<endl;
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(arr[i]+arr[j] == target)
            {
                cout<<min(arr[i],arr[j])<<" , "<<max(arr[i],arr[j])<<endl;
            }
        }
    }
    cout<<endl<<endl;
}
int main()
{
    int arr[] = {7,11,2,15, 1, 8};
    int target = 9;

    int len = sizeof(arr)/sizeof(int);

    find_sumPair(arr, len, target);

    //output:
    //    pairs numbers of arr:
    //    2 , 7
    //    1 , 8
}
