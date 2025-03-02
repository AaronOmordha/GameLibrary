#include "Developer.h"

Developer::Developer(){     //Constructor
    name = "Unknown";
    developerType = "Unknown";
}

Developer::Developer(const string& devName, const string& devType){   //Constructor
    name = devName;
    developerType = devType;
}

void Developer::setName(const string& devName){     //Setter
    name = devName;
}

void Developer::setDeveloperType(const string& devType){        //Setter
    developerType = devType;
}

const string& Developer::getName()const{    //Getter
    return name;
}

const string& Developer::getDeveloperType()const{   //Getter
    return developerType;
}

void Developer::addItem(LibraryItem* item){   //Add item to developer
    createdItems.push_back(item);
}

void Developer::displayDeveloperInfo()const{    //Display developer info
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

Developer::~Developer(){    //Destructor
    cout << "Destroying Developer: " << name << endl;
    for(LibraryItem* item : createdItems){
        delete item;
    }
    createdItems.clear();
}