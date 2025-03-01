#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

// Constructors
Game::Game() 
: LibraryItem() // Call parent class constructor
{
    price = 0.0;
    free = true;
}

Game::Game(const string& n, const string& rel, const string& dev, const string& type, const string& location, double size, float p)
: LibraryItem(n, rel, dev, type, location, size) // Call parent class constructor
{
    price = p;
    if (price == 0)
    { // If price is 0, game is marked as free
        free = true;
    }
    else
    {
        free = false;
    }
}


// Setter Functions

void Game::setPrice(float p)
{
    if (p < 0)
    {
        cout << "Price cannot be negative!" << endl;
    }
    else
    {
        price = p;
            if (price == 0)
            {
                free = true;
            }
            else
            {
                free = false;
            }
    }
}


// Getter Functions


float Game::getPrice()
{
    return price;
}

bool Game::checkFree()
{
    return free;
}


// Other Functons

// Overriding abstract "displayInfo" function from parent class
void Game::displayInfo()
{
    LibraryItem::displayInfo();
    if (checkFree())
    {
        cout << "This game is free!" << endl;
    }
    else
    {
        cout << "Price: $" << getPrice() << endl;
    }
}