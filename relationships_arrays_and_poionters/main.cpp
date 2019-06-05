/*
 *  the value of an array is the address of the first element in the array
 *
 *  the value of a pointer variable is an address
 *
 *  if the pointer points to the same data type as the first array element  then the pointer can be used interchangeably
 *  (almost)
 *
 *  arrays
 *
 */

#include <iostream>
using namespace std;

int main() {
    int scores[]{100,95,89};

    cout<<"The value of scores:" <<scores<<endl;

    int *score_ptr{scores};
    cout<<"The value of score_ptr: "<<score_ptr<<endl;

    cout<<"\nArray subscript notation ----------------------"<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;

    cout<<"\nPointer subscript notation---------------------"<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

    cout<<"\nPointer offset notation ----------------------"<<endl;
    cout<<*score_ptr<<endl;
    cout<< *(score_ptr+1)<<endl;
    cout<< *(score_ptr+2)<<endl;

    cout<<"\nArray offset notation -------------------------"<<endl;
    cout<< *scores<<endl;
    cout<< *(scores+1)<<endl;
    cout<< *(scores+2)<<endl;


/*
 * in this scenario if the first integer of the array were to be stored in a memory location (1000) each of the following
 * ints would be put in 4 byte increments on memory location... All this script does is show different ways you can access
 * the values in the array with array and pointer notations.
 *
 *
 *
 */




    return 0;
}