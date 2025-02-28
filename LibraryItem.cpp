#include "LibraryItem.h"

LibraryItem::LibraryItem(){
    name = "Unknown";
    releaseDate = "Unknown";
    devName = "Unknown";
    devType = "Unknown";
    fileSize = 0;
}

LibraryItem::LibraryItem(string n, string rel, string dev, string type, double size){
    name = n;
    releaseDate = rel;
    devName = dev;
    devType = type;
    fileSize = size;
}

void LibraryItem::setName(string n){
    name = n;
}

string LibraryItem::getName(){
    return name;
}

void LibraryItem::setReleaseDate(string rel){
    releaseDate = rel;
}

string LibraryItem::getReleaseDate(){
    return releaseDate;
}

void LibraryItem::setDevName(string dev){
    devName = dev;
}

string LibraryItem::getDevName(){
    return devName;
}

void LibraryItem::setDeveloperType(string type){
    devType = type;
}

string LibraryItem::getDeveloperType(){
    return devType;
}

void LibraryItem::setFileSize(double size){
    fileSize = size;
}

double LibraryItem::getFileSize(){
    return fileSize;
}

void LibraryItem::displayInfo()const{
        cout << "\nGame Name: " << name << 
        "\nRelease Date: " << releaseDate << 
        "\nDeveloper:" << devName << 
        "\nGame Type: " << devType << 
        "\nGame Size: " << fileSize 
        << endl;
    }

LibraryItem::~LibraryItem(){
    cout << "Destoryed in the destructor! \n" << endl;
}
