#include "LibraryItem.h"

LibraryItem::LibraryItem(){}

LibraryItem::LibraryItem(string n, string rel, string dev, bool type, double size){
    name = n;
    releaseDate = rel;
    devName = dev;
    devType = type;
    fileSize = size;
}

void LibraryItem::setName(string){
    name = "Unknown";
}

string LibraryItem::getName(){
    return name;
}

void LibraryItem::setReleaseDate(string){
    releaseDate = "Unknown";
}

string LibraryItem::getReleaseDate(){
    return releaseDate;
}

void LibraryItem::setDevName(string){
    devName = "Unknown";
}

string LibraryItem::getDevName(){
    return devName;
}

void LibraryItem::setDeveloperType(bool){
    devType = "Unknown";
}

bool LibraryItem::getDeveloperType(){
    return devType;
}

void LibraryItem::setFileSize(double){
    fileSize = 0;
}

double LibraryItem::getFileSize(){
    return fileSize;
}

void LibraryItem::displayInfo(){
    cout << "Game Name: \n" << name << "Release Date: \n" << releaseDate << "Developer: \n" << devName << "Game Type: \n" << devType << "Game Size: \n" << fileSize << endl;
}

LibraryItem::~LibraryItem(){
    cout << " Destoryed in the destructor! " << endl;
}
