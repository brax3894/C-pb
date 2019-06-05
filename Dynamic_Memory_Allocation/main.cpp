/*
 * ---------------------------
 * Dynamic Memory Allocation
 * ---------------------------------------------
 * --Allocating storage from the heap at runtime
 * ---------------------------------------------
 * we often dont know how much storage for a variable at run time
 *
 * --remember c++ arrays?
 *    -had to explicitely provide the size and it was fixed
 *    -but vectors grow and shrink dynamically
 *
 * we can use pointers to access newly allocated heap storage
 *
 *
 */


#include <iostream>

using namespace std;

int main() {
    // // grabs and lets go of memory in the heap
    int *int_ptr{nullptr};
    int_ptr=new int;
    cout<<int_ptr<<endl;
    delete int_ptr;

    size_t size{0};
    double *temp_ptr{nullptr};

    cout<<"How many temps? ";
    cin>>size;

    temp_ptr = new double[size];

    cout<< temp_ptr<<endl;

    delete[] temp_ptr;


    cout<<endl;
    return 0;
}