#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    /*
    to know more: https://www.geeksforgeeks.org/stdstringerase-in-cpp/
                  https://cplusplus.com/reference/string/string/erase/
                  https://linuxhint.com/remove-first-character-string-cpp/
                  https://www.codegrepper.com/code-examples/cpp/how+to+delete+characters+from+string+in+c%2B%2B
                  https://www.geeksforgeeks.org/substring-in-cpp/
    */
    /*
        Note:
        The erase() function modifies the original string instead of creating a new string.
        The substr() function returns a new string with the specified characters instead of modifying the original string.
        The remove() function remove each occurrence of a specific character and use #include<algorithm> as header.
    */
    /*
        warning: never use this way of code cause it show error
        cout<<"After erase using str.erase(4)/str.erase(str.begin()+4) : "<<str.erase(str.begin()+4)<<endl<<endl;
        solve in two ways:
        1. cout<<"After erase using str.erase(4) : "<<str.erase(4)<<endl<<endl;
        2. str.erase(str.begin()+4);
           cout<<"After erase using str.erase(4) : "<<str<<endl<<endl;
    */


// Syntax 1: Erases all characters in a string

    string str = "hello world";
    cout<<"Before erase all characters : "<<str<<endl;
    cout<<"After erase all characters using str.erase()/str.erase(0) : "<<str.erase()<<endl<<endl<<endl;


    //    Before erase all characters : hello world
    //    After erase all characters using str.erase() :



// Syntax 2: Erases all characters except first character or after some starting position str.erase(starting_index)

    str = "hello world";
    cout<<"Before erase all characters except first character: "<<str<<endl;
    cout<<"After erase all characters using str.erase(1) : "<<str.erase(1)<<endl<<endl<<endl;

    //    Before erase all characters except first character: hello world
    //    After erase all characters using str.erase(1) : h

    str = "hello world";
    cout<<"Before erase all characters after some starting position using str.erase(starting_index_no) : "<<str<<endl;
    cout<<"After erase all characters using str.erase(2) : "<<str.erase(2)<<endl<<endl<<endl;

    //    Before erase all characters after some starting position using str.erase(starting_index_no) : hello world
    //    After erase all characters using str.erase(2) : he



// Syntax 3: Erases first character only or Remove the First Character With the Matching Character

    str = "hello world";
    cout<<"Before erase first characters only: "<<str<<endl;
    str.erase(str.begin());
    cout<<"After erase first characters only using str.erase(str.begin())/ str.erase(str.begin()+0) : "<<str<<endl<<endl<<endl;

    //    Before erase first characters only: hello world
    //    After erase first characters only using str.erase(str.begin())/ str.erase(str.begin()+0) : ello world

    char matching_char = 'h';
    str = "hello world";
    cout<<"Before first characters only with matching char \'h\': "<<str<<endl;

    if(str.front() == matching_char )
    {
        str.erase(str.begin());
    }
    cout<<"After first characters only with matching char \'h\' using str.erase(str.begin()): "<<str<<endl<<endl<<endl;

    //    Before first characters only with matching char 'h': hello world
    //    After first characters only with matching char 'h' using str.erase(str.begin()): ello world




// Syntax 4: Erases at most, starting at index idx with consecutive no_of_character

    str = "hello world";
    cout<<"Before erase 4 consecutive characters starting from index number 1 "<<endl,
        cout<<"using str.erase(starting_index, no_of_character) : "<<str<<endl;
    cout<<"After erase using str.erase(1, 4) : "<<str.erase(1, 4)<<endl<<endl<<endl;

    //    Before erase 4 consecutive characters starting from index number 1
    //    using str.erase(starting_index, no_of_character) : hello world
    //    After erase using str.erase(1, 4) : h world



// Syntax 5: Erase the single character at iterator position index.

    str = "hello world";
    cout<<"Before erase index 4 character using str.erase(index) : "<<str<<endl;
    cout<<"After erase using str.erase(4) : "<<str.erase(4)<<endl<<endl<<endl;

    //or can write in same way
    //    str.erase(str.begin()+4);
    //    cout<<"After erase using str.erase(str.begin()+4) : "<<str<<endl<<endl;


    //    Before erase index 4 character using str.erase(index) : hello world
    //    After erase using str.erase(4) : hell



// Syntax 6: Erase characters from index pos. to another index pos.

    str = "hello world";
    cout<<"Before erase index 0 to index 5 characters "<<endl,
        cout<<"using str.erase(str.begin()+start_index, str.end()-end_index): "<<str<<endl,
        str.erase(str.begin()+0, str.end()-5);
    cout<<"After erase using str.erase(str.begin()+0, str.end()-5): "<<str<<endl<<endl;

    string str1 = "hello world";
    cout<<"or same as using str.erase(str.begin()+start_index, str.begin()+end_index): "<<str1<<endl;
    str1.erase(str1.begin()+0, str1.begin()+6);
    cout<<"After erase using str.erase(str1.begin()+0, str1.begin()+6): "<<str1<<endl<<endl<<endl;

    //output:
    //    Before erase index 0 to index 5 characters
    //    using str.erase(str.begin()+start_index, str.end()-end_index): hello world
    //    After erase using str.erase(str.begin()+0, str.end()-5): world
    //
    //    or same as using str.erase(str.begin()+start_index, str.begin()+end_index): hello world
    //    After erase using str.erase(str1.begin()+0, str1.begin()+6): world



// Syntax 7: Erase only all of one selected character from whole word or sentence

    str = "hello world";
    cout<<"Before remove a specific character '\l\' from whole sentence: "<<str<<endl;
    str.erase( remove(str.begin(), str.end(), 'l'), str.end() );
    cout<<"After remove by using str.erase( remove(str.begin(), str.end(), 'l'), str.end() ): "<<str<<endl<<endl<<endl;

    //    Before remove a specific character 'l' from whole sentence: hello world
    //    After remove by using str.erase( remove(str.begin(), str.end(), 'l'), str.end() ): heo word



// Syntax 8: substr() creates a new string with the specified characters instead of modifying the original string.
    str = "hello world";
    string new_str;
    cout<<"Before modify original string to a new string, orginal string, str: "<<str<<endl;
    cout<<"Before modify original string to a new string, new string, new_str: "<<new_str<<endl<<endl;
    new_str = str.substr(0,5);
    cout<<"After modify take hello word to new string, orginal string, str: "<<str<<endl;
    cout<<"After modify, new_str = str.substr(0,5): "<<new_str<<endl<<endl<<endl;

    //    Before modify original string to a new string, orginal string, str: hello world
    //    Before modify original string to a new string, new string, new_str:
    //
    //    After modify take hello word to new string, orginal string, str: hello world
    //    After modify, new_str = str.substr(0,5): hello
}
