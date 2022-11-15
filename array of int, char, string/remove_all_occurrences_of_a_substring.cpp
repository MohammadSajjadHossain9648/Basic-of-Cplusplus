#include<iostream>
using namespace std;
/*
    to know more: https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
*/
string removeOccurrences(string s, string part)
{
//method 1:
    //check s.length is not 0 and also part is stay in string which is less than string length
    while( (s.length() != 0) && (s.find(part) < s.length()) )
    {
        s.erase(s.find(part), part.length());
    }

    return s;


//method 2:
//    int part_len = part.length();
//
//    string word;
//    int k = 1;
//    for(int i=0; i<s.length(); ) //check continuously from index 0 -> need to delete all part string ("abc")
//    {
//        //cout<<"\n\niteration "<<k++<<" -> index = "<<i;
//        //cout<<"\nstring s: "<<s;
//        //cout<<"\nstring length: "<<s.length()<<endl;
//
//        //for compare with part
//        for(int i1=i; i1<i+part_len; i1++)
//        {
//            word = word + s[i1];
//        }
//        //cout<<"\nword: "<<word<<endl;
//
//        if(word == part) //if we get the word, we need to restart checking from index 0
//        {
//            //cout<<"\nfound ->-> starting index ="<<i;
//
//            s.erase(i, part_len);
//            word = "";
//            i=0;
//
//            //cout<<"\nstring s: "<<s<<endl;
//            //cout<<"\nstring length: "<<s.length();
//
//            continue; //it skip next part of this iteration
//        }
//
//        if(s.length() == part_len) // it means no need to check from index 0 cause it is different from part string
//        {
//            break;
//        }
//
//        //clear word string after completing iteration and increase i
//        word = "";
//        i++;
//    }
//
//    return s;
}
int main()
{
    string s = "daabcbaabcbc", part = "abc";  //another example:  s = "axxxxyyyyb", part = "xy"
    string result = removeOccurrences(s, part);
    cout<<result<<endl;

    //output: dab

    /* how it works in code?

        iteration 1 -> index = 0
        string s: daabcbaabcbc
        string length: 12

        word: daa


        iteration 2 -> index = 1
        string s: daabcbaabcbc
        string length: 12

        word: aab


        iteration 3 -> index = 2
        string s: daabcbaabcbc
        string length: 12

        word: abc

        found ->-> starting index =2
        string s: dabaabcbc

        string length: 9

        iteration 4 -> index = 0
        string s: dabaabcbc
        string length: 9

        word: dab


        iteration 5 -> index = 1
        string s: dabaabcbc
        string length: 9

        word: aba


        iteration 6 -> index = 2
        string s: dabaabcbc
        string length: 9

        word: baa


        iteration 7 -> index = 3
        string s: dabaabcbc
        string length: 9

        word: aab


        iteration 8 -> index = 4
        string s: dabaabcbc
        string length: 9

        word: abc

        found ->-> starting index =4
        string s: dababc

        string length: 6

        iteration 9 -> index = 0
        string s: dababc
        string length: 6

        word: dab


        iteration 10 -> index = 1
        string s: dababc
        string length: 6

        word: aba


        iteration 11 -> index = 2
        string s: dababc
        string length: 6

        word: bab


        iteration 12 -> index = 3
        string s: dababc
        string length: 6

        word: abc

        found ->-> starting index =3
        string s: dab

        string length: 3

        iteration 13 -> index = 0
        string s: dab
        string length: 3

        word: dab
    */
}
