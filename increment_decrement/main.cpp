#include <iostream>

using namespace std;

int main() {
     //example 1 simple increment

    int counter(10);
    int result (0);

    cout<< "Counter:" <<counter<< endl;

    counter = counter+1 ;
    cout << "counter:" << counter << endl;

    counter ++;
    cout << "counter:" << counter << endl;

    ++counter;
    cout << "Counter: " << counter << endl;

    // //////////////////////example 2 pre-increment////////

    counter= 10;
    result = 0 ;

    cout << "counter: " << counter  << endl;
    result = ++counter; // note the pre-increment
    cout << "counter: " << counter <<endl;
    cout << "Result : " << result << endl;

    //  ////////////example 3 post-increment///////////////

    counter= 10;
    result = 0 ;

    cout << "counter: " << counter  << endl;
    result = counter++; // note the pre-increment

    cout << "counter: " << counter <<endl;
    cout << "Result : " << result << endl;


    // example 4

    counter= 10;
    result = 0 ;

    cout << "counter: " << counter  << endl;
    result = ++counter + 10; // note the pre-increment

    cout << "counter: " << counter <<endl;
    cout << "Result : " << result << endl;


    //example 5

    counter= 10;
    result = 0 ;

    cout << "counter: " << counter  << endl;
    result = counter++ + 10; // post increment use here

    cout << "counter: " << counter <<endl;
    cout << "Result : " << result << endl;

    return 0;
}