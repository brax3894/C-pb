/*
 * ============================
 *  passing arrays to functions
 * ===========================
 *
 * we can pass arrays to a function by providing square brackets in the formal param description
 *
 *
 *      void print_array(int numbers []);
 *
 *the elements are NOT copied;
 * --since the array name evaluates(=) the location of the array in memory- the memory address is what is copied
 * -- the function calling the array has no idea how many elements are in the array since all it knows is the location of the Arrays name
 *
 *-- so when passing arrays to functions it is important to provide the array size so the function knows how many elements it can work with
 *
 *
 * */
#include <iostream>

using namespace std;

void print_array(int arr[],size_t size);
void set_array(int arr[], size_t size, int value);

void print_array(int arr[], size_t size){ //const
    for(size_t i{0};i<size; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}

// set each array element to value
void set_array(int arr[], size_t size, int value){
    for (size_t i{0}; i<size; i++){
        arr[i]=value;
    }
}


int main() {
    int my_scores[]{100,98,90,86,84};

    print_array(my_scores, 5);

    set_array(my_scores, 5,100);

    print_array(my_scores, 5);

    return 0;
}