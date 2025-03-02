#include "Developer.h"

Developer::Developer(){
    name = "Unknown";
    developerType = "Unknown";
}

Developer::Developer(const string& devName, const string& devType){
    name = devName;
    developerType = devType;
}

void Developer::setName(const string& devName){
    name = devName;
}

void Developer::setDeveloperType(const string& devType){
    developerType = devType;
}

const string& Developer::getName()const{
    return name;
}

const string& Developer::getDeveloperType()const{
    return developerType;
}

void Developer::addItem(LibraryItem* item){
    createdItems.push_back(item);
}

void Developer::displayDeveloperInfo()const{
    cout << "\nDeveloper: " << name << endl;
    cout << "\nDeveloper Type: " << developerType << endl;
    cout << "\nCreated Items: " << endl;
    
    if(createdItems.empty()){
        cout << "No items created by this developer!\n" << endl;
        return;
    }else{
        for(LibraryItem* item : createdItems){
            cout << item->getName() << endl;
        }
    }
}

Developer::~Developer(){
    cout << "Destroying Developer: " << name << endl;
    for(LibraryItem* item : createdItems){
        delete item;
    }
    createdItems.clear();
}