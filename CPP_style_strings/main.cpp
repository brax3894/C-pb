/*
 * std:: string is part of the C++ Standard Template Library
 *     #include string
 *     std namespace
 *     contiguous in memory
 *     dynamic size
 *     works with I/O stream
 *     can be converted to C style if needed
 *
 *
 *
 *
 * */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() {

    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; // Apple
    string s6 {s1,0,3};      // App
    string s7 (10, 'X');  // X*10 or XXXXXXXXXXX

    cout<<s0<<endl;
    cout<<s0.length()<<endl;

// initialization

    cout<< "\nInitialization " << "\n -----------------------------"<<endl;
    cout<<"s1 is initialized to: " << s1<<endl;
    cout<<"s2 is initialized to: " << s2<<endl;
    cout<<"s3 is initialized to: " << s3<<endl;
    cout<<"s4 is initialized to: " << s4<<endl;
    cout<<"s5 is initialized to: " << s5<<endl;
    cout<<"s6 is initialized to: " << s6<<endl;
    cout<<"s7 is initialized to: " << s7<<endl;


// comparison

    cout<<"\nComparison " << "\n--------------------------------"<<endl;
    cout<<boolalpha;
    cout<<s1<< " == " <<s5 <<" : "<< (s1 == s5)<<endl;
    cout<<s1<< " == " <<s2 <<" : "<< (s1 == s2)<<endl;
    cout<<s1<< " != " <<s2 <<" : "<< (s1 != s2)<<endl;
    cout<<s1<< " < " <<s2 <<" : "<< (s1 < s2)<<endl;
    cout<<s2<< " > " <<s1 <<" : "<< (s2 > s1)<<endl;
    cout<<s4<< " < " <<s5 <<" : "<< (s4 < s5)<<endl;
    cout<<s1<< " == " <<"Apple" <<" : "<< (s1 == "Apple")<<endl;


// assignment

    cout<<"\nAssignment " << "\n--------------------------------"<<endl;

    s1="Watermelon";
    cout<< "s1 is now: " << s1 << endl;
    s2=s1;
    cout<< "s2 is now: " << s2<< endl;
    s3="Frank";
    cout<<"s3 is now: " << s3 << endl;

    s3[0]='C';
    cout<< "the first letter of s3 has been changed to 'C' : " <<s3<<endl;
    s3.at(0)='P';
    cout<< "s3 change first  letter to 'P'"<<s3<<endl;

// concatenation

    s3="Watermelon";
    cout<<"\nConcatenation " << "\n--------------------------------"<<endl;
    s3 = s5 + " and " + s2 + "juice";
    cout<< "s3 is now: " << s3<<endl;


// for loop

    cout<<"\nLooping " << "\n--------------------------------"<<endl;

    s1 = "Apple";
    for(size_t i{0}; i<s1.length();i++)
        cout<<s1.at(i); // out putting the Char at the i^th location
    cout<<endl;

    // Range based for loop

    for(char c: s1)
        cout<<c;
    cout<<endl;


// substring

    cout<<"\nSubstring " << "\n--------------------------------"<<endl;
    s1="This is a test";

    cout<<s1.substr(0,4)<<endl;  // this
    cout<<s1.substr(5,2)<<endl;  // is
    cout <<s1.substr(10,4)<<endl; // test

// erase

    cout<<"\nErase " << "\n--------------------------------"<<endl;

    s1= "This is a test";
// you tell "erase" command to act on the s1 object. The action will start at place 0, and erase 5 chars
    s1.erase(0,5); // erase This from s1 reults in "is a test"
    cout<<"s1 is now: " <<s1<<endl; //is a test


// getline

    cout<<"\nGetline " << "\n--------------------------------"<<endl;

    string full_name{};

    cout<<"Enter your full name: ";
    getline(cin, full_name);

    cout<<"Your full name is:" << full_name<<endl;

// find

    cout<<"\nFind " << "\n--------------------------------"<<endl;

    s1="The secret word is boo";
    string word{};

    cout<<"Enter the word to find: ";
    cin>>word;

    size_t position=s1.find(word);
    //                   string- no position
    if(position!=string::npos)
        cout<<"Found "<< word <<" at position: " <<position<<endl;
    else
        cout<<"Sorry, " << word<< " not found" <<endl;

    cout<<endl;




    return 0;
}