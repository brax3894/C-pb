//
// write a program that asks the user tp enter  the following:
// an int representing the number of cents
// assume the number of cents is greater than or equal to zero

// program should then display how to provide that change to the user

// in the US:
// 1 dollar is 100 cents
// 1 quarter is 25 cents
// 1 dime is 10 cents
// 1 nickle is 5 cents
// 1 penny is one cent

#include <iostream>

using namespace std ;

int main() {
    // define the conversion values in cents
    const int dollar_value{100};
    const int quarter_value {25};
    const int dime_value{10};
    const int nickle_value{5};
    const int penny_value{1};
    int change{};

    cout << "Welcome to the change converter " << endl;
    cout << "Please enter a number in cents(no decimals) and I will calculate your number of dollars to pennies "
    cin>> change;
    //the balance int keeps a running balance to determine the highest currency needed and then subtract it until it bcomes zero
    int balance{}, dollars{}, quarters{}, dimes {}, nickles{}, pennies{};

    // say you enter 92////

    //          92/100=0///////////
    dollars = change/dollar_value;
    balance = change - (dollars*dollar_value);
    //         92-0    ////////////

    //         92/25 = 3 ///////////
    quarters = balance/quarter_value;
    balance -= quarters*quarter_value;
    //    quarters=3 so 3*25=75/////////
    //     92-75 = 17(current balance)

    //       17/10 = 1
    dimes = balance/dime_value;
    balance -= dimes*dime_value;
    //          1*10 = 10
    //     17-10 = 7(current balance)

    //         7/5 = 1
    nickles = balance/nickle_value;
    balance -= nickles*nickle_value;
    //          5*1=5
    //       7-5=2(current balance

    // obviously
    pennies = balance;


// ///////////////////////////////////////////////////
             // modulo  solution///////////////////////
// ////////////////////////////////////////////////////

//    // literally the same functionality except im using remainder values instead of subtraction
//    // say you enter 92////
//
//    //          92/100=0///////////
//    dollars = change%dollar_value;
//    balance = change%dollar_value;
//    //         92-0    ////////////
//
//    //         92/25 = 3 ///////////
//    quarters = balance%quarter_value;
//    balance %= quarter_value;
//    //    quarters=3 so 3*25=75/////////
//    //     92-75 = 17(current balance)
//
//    //       17/10 = 1
//    dimes = balance%dime_value;
//    balance %= dime_value;
//    //          1*10 = 10
//    //     17-10 = 7(current balance)
//
//    //         7/5 = 1
//    nickles = balance%nickle_value;
//    balance %= nickle_value;
//    //          5*1=5
//    //       7-5=2(current balance
//
//    // obviously
//    pennies = balance;


}

