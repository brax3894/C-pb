#include <iostream>
#include <string>
#include <vector>

using namespace std;
//
// overloaded functions a big importance in object orientation
// writing more code up front changes the ammount of code you'll write later
// //////////////////////
void print( int = 100);
void print(double= 125.5);
void print (string);
void print (vector<string>);
// ///////////////////////
void print (int num){
    cout<<"Printing int: "<<num<<endl;
}

void print (double num){
    cout<<"Printing double: "<<num<<endl;
}

void print (string s, string t){
    cout<<"Printing 2 strings: "<< s <<" and "<<t<<endl;
}

void print (vector<string>v){
    cout<<"Printing vector of strings: ";
    for(auto s:v)
        cout<<s+ " " ;
    cout<<endl;
}

int main() {

    print(100);   // int
    print('A');   // character is always promoted to int should print 65 ASCII('A')

    print(123.5); // double
    print(123.3F); //float is promoted to double since there is no float option in overloaded function

    print("C-style string"); // Cstyle string is converted to a c++ string

    string s{"C++"};
    print(s); // c++ string


    print("C-style string", s); // the first argument is converted to a c++ string

    vector<string> three_stooges{"Larry","Moe","Curly" };
    print(three_stooges);


    return 0;
}