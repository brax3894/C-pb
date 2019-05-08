#include <iostream>

using namespace std;

int main() {

    char letter_grade{};

    cout << "Enter the letter grade you expect on the exam: " ;
    cin >> letter_grade;

    switch(letter_grade){
        case 'a':
        case 'A':
            cout<<"You need a 90 or above"<<endl;
            break;
        case 'b':
        case 'B':
            cout<< "You need an 80-89"<< endl;
            break;
        case 'c' :
        case 'C' :
            cout<< "You will need a 70-79" << endl;
        case 'd' :
        case 'D' :
            cout<<"You will need a 60-69";
            break;
        case 'f' :
        case 'F' :
            cout<< "well... You may need to retake the course" << endl;
            {
                char confirm{};
                cout<<"Are you sure?(Y/N)";
                cin>> confirm;
                if(confirm == 'y' ||confirm =='Y')
                    cout<<"Study harder next semester and pass my exam!"<<endl;
                else if (confirm=='n' || confirm=='N')
                    cout<<"Great choice, study hard this week and try one more time next week, good luck :)" <<endl;
                else
                    cout<<"there are only 2 choices, how'd you screw it up? I even accounted for upper and lower case letters" <<endl;

                break;

            }
        default:
            cout << "Sorry that is an incorrect grade"  << endl;
    }


    return 0;
}