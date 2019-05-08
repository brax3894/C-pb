#include <iostream>
#include <vector>

using namespace std;
/* pseudo code:
 *
 * declare 2 empty vectors of integers named vector1 and vector2
 *

 *
 * add the values 10 and 20 dynamically using push_back
 *    display each element in its vector using the at(0) method as well as the size using the size() method
 *add the values of 100 and 200 dynamically using push_back
 *
 * *  Declare an empty 2D vector called vector_2d
 *
 *      add vector1 to vector_2d
 *      adf vector2 to vector_2d
 *
 *  display the elements in vector_2d (.at method)
 *
 *  change vector1.at(0) to 1000
 *
 * display vector_2d elements agai
 *
 * display elements in vector 1
*/
int main() {
    //declare 2 empty vectors
    vector <int> vector1 ;
    vector <int> vector2 ;

    //add 10 and 20 dynamically to vector1
    vector1.push_back(10);
    vector1.push_back(20);

    //add 100 and 200 to vector2
    vector2.push_back(100);
    vector2.push_bakc(200);

    // diplay vector and the size of its elements table
    cout << vector1.at(0)<< endl;
    cout << vector1.at(1) << endl;

    cout << "The vector has " <<vector1.size()<< " elements"<< endl;

    // declare the 2d vector

    vector <vector<int>> vector_2d ;

    //add old vectors to the 2d vector
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // display elements using .at method
    cout << "\n Vector_2d" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    // change vector1.at(0) to 1000
    vector1.at(0) = 1000;

    // display elemnents again
    cout << "\n Vector_2d" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    // display elements in vector1
    cout << "\n vector1: " << endl;
    cout << vector1.at(0)<< endl;
    cout << vector2.at(1) << endl;
    cout << "vector1 has " << vector1.size()<< " elements" << endl;

    //




    return 0;
}
