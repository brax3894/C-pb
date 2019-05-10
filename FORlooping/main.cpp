 /* // looping
 * // aka Iteration
  *
  * the 3rd basic building block of programing
        *sequence, selection, iteration
  * iteration or repetition
  *  allows the execution of a statement or block of statements repeatedly
 *
 *
  *  loops are made up of loop conditions and a loop body which contain the statements to be repeated
  *
  *  execute a loop
  *  specific # of times
  *  FOR each element
  *  WHILE a specific condition remains true
  *  until a condition becomes false
  *  until we reach the end of an input stream
  *  forever
  *
  *  for loop
  *     *iterate a specific number of times
  *
  *  range based for loop
  *    * one iteration for each element in a range or a collection
  *
  *  while loop
  *    *iterate while a condition remains true
  *     stop when a condition becomes false
  *     check the condition at the beginning of every iteration
  *
  *  do-while loop
  *     *iterate while a condition remains true
  *     stop when a condition becomes false
  *     check the condition at the end of every iteration
  *
  *     =================================================================================================-===========
  *                           FOR LOOP
  *     =============================================================================================================
  *
  *  for ( initialization; condition ; increment)
  *     statement;
  *  for (initialization; condition ; increment ){
  *     statement(s);
  *     }
  *     initialize i
  *     int i {0};
  *     call i
  *     vv// initialize i in loop  \\vv
  *     for(i=1 ; i <=5; ++i) ////// for every time i is less than 5 print the value and add 1)
  *         cou<< i<<endl;                                           (print the value only then ADD 1)
  *
  *
  * /// variable i can be initialized right inside the for loop like so:
  *         for (int i {1} ; i <=5 ; ++i)
  *             cout<<i<<endl;
  *         or ////assignment style//////
  *         for (int i =1 ; i<=5 ;++i)
  *             cout<<i << endl;
  *        // i will only be visible inside of the for loop//
  *
  *
  * // //// /// /// /// comma operator example /// /// ///
  *for (int i{1}, j{5) ; i <=5; ++i, ++5){
  *     cout<<i<< " * " <<j<< ":" << (i*j)<<endl;
  *     }
  *
  *
  *
  *
  *
 */



#include <iostream>
using namespace std;

int main() {

    for(int i{1}; i<=10; ++i)
        cout<<i <<endl;

    for (int i{1}; i<=10; i+=2)
        cout<<i<<endl;

    for (int i{10}; i>0; --i)
        cout<<i<<endl;
    cout<<"blast off!"<<endl;

    for (int i{10}; i <=100; i+=10) {
        if(i%15==0)
            cout << i << endl;
    }

    for(int i{1}, j{5} ; i<=5; ++i, ++j)
        cout<< i << "+" <<j<< "="<<(i+j)<<endl;

    for (int i {1}; i<=100; ++i) {
        cout << i;
        if (i%10==0)
            cout<<endl;
        else
            cout<< " " ;

    }





    return 0;
}