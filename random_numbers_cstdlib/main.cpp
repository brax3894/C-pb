#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int random_number{};
    size_t count{10}; //number of random numbers to generate
    int min{1};      // lower bound(inclusive)
    int max {6};     // upper bound(inclusive)

    // seed the random number generator
    // if you dont seed the random number generator, you will get the same requence of numbers every time


    cout<< "RAND_MAX on my system is: "<< RAND_MAX<<endl;
    srand(time(nullptr));

    for (size_t i{1}; i<=count;i++) {
        random_number = rand() % max + min;
        cout << random_number << endl;
    }

    return 0;
}