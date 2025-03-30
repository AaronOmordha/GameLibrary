#include "Developer.h"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

int Developer::developerCount = 0;
Developer::Developer(){     //Constructor
    developerCount++;
    name = "Unknown";
    developerType = "Unknown";
}

Developer::Developer(const string& devName, const string& devType){   //Constructor
    developerCount++;
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
void Developer::addItem(shared_ptr<LibraryItem> item)   //Add item to developer
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
        for(shared_ptr<LibraryItem> item : createdItems){
            cout << item->getName() << endl;
        }
    }
}

Developer::~Developer(){    //Destructor
    cout << "Destroying Developer: " << name << endl;
    createdItems.clear(); // Shared pointer will automatically delete the items
    developerCount--;
}

// --------------------------ASSIGNMENT 2 INSTALLATIONS--------------------------
Developer::Developer(const Developer& other){    //Copy Constructor
    developerCount++;
    name = other.name;
    developerType = other.developerType;
    createdItems = other.createdItems; // shared_ptr handles copying
}

Developer& Developer::operator = (const Developer& other){    //Assignment Operator
    if(this != &other){
        name = other.name;
        developerType = other.developerType;
        createdItems = other.createdItems; // shared_ptr handles copying
    }
    return *this;
}

bool Developer::operator == (const Developer& other) const{    //Equality Operator
    return name == other.name;
}

bool Developer::operator != (const Developer& other) const{    //Inequality Operator
    return name != other.name;
}

bool Developer::operator < (const Developer& other) const{    //Less Than Operator
    return name < other.name;
}

bool Developer::operator > (const Developer& other) const{    //Greater Than Operator
    return name > other.name;
}

ostream& operator << (ostream& os, const Developer& dev){    //Output Operator
    os << "Developer: " << dev.name << 
    "\nDeveloper Type: " << dev.developerType << endl;
    return os;
}

istream& operator >> (istream& is, Developer& dev){    //Input Operator
    cout << "Enter Developer Name: ";
    is >> dev.name;
    cout << "Enter Developer Type: ";
    is >> dev.developerType;
    return is;
}