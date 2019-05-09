#include <iostream>
/*
 *    ?
      (cond_expre) ? expr1 :expr2
cond_expr evaluates to a boolean expression

    if cond_exp is True then the value of expr1 is returned
    if cond_exp is false then the value of expr2 is returned

 similar to if-else
 ternary operator
 very useful when used in line
 do not overuse

 **I would describe these more like true or false, if-thens(in plain english) let *=T(1)/F(0)(val) (for an expresion) (if_*) ? (a):(b) (if_1>>a) (if_0>>b)

 example idea:
    int a{10}, b{20};
    int score {92};
    int result{};

    result = (a>b) ? a:b

    result = (a<b) ? (b-a) ? (a-b);

    result = (b!=0) ? (a/b) : 0 ;

    cout << ((score>90) ? "Excellent" : "Good");

*
 * */
using namespace std;

int main() {
  //  int num{};


//    cout<< "Enter an integer: ";
//    cin>> num;
//
//    if (num%2==0)
//        cout<< num << "is even"<<endl;
//    else
//        cout<<num<< "is odd"<< endl;
//    // the same if-else statement on one line
//    //              if(22%2=0)is(1(or)/0) then  a    (or)/   b //////== 1(True) results or == the 'a' value while 0(False) results(==) 'b' value
//    cout << num << "is " <<((num%2==0) ? "even": "odd")<<endl;
//    //       22    is      if(22%2=0)is(1/0) then

    int num1{},num2{};

    cout<<"Enter two integers separated by a space: ";
    cin>> num1 >>num2;

    if(num1!=num2){
        cout<< "Largest: " << ((num1>num2) ? num1:num2) << endl;
        cout<< "Smallest" << ((num1<num2) ? num1 : num2)<<endl;
    }else{
        cout<<"The numbers are the same" << endl;
    }

    cout<<endl;
     return 0;
}