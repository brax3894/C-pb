#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3 (vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num){
    num=1000;
}

void pass_by_ref2(string &s){
    s="changed";
}

void pass_by_ref3(vector<string> &v){
    v.clear(); // delete all vector elemnets
}

void print_vector (const vector<string> &v){
    for (auto s:v)
        cout<<s<<" ";
    cout<<endl;
}


int main() {

    int num{10};
    int another_num{20};

    cout<<"num before calling pass_by_ref1:"<<num<<endl;
    pass_by_ref1(num);
    cout<<"num after calling pass_by_ref1:"<<num<<endl;

    cout<<"\nAnother_num before calling pass_by_ref1: "<<num<<endl;
    pass_by_ref1(num);
    cout<<"Another_num after calling pass_by_ref1: "<<num<<endl;

    string name{ "Brax"};
    cout<<"\nName before pass_by_ref2: "<<name<<endl;
    pass_by_ref2(name);
    cout<<"Name after calling pass_by_ref2:  "<<name<<endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    cout<<"\nstooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout<<"\nStooges after calling pass_by_vector3: ";
    print_vector(stooges);

    cout<<endl;



    return 0;
}