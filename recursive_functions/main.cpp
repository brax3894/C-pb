/*
 * ---------------------
 * Recursive Functions
 * ---------------------
 *      -A recursive function is a function that calls itself
 *          -either directly or indirectly through another function
 *
 *      -Recursive problem solving
 *          -base case
 *          -divide the rest of the problem into subproblems and recursive call
 *
 *      -many problems that lend themselves to recursive solutions
 *          -mathmatic: factorial, Fibonacci, fractals...
 *          -searching and sorting: binary search trees, ect.
 *
 *
 *
 *
 *
 *
 *
 *
 *
 * */

#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long n){
    if(n <= 1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2); //recursion
}


int main() {
    cout<<fibonacci(5)<<endl; //5
    cout<<fibonacci(30)<<endl; //83204
    cout<<fibonacci(40)<<endl; //102334155

    return 0;
}