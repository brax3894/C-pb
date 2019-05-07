//
// Created by dieha on 4/26/2019.
//

#include <iostream>

using namespace std ;

int main() {

    cout << "Hello, welcome to the karpet kleaners"<< endl;
    cout << "\nHow many rooms would you like cleaned?";

    int number_of_rooms {0};
    cin>> number_of_rooms ;
    const double price_per_room  {30.0};
    const double sales_tax { 0.06};
    const int estimate_expiration {30};

    cout << "\nEstimate for the service: " ;
    cout << "number of rooms  " << number_of_rooms<< endl ;
    cout << "Price per room" << price_per_room << endl ;
    cout << " cost : $"<< price_per_room*number_of_rooms<< endl ;
    cout << "Tax: $" << price_per_room*number_of_rooms*sales_tax << endl ;
    cout << "===========================================" << endl ;
    cout << "Total Estimate $" << (price_per_room * number_of_rooms) +  (price_per_room*number_of_rooms*sales_tax)<< endl;
    cout<< "this estimate is valid for " << estimate_expiration << "days" << endl ;


    cout << endl;
    return 0;
}