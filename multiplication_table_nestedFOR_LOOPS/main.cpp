#include <iostream>

using namespace std;

int main() {
    // first loop triggers the second loop
    for (int num1{1}; num1<=10; ++num1){
        //which fires 10 times
        for(int num2{1};num2<=10; ++num2){
            //  and outputs num1 (1) *(1-10) on separate lines
            cout<< num1<< " * " << num2 <<" = "<< num1*num2<<endl;
            // then prints a separation indicator where the loop starts over, num 1 wont increment until the num2 loop finishes
        }
        cout<<"-----------------"<<endl;
    }
// the outer loop loops once for every 10 inner loops



    return 0;
}