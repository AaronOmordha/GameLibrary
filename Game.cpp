#include "Game.h"
#include <iostream>
#include <string>
using namespace std;

// Constructors
Game::Game() : LibraryItem(){
    price = 0;
}

Game::Game(string n, string rel, string dev, string type, double size, float p) : LibraryItem(n, rel, dev, type, size){
    price = 0.0;
    if (price == 0){ // If price is 0, game is marked as free
        free = true;
    }else{
        free = false;
    }
}

void Game::setPrice(float p){
    if (p < 0){
        cout << "Price cannot be negative!" << endl;
    }
    else if (p == 0)
    free = true;
    price = p;
}

float Game::getPrice(){
    return price;
}

bool Game::checkFree(){
    return free;
}

void Game::displayInfo(){
    cout << "\nGame Name: " << getName() << endl;
    cout << "Release Date: " << getReleaseDate() << endl;
    cout << "Developer Name: " << getDevName() << endl;
    cout << "Developer Type: " << getDeveloperType() << endl;
    cout << "File Size: " << getFileSize() << "MB" << endl;
    cout << "Price: $" << getPrice() << endl;
    if (checkFree()){
        cout << "This game is free!" << endl;
    }else{
        cout << "This game is not free!" << endl;
    }
}