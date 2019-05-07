#include <iostream>
#include <vector>

using namespace std;

int main() {
    //  vector <char> vowels;       // empty
    //   vector <char> vowels(5);   // each initialized to 0
    vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    //   vector <int> test_scores(3);     // 3 elements initialized to zero
    //    vector <int> test_scores (3,100))    // 3 elements all initialized to 100

    vector<int> test_scores{100, 98, 89};

    // cout << "\nTest scores using array syntax //
    // cout << test_scores[0]<< endl;//
    // cout << test_scores[1]<< endl;//
    // cout << test_scores[2]<< endl;//

    // cout << "\nTest using vector syntax " << endl; //

    // cout << test_scores.at(0)<< endl; //
    // cout << test_scores.at(1) << endl; //
    // cout << test_scores.at(2) << endl; //

    //cout << "\n Enter 3 test scores: " << endl; //

    //cin >> test_scores.at(0);//
    //cin >> test_scores.at(1) ; //
    //cin >> test_scores.at(2);//

    // cout << "\n Updated test scores: " << endl; //

    //cout << test_scores.at(0) << endl; //
    //cout << test_scores.at(1) << endl; //
    //cout << test_scores.at(2) << endl; //

    // cout << "\n Enter a test score to add to the vector: "    //

    // int score_to_add{0};//
    // cin >> score_to_add ;//

    // test_scores.push_back(score_to_add);//

    // cout << "\n Enter another score to add: "    //

    // cin >> score_to_add ;//

    // test_scores.push_back(score_to_add);//

    // cin >> score_to_add ;//

    // cout << "\n Test scores are now : " << endl;

    //cout << test_scores.at(0) << endl; //
    //cout << test_scores.at(1) << endl; //
    //cout << test_scores.at(2) << endl; //
    //cout << test_scores.at(3) << endl; //
    //cout << test_scores.at(4) << endl; //

    //cout << "\n There are now " << test_scores.size()<< " scores in the vector" << endl; //

    //cout << "\n This should be an exception!! " test_scores.at(10) ;

    // example of a 2D vector
    // (basically a vector of vectors, or exactly that.... symantix :) " //
    // vector <vector<int>> movie_ratings {
   // { 1, 2, 3, 4 },
   // { 1, 2, 3, 4 },
  //  { 1, 2, 3, 4 }
   //   };   //

   // cout <<"\n Here are the movie ratings from reviewer one using array syntax" << endl; //

   //cout << movie_rating[0][0] << endl; //
   //cout << movie_rating[0][1] << endl; //
    //cout << movie_rating[0][2] << endl; //
    //cout << movie_rating[0][3] << endl; //

    // cout <<"\n Here are the movie ratings from reviewer one using vector syntax" << endl; //

    //cout << movie_rating.at(0).at(0) << endl; //
    //cout << movie_rating.at(0).at(1) << endl; //
    //cout << movie_rating.at(0).at(2) << endl; //
    //cout << movie_rating.at(0).at(3) << endl; //

    //cout <<endl;//

    //return 0; //


}