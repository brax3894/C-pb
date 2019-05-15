/*
 * do{
 *      statements;
 *     }while(expression);
 *
 *
 * */

#include <iostream>

using namespace std;

int main() {

    char selection{};
    do{
        cout<<"\n-------------------"<<endl;
        cout<< "1. Do this "<< endl;
        cout<<"2. Do that" << endl;
        cout <<"3. Do something else"<<endl;
        cout<< "Q. quit."<<endl;
        cout<<"Enter your selection"<<endl;

        cin>>selection;

        if (selection=='1')
            cout<<"Doing this "<<endl;
        else if(selection =='1')
            cout<<"doing that";
        else if (selection=='3')
            cout<<"doing something else"<<endl;
        else if (selection=='q' || selection=='Q')
            cout<< "Thanks for running the code, goodbye"<<endl;
        else
            cout<<"Unknown option -- try again... " << endl;

    }while(selection!='q'&&selection!='Q');


    return 0;
}