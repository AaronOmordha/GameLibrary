#include "LibraryItem.h"
#include <iostream>
#include <string>   
using namespace std;


// Constructors

LibraryItem::LibraryItem(){
    name = "Unknown";
    releaseDate = "Unknown";
    devName = "Unknown";
    devType = "Unknown";
    fileLocation = "Unknown";
    fileSize = 0.0;
}

LibraryItem::LibraryItem(const string& n, const string& rel, const string& dev, const string& type, const string& location, double size){
    name = n;
    releaseDate = rel;
    devName = dev;
    devType = type;
    fileLocation = location;
    fileSize = size;
}

// Setter Functions

void LibraryItem::setName(const string& n){
    name = n;
}

void LibraryItem::setReleaseDate(const string& rel){
    releaseDate = rel;
}

void LibraryItem::setDevName(const string& dev){
    devName = dev;
}

void LibraryItem::setDeveloperType(const string& type){
    devType = type;
}

void LibraryItem::setFileLocation(const string& location){
    fileLocation = location;
}

void LibraryItem::setFileSize(double size){
    fileSize = size;
}


// Getter Functions

const string& LibraryItem::getName(){
    return name;
}

const string& LibraryItem::getReleaseDate(){
    return releaseDate;
}

const string& LibraryItem::getDevName(){
    return devName;
}

const string& LibraryItem::getDeveloperType(){
    return devType;
}

const string& LibraryItem::getFileLocation(){
    return fileLocation;
}

double LibraryItem::getFileSize(){
    return fileSize;
}


// Display Function

void LibraryItem::displayInfo(){
    cout << "\nName: " << getName() << 
    "\nRelease Date: " << getReleaseDate() << 
    "\nDeveloper: " << getDevName() << 
    "\nDeveloper Type: " << getDeveloperType() << 
    "\nFile Size: " << getFileSize() << "GB" <<
    "\nFile Location: " << getFileLocation()
    << endl;
}


// Destructor

LibraryItem::~LibraryItem(){
    cout << getName() << " Destroyed in the destructor!" << endl;
}