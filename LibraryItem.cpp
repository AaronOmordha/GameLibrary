#include "LibraryItem.h"
#include <iostream>
#include <string>   
using namespace std;

// Initialize static variable
int LibraryItem::libraryItemCount = 0;
// Constructors
LibraryItem::LibraryItem(){
    libraryItemCount++;
    name = "Unknown";
    releaseDate = "Unknown";
    devName = "Unknown";
    devType = "Unknown";
    fileLocation = "Unknown";
    fileSize = 0.0;
}

LibraryItem::LibraryItem(const string& n, const string& rel, const string& dev, const string& type, const string& location, double size){
   libraryItemCount++;
    name = n;
    releaseDate = rel;
    devName = dev;
    devType = type;
    fileLocation = location;
    fileSize = size;
}

// -------------------------ASSIGNMENT 2 INSTALLATIONS-------------------------
LibraryItem::LibraryItem(const LibraryItem& other){
    libraryItemCount++;
    name = other.name;
    releaseDate = other.releaseDate;
    devName = other.devName;
    devType = other.devType;
    fileLocation = other.fileLocation;
    fileSize = other.fileSize;
}

LibraryItem& LibraryItem::operator = (const LibraryItem& other){
    if(this != &other){
        name = other.name;
        releaseDate = other.releaseDate;
        devName = other.devName;
        devType = other.devType;
        fileLocation = other.fileLocation;
        fileSize = other.fileSize;
    }
    return *this;
}

bool LibraryItem::operator == (const LibraryItem& other) const{
    return name == other.name;
}

bool LibraryItem::operator != (const LibraryItem& other) const{
    return name != other.name;
}

bool LibraryItem::operator < (const LibraryItem& other) const{
    return name < other.name;
}

bool LibraryItem::operator > (const LibraryItem& other) const{
    return name > other.name;
}

ostream& operator << (ostream& os, const LibraryItem& item){
    os << "Name: " << item.name << 
    "\nRelease Date: " << item.releaseDate << 
    "\nDeveloper: " << item.devName << 
    "\nDeveloper Type: " << item.devType << 
    "\nFile Size: " << item.fileSize << "MB" <<
    "\nFile Location: " << item.fileLocation
    << endl;
    return os;
}

istream& operator >> (istream& is, LibraryItem& item){
    cout << "Enter Name: ";
    is >> item.name;
    cout << "Enter Release Date: ";
    is >> item.releaseDate;
    cout << "Enter Developer: ";
    is >> item.devName;
    cout << "Enter Developer Type: ";
    is >> item.devType;
    cout << "Enter File Size: ";
    is >> item.fileSize;
    cout << "Enter File Location: ";
    is >> item.fileLocation;
    return is;
}
// ASSIGNMENT 2 INSTALLATIONS

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
    "\nFile Size: " << getFileSize() << "MB" <<
    "\nFile Location: " << getFileLocation()
    << endl;
}


// Destructor
LibraryItem::~LibraryItem(){
    cout << getName() << " Destroyed in the destructor!" << endl;
}