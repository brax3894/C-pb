#include <iostream>

// logical operators /////

                   // truth table(&&) //

//_______expression a_______expression b_________ a&&b(and)//
//        true                 true                true
//         true                false               false
//         false               true                 false
//        false                false               false

                        // truth table(||) //

//_______expression a_______expression b_________ a||b(or)//
//        true                 true                true
//         true                false               true
//         false               true                 true
//        false                false               false

using namespace std;
int main() {
    int num {};
    const int lower  {10};
    const int upper {20};

    cout<<boolalpha ;

    //determin if the int is between 2 other ints
    //assume lower < upper
    cout << "Enter an integer - bounds are " <<  lower << "and" << upper <<":" ;
    cin >> num ;

    bool within_bounnds{false};

    within_bounnds = (num>lower && num<upper);
    cout<< num << "is between" << lower  << "and" << upper << ":" << within_bounnds << endl;


    // /////////////////////////////////////////////////////////////
    // ////// determine if an entered int is outside two other ints ////
    // ///////////////////////////////////////////////////////////////

    cout<< "\nEnter an integer - the bounds are: " << lower << upper << ":" ;
    cin >> num ;

    bool outside_bounds {false};
    outside_bounds= ( num<lower || num > upper );
    cout << num << "is outside"<< lower << "and" << upper <<":" << outside_bounds << endl;


    // /////////////////////////////////////////////////////////////////////////
    // ///////determine if an integer is exactly on the boundary
    // //////////////////////////////////////////////////////////////////////

    cout<< "\n Enter an integer - bounds are: "<< lower  <<":" << upper <<":" ;
    cin>> num;

    bool on_bounds {false};
    on_bounds = (num == lower || num == upper);
    cout << num << "is on one of the bounds which are" << lower << "and" << upper <<":" << on_bounds << endl;


    // //////////////////////////////////////////////////////////////////////////
    // determine if one should wear a coat based on the temperature and wind speed
    // ///////////////////////////////////////////////////////////////////////////

    bool wear_coat{false};
    double temp {};
    int wind_speed {};

    const int wind_speed_for_coat{25};
    const double temp_for_coat{45};

    // require a coat if wither wind is too high OR(||) temperature is too low

    cout<< "\n Enter the current temperature in (F):" ;
    cin>> temp;
    cout<< "Enter the windspeed (mph):";
    cin >> wind_speed;

    wear_coat = (temp < temp_for_coat || wind_speed > wind_speed_for_coat);
    cout<< "Do you need to wear a coat using OR(||)"<< wear_coat << endl;

    // require a coat if both windsped is too high AND(&&) temp is too low

    wear_coat = (temp < temp_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to wear a coat using AND(&&)" << wear_coat << endl;


    return 0;
}