#include "LibraryItem.h"
#include "Game.h"
#include "Application.h"

using namespace std;

#include <iostream>
#include <string>

int main(){

    Game item1;

    item1.setName("Gerry's Adventure");
    item1.setDevName("Gerry Heapes");
    item1.setReleaseDate("August 21st 1984");
    item1.setDeveloperType("Triple A");
    item1.setFileSize(1000);

    item1.displayInfo();

    return 0;
}