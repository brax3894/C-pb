/*yes... I know i spelled arithmetic wrong in the file name
 *-------------------
 * pointer arithmetic
 * --------------------
 *  pointers can be used in:
 *  --assignment expressions
 *  --arithmetic expressions
 *  --comparison expression
 *
 *  pointer arithmetic only makes sense with raw arrays
 *
 *  (++) and (--) point to next and previous elements in an array
 *
 *
 *      + and -
 *  ---------------
 *   + increments the pointer by n*sizeof(type)
 *   ---- int_ptr += n;     or    int_ptr = int_ptr+n;
 *
 *  - decrements the pointer by n*sizeof(type)
 *   ---- int_ptr -= n;     or    int_ptr = int_ptr-n;
 *
 */

#include <iostream>

using namespace std;

int main() {

    int scores[]{100,95,89,68,-1};
    int *score_pointer{scores};

    while(*score_pointer!=-1){
        cout<<*score_pointer<<endl;
        score_pointer++;
    }

    cout<<"\n-----------------------"<<endl;
    while(*score_pointer!=-1){
        // score_pointer++ is different than (*score_pointer)++.... first option increments the actual pointer
        // second option dereferences the pointer and increments the integer
        cout<<*score_pointer++<<endl;
    }

    cout<<"\n---------------------"<<endl;
    string s1{"Braxton"};
    string s2{"Braxton"};
    string s3 {"John"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout<<boolalpha;
    cout<< p1<<" == "<< p2<<": "<<(p1==p2)<<endl; //false
    cout<< p1 <<" == "<<p3<<": "<<(p1==p3)<<endl;//true

    cout<< *p1<<" == "<<*p2<<": "<<(*p1==*p2)<<endl; //true
    cout<< *p1<<" == "<<*p3<<": "<<(*p1==*p3)<<endl; //true

    p3= &s3;
    cout<<*p1<<" == "<<*p3<<": "<< (*p1==*p3)<<endl; // false

    cout<<"\n-------------------------"<<endl;
    char name[]{"Braxton"};

    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1= &name[0];
    char_ptr2= &name[3];



    cout<<" In the string"<<name<<", "<<*char_ptr2<<" is "<< (char_ptr2 - char_ptr1)<<"characters away from "<< *char_ptr1<<endl;

    cout<<endl;


    return 0;
}