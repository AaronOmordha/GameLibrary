#include "Game.h"
#include <iostream>
#include <string>
using namespace std;


// Constructors
Game::Game() : LibraryItem()
{
    price = 0;
}

Game::Game(string n, string rel, string dev, bool type, double size, float p) : LibraryItem(n, rel, dev, type, size)
{
    price = p;
    if (price == 0) // If price is 0, game is marked as free
    {
        free = true;
    }
}


// Functions

            // Setters
void Game::setPrice(float p)
{
    if (p < 0)
    {
        cout << "Price cannot be negative" << endl;
    }
    else if (p == 0)
    free = true;
    price = p;
}

            // Getters
float Game::getPrice()
{
    return price;
}

bool Game::checkFree()
{
    return free;
}