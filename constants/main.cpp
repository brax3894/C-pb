/*
 * Franks carpet cleaning sevice
 * charges 30$ a room
 * sales tax is 10%
 * prompt user for the number of rooms they would like cleaned and provide different kinds of estimates
 *
 *
 * /// output should look like \\\\\\\\\\
 *
 * estimate for the carpet cleaning surface
 * number of rooms: 2
 * price pre room : 30$
 * cost: 60$
 * tax: 3.6
 * ======================================
 * total estimate: 63.6
 * this estimate is valid for 30 days
 *
 * /////////////  looks like \\\\\\\\\\\\\\\\
 *
 * psuedo:
 prompt user for their number of rooms
 display number of rooms
 display price per room

 display cost: (number of rooms * price per room)
 display tax: number of rooms *price per room * tax rate
 display total estimate (total+tax)
 display the expiration

 *
 */
#include <iostream>

using namespace std ;

int main() {

    cout << "Hello, welcome to the karpet kleaners"<< endl;
    cout << "\nHow many rooms would you like cleaned?";

    int number_of_rooms {0};
    cin>> number_of_rooms ;


    cout << "\nEstimate for the service: " ;
    cout << "number of rooms  " << number_of_rooms<< endl ;
    cout << "Price per room" << 30 << endl ;
    cout << " cost : $"<< 30*number_of_rooms<< endl ;
    cout << "Tax: $" << 30*number_of_rooms*0.6 << endl ;
    cout << "===========================================" << endl ;
    cout << "Total Estimate $" << (30 * number_of_rooms) +  (30*number_of_rooms*0.06)<< endl;
    cout<< "this estimate is valid for " << 30 << "days" << endl ;


    cout << endl;
    return 0;
}