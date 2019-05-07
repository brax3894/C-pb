#include <iostream>

using namespace std ;

int main() {
//    char vowels [] {'a', 'e','i','o','u'};
//    cout << "\n The first vowel is: " << vowels[0] <<endl;
//    cout << "\n the last vowel is: " << vowels[4] << endl;


//example 2
    double hi_temps [] {98.1, 89.8, 77.5, 81.6};
    cout<< "The first high temperature is: " << hi_temps[0]<< endl;

    hi_temps[0] = 100.7;     // this sets the first element in the array to the assigned value

    cout << "The first high temperature is now : " << hi_temps[0]<< endl ;

    //example 3
    int test_scores [5]; //{}; this will initialize all values to 0

    cout << "\n First score at index 0:" << test_scores[0]<<endl;
    cout << "second score at index 1:" << test_scores[1]<<endl;
    cout << "Third score at index 2:" << test_scores[2]<<endl;
    cout << "Fourth score at index 3:" << test_scores[3]<<endl;
    cout << " Fifth score at index 4:" << test_scores[4]<<endl;d

    //this code returns nothing important, random memory places


    return 0;
}