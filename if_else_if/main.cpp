#include <iostream>

using namespace std;

int main() {
    int num{};
    const int target{10};

    cout << "Enter a number and it will be compared to " << target <<endl;
    cin>>num;

    if (num>=target){
        cout<< "\n=========================================="<<endl;
        cout <<num << "is greater than or equal to " << target <<endl;
        int diff (num-target);
        cout<< num << "is" << diff << "greater than" << target << endl;

    } else{
        cout<< "\n=========================================="<<endl;
        cout <<num << "is less than " << target <<endl;
        int diff (target-num);
        cout<< num << "is" << diff << "greater than" << target << endl;
    }

    return 0;
}