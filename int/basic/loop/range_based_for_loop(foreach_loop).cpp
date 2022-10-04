#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;

int main()
{
    /*
        link: https://www.geeksforgeeks.org/g-fact-40-foreach-in-c-and-java/
        https://www.digitalocean.com/community/tutorials/foreach-loop-c-plus-plus
    */
    /*
        Syntax :
        for ( range_declaration : range_expression )
            loop_statement

        Parameters :
        range_declaration :
        a declaration of a named variable, whose type is the type of the element of the sequence represented by
        range_expression, or a reference to that type. Often uses the auto specifier for automatic type deduction.

        range_expression :
        any expression that represents a suitable sequence or a braced-init-list.

        loop_statement :
        any statement, typically a compound statement, which is the body of the loop.
    */

    /*
        Please note: While declaring the variable ‘i’ we could also use the auto datatype instead of int.
        like an example: for(auto i: v) instead of for(int i: v)
        This ensures that the type of the variable is deduced from the array type, and no data type conflicts occur.
    */


// C++ Program for array:

    // the initializer may be a braced-init-list
    cout<<"Traversing the array with foreach using array's data type: ";
    for(int i:{6, 7, 8, 9, 10})
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //    or same as
    cout<<"Traversing the array with foreach using auto keyword: ";
    for(auto i:{6, 7, 8, 9, 10})
    {
        cout<<i<<" ";
    }
    cout<<endl;

    // output
    //    Traversing the array with foreach using array's data type: 6 7 8 9 10
    //    Traversing the array with foreach using auto keyword: 6 7 8 9 10



    // Iterating over array which is same as braced-init-list
    int a[] = { 1, 2, 3, 4, 5 };
    cout<<"Traversing the array with foreach using array's data type: ";
    for(int i: a) //for(auto i: a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //or same as
    for(int i: a)
    {
        cout<<"In loop. ";
    }
    cout<<endl;

    // output:
    //    Traversing the array with foreach using array's data type: 1 2 3 4 5
    //    In loop. In loop. In loop. In loop. In loop.





// C++ Program for vector/set:

    // Iterating over whole array
    vector<int> v = { 1, 2, 3, 4, 5 };    // set<int> v = { 1, 2, 3, 4, 5 };
    for(int i: v)   //for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //output
    //  1 2 3 4 5

    vector<string> value{"This", "is", "foreach", "example", "using", "vector."};

    cout<<"Traversing the vector with foreach using vector's data type: ";
    for (string v : value) {
        cout<<v<<" ";
    }

    cout<<"\nTraversing the vector with foreach using auto keyword      : ";
      for (auto v : value){
        cout<<v<<" ";
    }
    cout<<endl;

    //output:
    //    Traversing the vector with foreach using vector's data type: This is foreach example using vector.
    //    Traversing the vector with foreach using auto keyword      : This is foreach example using vector.




// C++ Program for string:

    // Printing string characters
    string str = "new coder";
    for(char c: str)
    {
        cout<<c<<" ";
    }
    cout<<endl;

    //output:
    //    n e w   c o d e r




// C++ Program for map:

    // Printing keys and values of a map
    map<int, int> num(
    {{1,2},{4,5},{7,8}}
    );
    for(auto i: num)
    {
        cout<<"{"<<i.first<<", "<<i.second<<"}"<<endl;
    }
    cout<<endl;
    //output:
    //    {1, 2}
    //    {4, 5}
    //    {7, 8}


    map<int, string> mapExample;
    mapExample.insert(pair<int, string>(1, "Geeks"));
    mapExample.insert(pair<int, string>(2, "4"));
    mapExample.insert(pair<int, string>(3, "Geeks"));
    mapExample.insert(pair<int, string>(4, "Map"));
    mapExample.insert(pair<int, string>(5, "Foreach"));
    mapExample.insert(pair<int, string>(6, "Example"));

    cout<<"Traversing the map with foreach using map's data type\n";
    for (pair<int, string> mpEx : mapExample )
    {
        cout<<mpEx.first<<" "<<mpEx.second<<endl;
    }

    cout<<"\nTraversing the map with foreach using auto keyword\n";
    for (auto mpEx : mapExample)
    {
        cout<<mpEx.first<<" "<<mpEx.second<<endl;
    }
    cout<<endl;

    //output:
    //    Traversing the map with foreach using map's data type
    //    1 Geeks
    //    2 4
    //    3 Geeks
    //    4 Map
    //    5 Foreach
    //    6 Example
    //
    //    Traversing the map with foreach using auto keyword
    //    1 Geeks
    //    2 4
    //    3 Geeks
    //    4 Map
    //    5 Foreach
    //    6 Example
}

