#include <iostream>


using namespace std;

int main() {
    int total {};
    int num1{},num2{}, num3{};
    const int count {3};

    cout << "Enter 3 integers seperated by spaces: " << endl;
    cin >> num1 >> num2 >> num3 ;

    total = num1+num2+num3 ;

    double average {0.0};
    //static cast changes the int type to the chosen type in <>

    average = static_cast<double>(total)/count ;

    cout<< "Your 3 numbers were: " << num1 << "," << num2 << "," << num3 << endl;
    cout << "the sum of your numbers is: " << total << endl ;
    cout << "The average is " << average << endl;

    return 0;
}