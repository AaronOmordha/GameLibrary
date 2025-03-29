#ifndef LIBRARY_H
#define LIBRARY_H

#include <memory>
#include <iostream>
#include <string>
#include <vector>
#include "LibraryItem.h"
#include "Game.h"
#include "Application.h"    


using namespace std;

class Library{

    private:
    string libraryName; 
    vector< shared_ptr<LibraryItem> > items; 
    const int MAX_SIZE = 5;

    public: 
    Library(); 
    Library(const string& n); 
    ~Library(); 

    void setLibraryName(const string& n); 
    const string& getLibraryName(); 
    void addItem(shared_ptr<LibraryItem> item);
    void displayItems();

};

#endif