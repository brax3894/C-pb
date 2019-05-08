#include <iostream>

using namespace std ;

int main() {

    cout << "Welcome to the karpet kleaners" << endl ;
    cout<< "We have set prices for large rooms and small rooms. $25$ and 35$  " <<  endl ;

    cout << "How many small rooms would you like cleaned? " ;
    int small_rooms{0};
    cin >> small_rooms;

    cout << "How many large rooms would you like cleaned? " ;
    int large_rooms{0};
    cin >> large_rooms;

    const double small_room_cost{25};
    const double large_room_cost{35};
    const double  sales_tax {0.06};

    cout << "The estimate for the cost will be"<< endl;
    cout << "==================================" ;
    cout << "Number of small rooms: " << small_rooms << endl ;
    cout << " Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room :$"<<small_room_cost<< endl;
    cout << "Price per large room :$"<<large_room_cost<< endl;

    cout << "Cost: $"
         << (small_rooms*small_room_cost) + (large_rooms*large_room_cost);

    cout << "Tax: $"
         <<  ((small_room_cost*small_rooms)+
                 (large_room_cost*large_rooms))*sales_tax<< endl;

    cout << " ===========================================" << endl;
    cout << "The total cost is $ "
         <<((small_room_cost*small_rooms)+(large_room_cost*large_rooms))+
          (((small_room_cost*small_rooms)+(large_room_cost*large_rooms))*sales_tax)<<
         endl ;

    cout << "This estimate will be valid for 30 days " << endl;






    return 0;
}