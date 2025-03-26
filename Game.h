#ifndef GAME_H
#define GAME_H

#include "LibraryItem.h"
#include <iostream>
#include <string>
using namespace std;

class Game : public LibraryItem{ // Declare Game as a child class of LibraryItem

    private:
    float price;
    bool free;

    public:

    // Constructors
    Game();
    Game(const string& n, const string& rel, const string& dev, const string& type, const string& location, double size, float p);

    // Setter and Getter functions
    void setPrice(float);

    float getPrice();
    bool checkFree();
    void displayInfo() override; // Overriding abstract function from parent class

    // -------------------------ASSIGNMENT 2 INSTALLATIONS-------------------------
    Game(const Game& other);
    Game& operator = (const Game& other);

    bool operator == (const Game& other) const;
    bool operator != (const Game& other) const;
    bool operator < (const Game& other) const;
    bool operator > (const Game& other) const;

    friend ostream& operator << (ostream& os, const Game& item);
    friend istream& operator >> (istream& is, Game& item);
    // ASSIGNMENT 2 INSTALLATIONS

    protected:

};

#endif