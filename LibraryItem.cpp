#include "LibraryItem.h"

LibraryItem::LibraryItem(string n, string rel, string dev, bool type, double size){
    name = n;
    releaseDate = rel;
    devName = dev;
    devType = type;
    fileSize = size;
}

void LibraryItem::setName(string){
    return name;
}

string LibraryItem::getName(){

}

LibraryItem::~LibraryItem(){

}
