/*
 * c++ uses scope rules to determine where an identifier can be used
 * c++ uses static or lexical  scoping
 *  local or block scope
 *  global scope
 *
 *      local scope
 * --------------------
 *      identifiers declared in a blcok{}
 *      function parameters have a block scope
 *      only visible within the blocks where declared
 *      function-local variables are only active while the function is exicuting
 *      local variables are not preserved through function calls
 *      within nested blocks, inner blocks can 'see' but outer blocks can not 'see' in
 *      ----- however static local variables are preserved between function calls, and is only initialized the first time the funcion is called
 *
 *      Global scope
 * ----------------------
 *      identifiers outside any function or class
 *      visible to all parts of the program after the global has been declared
 *      global constants are okay, but its best to avoid global variables
 *
 *
 *
 * */

#include <iostream>

using namespace std;

void local_example();
void global_example();
void static_local_example();

int num {300}; //global variable, declared outside of any class or function

void global_example(){
    cout<<"\nGlobal num is: " << num <<" in global_example - start"<<endl;
    num *=2;
    cout<<" Global num is: " << num <<" in global_example - end" << endl;
    // this example calls 300 twice in main resulting in 300 and 600, then the 2nd time as 600 and 1200
}

void local_example(int x){

    int num {1000}; //local to local example
    cout<<"\n Local num is: " <<num << "in the local_example -start"<<endl;
    num=x;
    cout<<"Local num is: "<<num <<"in the local_example -end"<<endl;
    // num1 in main is not within the scope so may not be used in this

}

void static_local_example(){
    static int num{5000}; //local to static_local_example, but retains value between calls
    cout<<"\nLocal static num is: "<< num<< " in static_local_example -start"<<endl;
    num+=1000;
    cout<<"Local static num is: "<<num<<" in static_local_example -end"<<endl;
    // calling the function twice results in 5000 then 6000, then 6000 and 7000


}

int main() {

    int num{100}; // local to int main
    int num1{500}; // local to int main

    cout<<"local num is: "<<num<< " in main"<<endl;

    { // creates new level of scope.
        int num{200}; // local to the inner scope
        cout<<"the local num is "<< num<< " in inner block in main"<< endl;
        cout<<"Inner block in main can't see outside its outside -num1 is: " <<num1<<endl;
    }

    cout<<"Local num is: " <<num <<" in main"<<endl;

    local_example(10);
    local_example(20);

    global_example();
    global_example();

    static_local_example();
    static_local_example();
    static_local_example();



    return 0;
}