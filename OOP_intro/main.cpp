/*
 * =========================================
 * What is object oriented programming??
 * =========================================
 * --but first a recap of procedural programming and its limitations
 *
 *            ------------------------
 *            procedural programming
 *            -----------------------
 *         - basically a collection of functions that focus on the action a function takes
 *         - data is declared separately,
 *         - data is passed as arguments into functions
 *         - easy to learn since we can break down large tasks in to smaller tasks
 *           ---------------
 *           limitations
 *           -------------
 *         ----functions need to know about the structure of the data,
 *            -if the structure of the data changes, many functions must be changed(bad news in large programs)
 *
 *         when programs become larger they become more difficult to understand, maintain, extend and debug
 *
 *  ++++++++++++++++++++++++++++++++++++
 *== What is object oriented programming ==
 *  ++++++++++++++++++++++++++++++++++++
 *---classes and objects
 *    --focus is on classes that model real world domain entities
 *    --allows developers to think on a higher level of abstraction
 *    --used successfully in very large programs
 *    --encapsulation: objects that contain data AND work on that data, an extension of the abstract data type
 *    --c++ is capable of information hiding: implementation-specific logic that can be hidden
 *    --OOP is all about reusability
 *
 *    #########################
 *    //classes and objects //
 *    ########################
 *
 *      -classes
 *      --blueprint from which objects are created
 *      -- a user defined data type
 *      -- has attributes (data)
 *      -- has methods (functions)
 *      -- can hide data from methods
 *      -- provides a public interface
 *
 *      example classes
 *        -account
 *        -employee
 *        -image
 *        -std::vector
 *        -std::string
 *
 *     --Objects
 *      --created from a class
 *      -- represents a specific instance of a class
 *      -- can create man objects
 *      -- each has its own identity
 *      -- each object can use the defined class methods
 * =========================================================================
 *
 *      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 *          declaring a class
 *      &&&&&&&&&&&&&&&&&&&&&&&&&
 *
 *
 *
 *
 */

#include <string>
#include <iostream>
#include <vector>

using namespace std;

//this class player, is a blueprint to create player objects from and each player will have a name, health and xp
class Player{
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string);
    bool is_dead();
};

int main() {

    Player Brax;
    Player hero;

    //this statement reads players is an array of player objects
    Player players[]{Brax, hero};

    //reads: player_vec is a vector of player objects
    vector <Player> player_vec{Brax};
    player_vec.push_back(hero);

    Player *enemy{nullptr};
    enemy = new Player;

    delete enemy;


    return 0;
}