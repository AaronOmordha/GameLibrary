#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include <vector>
#include "LibraryItem.h"
#include "Game.h"
#include "Application.h"    


using namespace std;

class Library 
{
    private: //data member variables declared here
    string libraryName; //name of the library
    vector<LibraryItem> items; //reference to a vector of LibraryItem objects
    const int MAX_SIZE = 5; //maximum size of the vector


    public: //function prototypes declared here
    Library(); //default constructor
    Library(const string& n); //constructor with a string parameter
    ~Library(); //destructor

    void setLibraryName(const string& n); //function to set the name of the library
    const string& getLibraryName(); //function to get the name of the library

    void addItem(const LibraryItem& item); //function to add a LibraryItem object to the vector
    //void removeItem(const LibraryItem& item); //function to remove a LibraryItem object from the vector
    //void displayItems(); //function to display all LibraryItem objects in the vector
};

#endif