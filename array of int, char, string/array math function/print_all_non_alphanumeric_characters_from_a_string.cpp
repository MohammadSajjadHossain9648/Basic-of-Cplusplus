#include<iostream>
using namespace std;
/*
    to know more: https://www.geeksforgeeks.org/remove-characters-alphabets-string/
                  https://www.techiedelight.com/remove-all-non-alphanumeric-characters-from-a-string-in-cpp/#:~:text=The%20std%3A%3Aremove_if%20algorithm%20returns%20an%20iterator%20that%20indicates,the%20std%3A%3Aerase%20function.&text=Starting%20with%20C%2B%2B20,over%20the%20erase%2Dremove%20idiom.
                  https://www.programiz.com/cpp-programming/examples/remove-characters-string
                  https://www.geeksforgeeks.org/how-to-remove-all-non-alphanumeric-characters-from-a-string-in-java/
*/
int main()
{
    string s = "$Gee**k;s..fo, r'Ge^eks?200";
    cout<<"string -> "<<s<<endl;

//method 1: same as method 2 but it count a...z & A...Z & 0...9
    int j=0;
    for(int i=0; i<s.size(); i++)
    {
        if(!isalnum(s[i]))
        {
            s[j++] = s[i];
        }
    }

    cout<<"after removing character -> "<<s.substr(0, j)<<endl;



//method 2:
//    int j = 0;
//    for(int i=0; i<s.size(); i++)
//    {
//        // Store only valid characters
//        if( (s[i]<='A' || s[i]>='Z') && (s[i]<='a' || s[i]>='z') )
//        {
//            // erase function to erase the character
//            s[j++] = s[i];
//        }
//    }
//    cout<<"after removing character -> "<<s.substr(0, j)<<endl;

    /*
    Time Complexity: O(n)
    Auxiliary Space: O(1)
    */



//method 3:
//    for(int i=0; i<s.size(); i++)
//    {
//
//        // Finding the character whose ASCII value fall under this range
//        if( (s[i]>'A' && s[i]<'Z') || (s[i]>'a' && s[i]<'z') )
//        {
//            // erase function to erase the character
//            s.erase(i, 1);
//            i--;
//        }
//    }
//    cout<<"after removing character -> "<<s<<endl;

    /*
    Time complexity: O(N2) as erase() may take O(n) in the worst case. We can optimize the solution by keeping track
    of two indexes.
    Auxiliary Space: O(1)
    */


    //output:
    //    string -> $Gee**k;s..fo, r'Ge^eks?200
    //    after removing character -> $**;.., '^?
}
