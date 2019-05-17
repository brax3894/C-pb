#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> numbers{};
    char selection{};

    do{
        // display menu
        // do while diplays entire list every time selection is not q
        cout<<"\nP - Print numbers"<<endl;
        cout<<"A - Add a number "<< endl;
        cout<<"M - Display mean of the numbers"<< endl;
        cout<<"S - Display the smallest number "<<endl;
        cout<<"L - Display the largest number" << endl;
        cout<<"Q - Quit"<<endl;
        cout<<"\n Enter your selection: ";
        cin>>selection;

        if(selection=='p' || selection == 'P'){
            if (numbers.size()==0)
                cout<<"[] - The list is empty" <<endl;
            else{
                cout<<"[";
                for(auto num: numbers)
                    cout<<num<<" ";
                cout<<"]"<<endl;
            }

        }else if (selection =='a' || selection == 'A'){
            int new_num;
            cout << "Enter an integer to add to the list: ";
            cin>> new_num;
            numbers.push_back(new_num);
            cout<< new_num << "added";

        }else if (selection =='M' || selection =='m'){
            if ( numbers.size() == 0)
                cout<<"Unable to calculate mean, it holds not data" << endl;
            else{
                int total{};
                for (auto num : numbers)
                    total+=num;
                cout<<"The mean is: " <<total/numbers.size() <<endl;
            }

        }else if(selection=='s'|| selection=='S'){
            if (numbers.size() ==0)
                cout<<"Not able to give you the smalllest number you haven't entered"<<endl;
            else{
                int smallest = numbers.at(0);
                for(auto num:numbers)
                    if (num<smallest)
                        smallest= num;
                 cout<<"The smallest number is: "<< smallest<<endl;
            }
        }

        else if(selection=='l'|| selection=='L'){
            if (numbers.size() ==0)
                cout<<"Not able to give you the largest number you haven't entered"<<endl;
            else{
                int largest = numbers.at(0);
                for(auto num:numbers)
                    if (num>largest)
                        largest= num;
                cout<<"The largest number is: "<< largest<<endl;
            }
        }else if (selection =='Q' || selection=='q'){
            cout<<"Goodbye"<<endl;
        }else{
            cout<<"unknown selection, please try again"<<endl;
        }


    }while(selection!='q'&& selection != 'Q');

    return 0;
}