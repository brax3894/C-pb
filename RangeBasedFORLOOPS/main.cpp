/*
 * ==================================================
 *   //////// RANGE-BASED FOR LOOPS \\\\\\\\\\\\\\\
 * ==================================================
 *
 * introduced in c++ 11
 *
 * for(var_type var_name:sequence)
 *      statement;
 *
 * for(var_type var_name:sequence){
 *      statement;
 *      }
 *
 *  /////// idea of RBFL///////////
 *
 *   int scores [] {100, 90, 97};
 *
 *        //auto is a keyword that automatically chooses the type in a range based
 *   for (int score: scores)
 *      cout<< score<<endl;
 *
 * /////////// more examples //////////////////////////
 *      //     vector example//
 *    vector<double> temps {87.2, 77.1, 80.0, 72.5};
 *
 *    double avarage_temp{};
 *    double running_sum{};
 *
 *    for(auto temp: temps)
 *      running_sum +=temp;
 *
 *    average_temp = running_sum/temp.size();
 *
 *    /////////////////////////////////////////////
 *    ////////////initializer list////////////////
 *    ////////////////////////////////////////////
 *     double avarage_temp{};
 *    double running_sum{};
 *    int size {0};
 *
 *    for(auto temp: {87.2, 77.1, 80.0, 72.5}){
 *      running_sum +=temp;
 *      ++size;
 *}// ****** downside is that size must be calculated as you loop *******
 * /// **** useful if you know the elements in your collection ahead of time and that they wont be changed ***** ///////
 * ///////////////////////////////////////////////////////////
 *
 * RBFL for a string of chars
 *
 * for(auto c: "Frank")
 *      cout<<c<<endl;
 *
 * ////////////////////////////////////////////////////////////////
 *
 *
 *
 * */

#include <iostream>
#include <vector>

using namespace std;

int main() {


//    int scores[]{};
//
//    for(int score:scores)
//        cout<<score<<endl;

//vector<double> temperatures{87.9, 77.9,80.0,72.5};
//double avarage_temp{};
//double  total{};
//
//for (auto temp: temperatures)
//    total+=temp;
//if(temperatures.size() !=0)
//    avarage_temp = total/temperatures.size();
//
//cout<<"average temperature is: " << avarage_temp<<endl;

for(auto val : {1,2,3,4,5})
    cout<<val<<endl;


cout<<endl;
    return 0;
}