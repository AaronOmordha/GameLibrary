#ifndef GAME_H
#define GAME_H

#include "LibraryItem.h"
#include <iostream>
#include <string>
using namespace std;

class Game : public LibraryItem // Declare Game as a child class of LibraryItem
{
    private:
    float price;
    bool free;
    public:

    // Constructors
    Game();
    Game(string n, string rel, string dev, string type, double size, float p);

    // Setter and Getter functions
    void setPrice(float);

    float getPrice();
    bool checkFree();
    void displayInfo(); // Overriding abstract function from parent class
    protected:

};

#endif