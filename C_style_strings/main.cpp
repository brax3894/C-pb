#include <iostream>
#include <cstring> // c-style string functions
#include <cctype> // character based functions

using namespace std;

int main() {
//    // [] is the ammount of memory space alotted for the names
//    char first_name[20]{};
//    char last_name[20]{};
     char full_name[45]{};
    char temp[50]{};



//
//    cout<< first_name; // won't display anything valuable
//
//    cout<<"Please enter your first name";
//    cin>> first_name;
//
//    cout<<"Please enter your last name";
//    cin>> last_name;



//    cout<<"------------------------"<< endl;


//
//
//    //                                                  strlen is just string length, counts characters in a string
//    cout<<"Hello"<< first_name<< "your first name has "<< strlen(first_name)<<"characters"<< endl;
//    cout<< "and your last name, " << last_name << "has" << strlen(last_name)<< "characters"<< endl;
//
//    strcpy(full_name, first_name); // copy first_name to full_name
//    strcat(full_name, " ")      ; //  concatenate full_name and a space
//    strcat(full_name, last_name); // concatenate full name (so far) to last_name... technically last_name gets tacked on to full_name, but  with the space you just added
//    cout<< "Your full name is " << full_name<< endl;

//


    cout<< "----------------------"<<endl;
    cout<< "Enter your full name: ";
    cin>>full_name;
    cout<<"Your full name is "<<full_name<<endl;


    //   if you typed in first/last  seperated by a space, the line would end at the space because the compiler considers it whitespace end endl;
// /// ////////////////////////////////////////////////////

cout<<"Enter your full name: " ;
cin.getline(full_name, 50); // reads in the entire name including white space
cout<< "Your full name is "<< full_name<< endl;


cout<<"--------------------------"<<endl;



strcpy(temp, full_name); // copy temp to full name
if (strcmp(temp, full_name)==0)
    cout<< temp<< " and " << full_name << " are the same" << endl;
else
    cout<<temp << " and " << full_name << " are different " << endl;

cout<<"-------------------------"<< endl;



 // ranged based for loop that replaces every char instance with an uppercase letter
for(size_t i{0}; i < strlen(full_name); i++){
    // full names of i, each specific char
    if(isalpha(full_name[i]))
        // convert letter to upp case and puts it back in place
        full_name[i] = toupper(full_name[i]);
}
cout<<"Your full name is " << full_name << endl;




    return 0;
}
