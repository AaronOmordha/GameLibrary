#include "Library.h"
#include "LibraryItem.h"
#include "Game.h"
#include "Application.h"
#include "Developer.h"

using namespace std;

#include <iostream>
#include <string>

int main(){

    Developer dev1("id Software", "Triple A");
    Developer dev2("Re-Logic", "Triple A");
    Developer dev3("Mojang", "Indie");

    Library library1;
    library1.setLibraryName("Paul's Library");

    Library library2;
    library2.setLibraryName("Dave's Library");

    Game* item1 = new Game();
    Game* item2 = new Game();
    Game* item3 = new Game();

    item1->setName("Doom");
    item1->setDevName("id Software");
    item1->setReleaseDate("August 21st 1984");
    item1->setDeveloperType("Triple A");
    item1->setFileSize(100);
    item1->setFileLocation("C:\\Program_Files\\Doom");
    item1->setPrice(79.99);

    item2->setName("Terraria");
    item2->setDevName("Re-Logic");
    item2->setReleaseDate("May 16th 2011");
    item2->setDeveloperType("Indie");
    item2->setFileSize(15);
    item2->setFileLocation("C:\\Program_Files\\Terraria");
    item2->setPrice(0.0);

    item3->setName("Minecraft");
    item3->setDevName("Mojang");
    item3->setReleaseDate("May 17th 2009");
    item3->setDeveloperType("Indie");
    item3->setFileSize(20);
    item3->setFileLocation("C:\\Program_Files\\Minecraft");
    item3->setPrice(12.99);

    library1.addItem(item1);
    library1.addItem(item2);

    library2.addItem(item3);
    library2.addItem(item2);

    library1.displayItems();
    library2.displayItems();

    dev1.addItem(item1);
    dev2.addItem(item2);
    dev3.addItem(item3);

    dev1.displayDeveloperInfo();
    dev2.displayDeveloperInfo();
    dev3.displayDeveloperInfo();

    // to keep console open...
    cout << "\nApplication finished, press enter to close...";
    cin.get();

    return 0;
}