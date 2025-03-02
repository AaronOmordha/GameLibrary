#include "Developer.h"

Developer::Developer(){     //Constructor
    name = "Unknown";
    developerType = "Unknown";
}

Developer::Developer(const string& devName, const string& devType){   //Constructor
    name = devName;
    developerType = devType;
}


// Setter Functions

void Developer::setName(const string& devName){
    name = devName;
}

void Developer::setDeveloperType(const string& devType){
    developerType = devType;
}

// Getter Functions

const string& Developer::getName()const
{
    return name;
}

const string& Developer::getDeveloperType()const
{
    return developerType;
}


// Other Functons
void Developer::addItem(LibraryItem* item)   //Add item to developer
{
    createdItems.push_back(item);
}

void Developer::displayDeveloperInfo()const    //Display developer info
{
    cout << "\nDeveloper: " << name << endl;
    cout << "Developer Type: " << developerType << endl;
    cout << "Created Items: " << endl;
    
    if(createdItems.empty()){
        cout << "No items created by this developer!\n" << endl;
        return;
    }else{
        for(LibraryItem* item : createdItems){
            cout << item->getName() << endl;
        }
    }
}

Developer::~Developer(){    //Destructor
    cout << "Destroying Developer: " << name << endl;
    for(LibraryItem* item : createdItems){
        delete item;
    }
    createdItems.clear();
}