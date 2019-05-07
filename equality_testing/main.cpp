#include <iostream>

// testing for equality ////
//     ==   and   !=    ////

// > greater than
// >= greater than or equal
// < less than
// <= less than or equal to
// <=> 3 way comparison
using namespace std;

int main() {

    bool equal_result {false};
    bool not_equal {false};

    int num1{}, num2{};
//
//    cout <<boolalpha;
//    cout << "Enter 2 integers separated by a space:"<< endl;
//    cin>> num1 >> num2;
//    equal_result = (num1==num2);
//    not_equal = (num1 != num2);
//
//    cout<< "Comparison result (equals)"<< equal_result<<endl;
//    cout<< "Comparison result (not equals)" << not_equal <<endl;
//     ///////// example 2 ///////////////////////
//    char char1{},char2{} ;
//
//    cout << "Enter 2 characters seperated by a space" << endl;
//    cin >> char1 >> char2;
//    equal_result = (char1==char2);
//    not_equal = (char1 =! char2);



//    cout << "Comparison results (equal)" << equal_result <<endl;
//    cout << "Comparison results (not equal)" << not_equal << endl;

//         ////////// example 3   //////////////////////

    double double1{}, double2{};
//    cout << "Enter two doubles separated by a space " << endl;
//    cin>> double1, double2;
//
//    equal_result = (double1 == double2);
//    not_equal = ( double1 != double2);
//
//    cout << "Comparison results(equal)" <<  equal_result << endl;
//    cout << "Comparison results (not equal)" << not_equal << endl;


//           //////////////example 4////////////////////

    cout << "Enter an integer and a double separated by a space" << endl;
    cin >>  double1, num2;

    equal_result = ( num1==double1);
    not_equal= (num1 =! double1);

    cout << "Comparison results (equal)" << equal_result<<endl;
    cout << "Comparison results (not equal)" << not_equal << endl;



    return 0;
}