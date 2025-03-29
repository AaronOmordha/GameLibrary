#include "Library.h"
#include <memory>
#include <iostream>
#include <string>
#include <vector>  

using namespace std;

Library::Library(){                 //Constructor
    libraryName = "Unknown Library";
}

Library::Library(const string& n){  //Constructor
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

Library::~Library(){    //Destructor
    cout << "Destroying Library: " << libraryName << endl;
    //items.clear(); // Shared pointer will automatically delete the items
}