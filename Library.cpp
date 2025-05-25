#include "Library.h"
#include <memory>
#include <iostream>
#include <string>
#include <vector>  
#include <fstream>

using namespace std;

// Initialize static variable
int Library::libraryCount = 0;
Library::Library(){                 //Constructor
    libraryCount++;
    libraryName = "Unknown Library";
}

Library::Library(const string& n){  //Constructor
    libraryCount++;
    libraryName = n;
}  

void Library::setLibraryName(const string& n){  //Setter
    libraryName = n;
}

const string& Library::getLibraryName(){    //Getter
    return libraryName;
}

void Library::addItem(shared_ptr<LibraryItem> item){   //Add item to library
    if(items.size() < MAX_SIZE){
        items.push_back(item);
        cout << "Added: " << item->getName() << "\nInto Library: " << libraryName << endl;
    } else {
        cout << "Library is full, cannot add more items!" << endl;
    }
}

void Library::displayItems(){   //Display items in library
    if(items.empty()){
        cout << "Library is empty!" << endl;
        return;
    }

    cout << "\nLibrary: " << libraryName << endl;

    cout << "\nGames and applications in Library: " << endl;
    for(shared_ptr<LibraryItem> item : items){
        cout << item->getName() << endl;
    }

    cout << "\nDetails: " << endl;
    for(shared_ptr<LibraryItem> item : items){
        item->displayInfo();
    }
}

    // File handling functions
void Library::saveToFile(const string& filename) const
{
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Error opening file for writing: " << filename << endl;
        return;
    }

    outFile << "Library Name: " << libraryName << endl;
    outFile << "Items Count: " << items.size() << endl;
    outFile << endl;

    for (const auto& item : items) {
        // Check type using dynamic_pointer_cast
        if (dynamic_pointer_cast<Game>(item)) {
            outFile << "Type: Game" << endl;
        } else if (dynamic_pointer_cast<Application>(item)) {
            outFile << "Type: Application" << endl;
        } else {
            outFile << "Type: Unknown" << endl;
        }
        outFile << *item << endl; // Output item details
        outFile << endl; // Add a blank line after each item
    }

    outFile.close();
    cout << "Library saved to file: " << filename << endl;
}


Library::~Library(){    //Destructor
    cout << "Destroying Library: " << libraryName << endl;
    items.clear(); // Clear the vector of items
    libraryCount--;
    //items.clear(); // Shared pointer will automatically delete the items
}