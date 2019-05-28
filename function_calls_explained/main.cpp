/*
 * -----------------------------
 * How do function calls work?
 * -----------------------------
 *      Functions use the function call stack
 *          the analog example would be a stack of books
 *          function call stack is LIFO - Last in, First Out(you have to move top books before the bottom
 *          push and pop
 *      Stack Frame or activation record
 *          -functions must return control to the function that called it
 *          -each time a function is called a new activation record is created and pushed in to the stack
 *          -when the function terminates we pop the activation record and return
 *          -local variables and functions parameters are alocated on the stack
 *
 *      Stack size is finite, stack overflow
 *
 *
 *   -------------------------------------
 *   typical behavior when main calls a function
 *   ---------------------------------------
 *      main:
 *          push space for the return value
 *          push space for parameters
 *          push the return address
 *          transfer control to the function (func1).. (jmp)
 *      func1:
 *          push the address of the previous activation record //moving stack pointer
 *          push any register values that will need to be restored before returning to caller
 *          execute code in func1
 *          restore the register values
 *          restore the previous activation record (move the stack pointer)
 *          store any function result
 *          transfer control to the return address(jmp)
 *      main:
 *          pop the parameters
 *          pop the return value
 *
 *
 *
 *
 *
 *
 * */


#include <iostream>

using namespace std;

void func2(int &x, int y, int z){
    // x becomes an alias for result in fun
    x+=y+z;
}

int func1(int a, int  b){
    int result{};
    result = a+b;
    func2(result, a, b);
    return result;
}


int main() {
    int x{10};
    int y {20};
    int z {};
    z=func1(x,y);
    cout<<z<<endl;
    // x&y become a&b in func 1
    // result becomes an alias for x in func2(inside func 1) so any changes to x, result gets updated 



    return 0;
}