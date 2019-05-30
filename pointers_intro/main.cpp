/*
 * ------------------------
 * What is a pointer?
 * ----------------------
 *  -A pointer is a variable
 *      -whose value is an address
 *
 *  What is an address? or rather what can be at that address?
 *      another variable
 *      or a function
 *
 *  to use the data that a pointer is pointing to you must know its type
 *
 *-----------------------
 * why use pointers?
 * --------------------
 * in most cases if you can call a function without a ponter, do it
 * ... but its not always possible or logical
 *
 * -- inside of functions pointers can be used to access data that are defined outside of the function
 * -------those variables may not be in the scope... so you cant access them by their names
 *
 * --pointers can be used to operate on arrays very efficiently
 *
 * --gives us the power to allocate memory dynamically on the heap or free store
 * -----this memory doesnt even have a variable name
 *------- only way to get to it, is with a pointer
 *
 * --with object orientation, pointers are how polymorphism works
 *
 * -can access specific addresses in memory, and is useful in embedded systems
 *
 * ----------------------------
 * declaring pointers
 * -----------------------
 * --always initialize pointers
 * ----uninitialized pointers contain garbage data and "point anywhere"
 * -----initializing to zero or nullptr(c++11) represents adress zero
 *        ---implies the ptr "points nowhere"
 *
 *
 * ----------------------
 *accessing pointers
 *--------------------
 * &
 *-- variables are stored in unique adresses
 * ---unary operator
 * -----evaluates to the address of its operand
 *      --operand cannot be a constant or expression that evaluates to temporary values
 *
 *
 *
 *
 */



#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    int num{10};
//---------------------------------------------------------------
    cout<<"Value of num is: "<< num<<endl;
    cout<<"sizeof value of num is: "<< sizeof num<<endl;
    cout<<"Address of num is: "<< &num<<endl;
//-------------------------------------------------------------------
    int *p;
    cout<<"\nValue of p is: "<<p<<endl;
    cout<<"Address of p is: "<<&p<<endl;
    cout<<"Sizeof p is: "<<sizeof p<<endl;

    p= nullptr;
    cout<<"\n The value of p is: "<<p<<endl;
//--------------------------------------------------------------


    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3 {nullptr};
    vector <string> *p4{nullptr};
    string *p5{nullptr};

    cout<<"\nsizeof p1 is: "<<sizeof p1<<endl;
    cout<<"sizeof p2 is: "<< sizeof p2<<endl;
    cout<<"sizeof p3 is: "<< sizeof p3<<endl;
    cout<<"sizeof p4 is: "<< sizeof p4<<endl;
    cout<<"sizeof p5 is: "<< sizeof p5<<endl;

    //---------------------------------------------
    int score{10};
    double high_temp{100.7};

    int *score_ptr {nullptr};

    score_ptr= &score;
    cout<<"The value of score is: "<<score<<endl;
    cout<<"The Address of score is: "<<&score<<endl;
    cout<<"The value of score_ptr is: "<< score_ptr<<endl;

    // // score_ptr = &high_temp //compiler error

    
    return 0;
}