#include "Library.h"
#include "LibraryItem.h"
#include "Game.h"
#include "Application.h"
#include "Developer.h"

using namespace std;

#include <iostream>
#include <string>

int main(){

    Developer dev1("Gerry Heapes", "Triple A");
    Developer dev2("Maksymillian Borowski", "Indie");

    Library library1;
    library1.setLibraryName("Gerry's Library");

    Library library2;
    library2.setLibraryName("Maksymillian's Library");

    Game* item1 = new Game();
    Game* item2 = new Game();
    Game* item3 = new Game();

    item1->setName("Gerry's Adventure");
    item1->setDevName("Gerry Heapes");
    item1->setReleaseDate("August 21st 1984");
    item1->setDeveloperType("Triple A");
    item1->setFileSize(1000);
    item1->setFileLocation("C:\\Program_Files\\Gerry's_Adventure");
    item1->setPrice(79.99);

    item2->setName("Terraria");
    item2->setDevName("Maskymillian Borowski");
    item2->setReleaseDate("May 16th 2011");
    item2->setDeveloperType(dev2.getDeveloperType());
    item2->setFileSize(200);
    item2->setFileLocation("C:\\Program_Files\\Terraria");
    item2->setPrice(0.0);

    item3->setName("Minecraft");
    item3->setDevName("Gerry Heapes");
    item3->setReleaseDate("May 17th 2009");
    item3->setDeveloperType("Triple A");
    item3->setFileSize(20);
    item3->setFileLocation("C:\\Program_Files\\Gerry's_Adventure");
    item3->setPrice(12.99);

    library1.addItem(item1);
    library1.addItem(item2);

    library2.addItem(item3);
    library2.addItem(item2);

    library1.displayItems();
    library2.displayItems();

    dev1.addItem(item1);
    dev1.addItem(item3);
    dev2.addItem(item2);

    dev1.displayDeveloperInfo();
    dev2.displayDeveloperInfo();

    // to keep console open...
    cout << "\nApplication finished, press enter to close...";
    cin.get();

    return 0;
}