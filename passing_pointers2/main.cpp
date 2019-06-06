/*
 * I decide to make this file its own project, you'll see the original typed cpp file in the first passing pointers folder
 *
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}



int main(){
    int x{100},y{200};
    cout<<"\nx: "<< x << endl;
    cout<<"y: "<< y <<endl;
    //& sign is "address of"
    swap(&x,&y);

    cout<<"\nx after swap: "<< x << endl;
    cout<<"y after swap: " << y <<endl;

    cout<<endl;

    return 0;
}