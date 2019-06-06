/*
 * ******-------------********------*******
 *passing pointers to a function
 *---------*********------******------
 *
 * -- pass-by-reference with pointer parameters
 * -- we can use pointers and the dereference operator
 * -- the function parameter is a pointer
 * -- the actual parameter can be a pointer or address of a variable
 *
 *
 *
 *
 */

#include <iostream>
using namespace std;

void double_data(int *int_ptr){
    *int_ptr *= 2;
}

int main() {
    int value{10};
    int *int_ptr{nullptr};

    cout<<"Value: "<<value<<endl;
    double_data(&value);
    cout<<"Value after double_data: "<<value<<endl;
    //value changed to 20

    cout<<"\n-------------------------"<<endl;

    //tells int_ptr to point to value(20)
    int_ptr = &value;

    //call double data, dereferences int_ptr then *2....
    double_data(int_ptr);
    cout<<"Value after calling double_data again : "<<value<<endl; //result: 40

    return 0;
}