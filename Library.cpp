#include "Library.h"
#include <iostream>
#include <string>
#include <vector>
#include "LibraryItem.h"
#include "Game.h"
#include "Application.h"    

using namespace std;

Library::Library(){
    libraryName = "Unknown Library";
}

Library::Library(const string& n){
    libraryName = n;
}  

void Library::setLibraryName(const string& n){
    libraryName = n;
}

const string& Library::getLibraryName(){
    return libraryName;
}

void Library::addItem(LibraryItem* item){
    if(items.size() < MAX_SIZE){
        items.push_back(item);
        cout << "Added: " << item->getName() << "\nInto Library: " << libraryName << endl;
    } else {
        cout << "Library is full, cannot add more items!" << endl;
    }
}

void Library::displayItems(){
    if(items.empty()){
        cout << "Library is empty!" << endl;
        return;
    }

    cout << "\nLibrary: " << libraryName << endl;
    for(LibraryItem* item : items){
        item->displayInfo();
    }
}

Library::~Library(){
    cout << "Destroying Library: " << libraryName << endl;
    for(LibraryItem* item : items){
        delete item;
    }
    items.clear();
}