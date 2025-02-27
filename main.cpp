#include "LibraryItem.h"
#include "Game.h"
#include "Application.h"

using namespace std;

#include <iostream>
#include <string>

int main(){

    LibraryItem item1;
    item1.getName();
    item1.getDevName();
    item1.getReleaseDate();
    item1.getDeveloperType();

    item1.setName("Gerry's_Adventure");
    item1.setDevName("Gerry_Heapes");
    item1.setReleaseDate("August_21st_1984");
    item1.setDeveloperType("Triple_A");
    item1.setFileSize(1000);

    item1.displayInfo();

    return 0;
}