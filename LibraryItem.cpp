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
    name = "Unknown \n";
}

string LibraryItem::getName(){
    return name;
}

void LibraryItem::setReleaseDate(string){
    releaseDate = "Unknown \n";
}

string LibraryItem::getReleaseDate(){
    return releaseDate;
}

void LibraryItem::setDevName(string){
    devName = "Unknown \n";
}

string LibraryItem::getDevName(){
    return devName;
}

void LibraryItem::setDeveloperType(bool){
    devType = "Unknown \n";
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

void LibraryItem::displayInfo()const{
    cout << "Game Name: \n" << name << "Release Date: \n" << releaseDate << "Developer: \n" << devName << "Game Type: \n" << devType << "\nGame Size: \n" << fileSize << endl;

    for (int i = 0; i < MAX_SIZE; i++){
        cout << MAX_GAMES[i] << endl;
    }
}

LibraryItem::~LibraryItem(){
    cout << " Destoryed in the destructor! \n" << endl;
}
