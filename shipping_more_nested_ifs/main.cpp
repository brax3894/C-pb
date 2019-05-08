

/*
 shipping cost calculator

 ask the user for package dimensions in inches
 length width height


 all dimensions must be 10 inches or less or we can not ship

 it will cost 2.50 to ship
 if the package volume is greater than 100 cubic inches  there is a 10%  surcharge
 if the package volume is greater than 500 cubic inches there is a 25% surcharge

 */

#include <iostream>

using namespace std;
int main() {
    int length{},width{}, height{};
    double base_cost {2.50};

    const int tier1_threshold{100}; // volume
    const int tier2_threshold{500}; // volume

    int max_dimension_length {10};

    double tier1_surcharge{0.10}; // volume
    double tier2_surcharge{0.25}; // volume

    // all dimensions must br 10 inches or less

    int package_volume{};

    cout<< "Welcome to the package cost calculator"<< endl;
    cout << "Enter the length, width and height of the package separated by spaces : ";
    cin >> length >> width>>height;

    if (length>max_dimension_length || width>max_dimension_length || height>max_dimension_length) {
        cout << "Sorry your package can not be shipped- dimensions exceeded" << endl;
    }else{
        double package_cost{};
        package_volume = length*height*width;
        package_cost = base_cost;

        if(package_volume > tier2_threshold){
            package_cost += package_cost*tier2_surcharge;
            cout<< "Adding tier 2 surcharge"<<endl;
        }else if (package_volume> tier1_threshold) {
            package_cost += tier1_surcharge * package_cost;
            cout<<"Adding tier 1 surcharge" << endl;
        }
        cout << "The volume of your package is: " <<package_volume <<endl;
        cout << "Your package will cost $" << package_cost << "to ship"<<endl;
    }



    return 0;
}