/*
 * ___________________________________
 * Returning a pointer from a function
 * -----------------------------------
 * --functions can also return pointers
 *          type *function();
 * --should return pointers to
 *    -memory dynamically allocated in the function
 *    -data that was passed in
 *
 * -- never return a pointer to a local function variable
 *
 *
 *
 *
 */

#include <iostream>

using namespace std;

int *create_array(size_t size,int init_value=0){
    int *new_storage{nullptr};
    new_storage=new int[size];
    for (size_t i{0}; i<size; i++)
        //pointer offset
        *(new_storage+i)=init_value;
    return new_storage;
}

void display(const int *const array, size_t size){
    for(size_t i{0};i<size;i++)
        //pointer subscript
        cout<< array[i]<<" ";
    cout<<endl;
}

int main() {
    int *my_array{nullptr};
    size_t size;
    int init_value{};

    cout<<"\nHow many integers would you like to allocate?";
    cin>>size;//lets say 10
    cout<<"What value wpuld you like them to be initialized to?";
    cin>>init_value; //and initialize them all to the number 2
    //important to note all this is in main memory right now

    //call create array in the stack... this function points to an integer location on the heap and creates a
    //memory allocation for the array
    //the array is created
    //my array now points to that array memory allocation after the function finishes
    my_array= create_array(size,init_value);
    cout<<"\n-------------------------------"<<endl;
    //calls display on the stack
    display(my_array,size);
    //the storage of the memory on the heap needs to be freed
    delete[] my_array;
    // ready to be used again
    return 0;
}