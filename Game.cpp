#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

// Initialize static variable
int Game::gameCount = 0; // Static variable to keep track of the number of games
// Constructors
Game::Game() 
: LibraryItem(){ // Call parent class constructor
    gameCount++;
    price = 0.0;
    free = true;
}

Game::Game(const string& n, const string& rel, const string& dev, const string& type, const string& location, double size, float p)
: LibraryItem(n, rel, dev, type, location, size){ // Call parent class constructor
    gameCount++;
    price = p;
    if (price == 0){ // If price is 0, game is marked as free
        free = true;
    }
    else{
        free = false;
    }
}

// Destructor
Game::~Game(){ // Destructor
    cout << "Destroying Game: " << getName() << endl;
    gameCount--;
}

// Setter Functions
void Game::setPrice(float p){
    if (p < 0){
        cout << "Price cannot be negative!" << endl;
    }
    else
    {
        price = p;
            if (price == 0){
                free = true;
            }
            else{
                free = false;
            }
    }
}

// Getter Functions
float Game::getPrice(){
    return price;
}

bool Game::checkFree(){
    return free;
}

// Other Functons

// Overriding abstract "displayInfo" function from parent class
void Game::displayInfo(){
    LibraryItem::displayInfo();
    cout << "Item type: Game" << endl;
    if (checkFree() == 1){
        cout << "This game is free!" << endl;
    }
    else{
        cout << "Price: $" << getPrice() << endl;
    }
}

// --------------------------ASSIGNMENT 2 INSTALLATIONS--------------------------
    Game::Game(const Game& other) : LibraryItem(other){
        gameCount++;
        price = other.price;
        free = other.free;
    }

    Game& Game::operator = (const Game& other){
        if (this != &other){
            LibraryItem::operator=(other);
            price = other.price;
            free = other.free;
        }
        return *this;
    }

    bool Game::operator == (const Game& other) const{
        return (LibraryItem::operator==(other) && price == other.price);
    }

    bool Game::operator != (const Game& other) const{
        return !(*this == other);
    }

    bool Game::operator < (const Game& other) const{
        return price < other.price;
    }

    bool Game::operator > (const Game& other) const{
        return price > other.price;
    }

    ostream& operator<<(ostream& os, const Game& g) {
        os << static_cast<const LibraryItem&>(g);;
        if (g.free == 1){
            os << "This game is free!" << endl;
        }
        else{
            os << "Price : $" << g.price << endl;
        }
        return os;
    }

    istream& operator>>(istream& is, Game& g) {
        is >> static_cast<LibraryItem&>(g);
        is >> g.price;
        g.free = (g.price == 0.0);
        is.ignore();
        return is;
    }
