#include <iostream>
#include <vector>

using namespace std;

//prototypes for displaying menu and getting user selection
void display_menu();
char get_selection();

//menu handling function prototypes
void handle_display(const vector<int> & v);
void handle_add(vector <int> &v);
void handle_mean(const vector<int>&v);
void handle_smallest(const vector<int>&v);
void handle_largest(const vector<int>&v);
void handle_find(const vector <int> &v);
void handle_quit();
void handle_unknown();

// prototypes for functions
// that work with the list
void display_list(const vector <int> &v);
double calculate_mean(const vector <int> &v);
bool find(const vector<int> &v, int target);


int main() {
    vector <int> numbers;
    char selection{};

    do{
        display_menu();
        selection=get_selection();
        switch(selection){
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                handle_quit();
                break;
            default:
                handle_unknown();
        }
    }while(selection != 'Q');

    cout<<endl;

    return 0;
}

/*-----------------------
 * displays the menu
 -----------------------*/
void display_menu(){
    cout<<"\nP - Print numbers"<<endl;
    cout<<"A - Add a number "<< endl;
    cout<<"M - Display mean of the numbers"<< endl;
    cout<<"S - Display the smallest number "<<endl;
    cout<<"L - Display the largest number" << endl;
    cout<<"F - Find a number"<<endl;
    cout<<"Q - Quit"<<endl;
    cout<<"\n Enter your selection: ";
}

/*-------------------------------
 *reads a character selection from stdin
 * and returns it as uppercase
 --------------------------------*/
char get_selection(){
    char selection{};
    cin>>selection;
    return toupper(selection);
}
/*----------------------------------------
 * expects a list of ints as a vector
 * and displays all ints in square brackets
 * -------------------------------------*/

void display_list(const vector<int>&v){
    cout<<"[";
    for (auto num:v)
        cout<<num<<" ";
    cout<<"]";
}
/*----------------------------------------
 *called when user selects P  --const ref perameter
 * means this function will not modify list of numbers, only print them
 -----------------------------------------------*/
void handle_display(const vector<int> & v){
    if(v.size()==0)
        cout<<"[] the list is empty"<<endl;
    else
        display_list(v);
}

/*-------------------------------------------------
 * function called when user selects add a number
 * to the list from the menu
 * -----------------------------------------------*/
void handle_add(vector <int> &v){
    int num_to_add{};
    cout<<"Enter an integer to add to the list: ";
    cin>>num_to_add;
    v.push_back(num_to_add);
    cout<<num_to_add<<" added"<<endl;
}
/*-------------------------------------------------
 * expects a list of ints as a vector
 * returns calculated mean
 -------------------------------------------------*/
double calculate_mean(const vector <int> &v){
    int total{};
    for(auto num:v)
        total += num;
    return static_cast<double>(total)/v.size();
}

/*------------------------------------------------
 * this function is called when user selects
 * calculate the mean from the main function
 * ----------------------------------------------*/
void handle_mean(const vector<int>&v){
    if(v.size()==0)
        cout<<" Unable to calculate the mean - the list is empty"<< endl;
    else
        cout<<"The mean is "<<calculate_mean(v)<<endl;

}


/*-------------------------------------
 * handle find //added at the end
 *------------------------------ */
void handle_find(const vector <int> &v){
    int target{};
    cout<<"Enter the number to find:";
    cin>>target;
    if(find(v,target))
        cout<<target <<"was found";
    else
        cout<<target<<"was not found";
}

/*-------------------------------------
 * find in find //added at the end
 *---------------------------------- */
bool find(const vector<int> &v,int target){
    for (auto num:v)
        if (num==target)
            return true;
    return false;
}

/*-----------------------------
 * called when user selects quit
 *------------------------------*/
void handle_quit(){
    cout<<"Goodbye"<<endl;
}
/*---------------------
 * called when ever the user enters
 * an invalid selection
 -----------------------*/
void handle_unknown(){
    cout<<"Invalid selection - try again"<<endl;
}
/*-------------------------
 * assigns an int to 0 element and loops for largest
 ---------------------------*/
void handle_largest(const vector<int>&v){
    if (v.size() ==0)
        cout<<"Not able to give you the largest number you haven't entered"<<endl;
    else{
        int largest = v.at(0);
        for(auto num:v)
            if (num>largest)
                largest= num;
        cout<<"The largest number is: "<< largest<<endl;
    }
}

/*-------------------------
 * assigns an int to 0 element and loops for smallest
 ---------------------------*/
void handle_smallest(const vector<int>&v){
    if (v.size() ==0)
        cout<<"Not able to give you the largest number you haven't entered"<<endl;
    else{
        int smallest = v.at(0);
        for(auto num:v)
            if (num<smallest)
                smallest= num;
        cout<<"The largest number is: "<< smallest<<endl;
    }
}