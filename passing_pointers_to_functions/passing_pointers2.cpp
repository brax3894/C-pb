//
// Created by dieha on 6/5/2019.
//
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

    swap(&x,&y);

    cout<<"\nx after swap: "<< x << endl;
    cout<<"y after swap: " << y <<endl;

    return 0;
}