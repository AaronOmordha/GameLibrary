//Created by:    Aaron Moore        C23339461
//              Éanna O'Connell     C23494414
//
//  This is the main file for the project. 
//  It creates libraries and developers, then creates games and adds them to the library and developers. 
//  It then displays the library, developer and game info.
// 

#include "Library.h"
#include "LibraryItem.h"
#include "Game.h"
#include "Application.h"
#include "Developer.h"

using namespace std;

#include <iostream>
#include <string>
#include <algorithm>

int main(){

    Developer dev1("id Software", "Triple A");      //Developer Setup
    Developer dev2("Re-Logic", "Indie");
    Developer dev3("Mojang", "Indie");
    Developer dev4("Adobe", "Triple A");

    Library library1;
    library1.setLibraryName("Paul's Library");      //Library Setup

    Library library2;
    library2.setLibraryName("Dave's Library");

    shared_ptr<Game> item1 =  make_shared<Game>();                       //Game Setup using pointers
    shared_ptr<Game> item2 =  make_shared<Game>();
    shared_ptr<Game> item3 =  make_shared<Game>();
    shared_ptr<Game> item4 =  make_shared<Game>();                                           

    shared_ptr<Application> item5 = make_shared<Application>();         //Application Setup using pointers

    item1->setName("Doom");                         //Game Details
    item1->setDevName("id Software");
    item1->setReleaseDate("August 21st 1984");
    item1->setDeveloperType("Triple A");
    item1->setFileSize(100);
    item1->setFileLocation("C:\\Program_Files\\Doom");
    item1->setPrice(9.99);

    item2->setName("Terraria");
    item2->setDevName("Re-Logic");
    item2->setReleaseDate("May 16th 2011");
    item2->setDeveloperType("Indie");
    item2->setFileSize(15);
    item2->setFileLocation("C:\\Program_Files\\Terraria");
    item2->setPrice(4.99);

    item3->setName("Minecraft");
    item3->setDevName("Mojang");
    item3->setReleaseDate("May 17th 2009");
    item3->setDeveloperType("Indie");
    item3->setFileSize(20);
    item3->setFileLocation("C:\\Program_Files\\Minecraft");
    item3->setPrice(12.99);

    item4->setName("Wolfenstien");
    item4->setDevName("id Software");
    item4->setReleaseDate("May 5th 1984");
    item4->setDeveloperType("Triple A");
    item4->setFileSize(100);
    item4->setFileLocation("C:\\Program_Files\\Wolfenstien");
    item4->setPrice(79.99);

    item5->setName("Photoshop");                    //Application Details
    item5->setDevName("Adobe");
    item5->setReleaseDate("June 1st 1984");
    item5->setDeveloperType("Triple A");
    item5->setFileSize(1000);
    item5->setFileLocation("C:\\Program_Files\\Photoshop");
    item5->setSubscriptionPrice(9.99, "Monthly");

    library1.addItem(item1);                        //Adding Games to Libraries
    library1.addItem(item2);
    library1.addItem(item5);

    library2.addItem(item3);
    library2.addItem(item2);

    library1.displayItems();                        //Displaying Libraries
    library2.displayItems();

    dev1.addItem(item1);                            //Attributing Games/Applications to Developers
    dev1.addItem(item4);
    dev2.addItem(item2);
    dev3.addItem(item3);
    dev4.addItem(item5);

    dev1.displayDeveloperInfo();                    //Displaying Developers
    dev2.displayDeveloperInfo();
    dev3.displayDeveloperInfo();
    dev4.displayDeveloperInfo();


    /*--------------------------------------------- ASSIGNMENT 2 INSTALLATIONS ---------------------------------------------*/    
    cout << "Library Item count: " << LibraryItem::libraryItemCount << endl;;
    cout << "Game count: " << Game::gameCount << endl;
    cout << "Application count: " << Application::appCount << endl;
    cout << "Library count: " << Library::libraryCount << endl;
    cout << "Developer count: " << Developer::developerCount << endl;

    Game copiedGame = *item1;                       //Testing Copy Constructor
    cout << "\nCopied Game: \n" << copiedGame << endl;

    Game assignedGame;                              //Testing Assignment Operator
    assignedGame = *item3;
    cout << "\nAssigned Game: \n" << assignedGame << endl;


    try{

        if (*item1 == *item1){
            cout << "\n" << item1->getName() << " and " << item1->getName() << " are equal\n";
        }

        if (*item1 != *item3){
            cout << item1->getName() << " and " << item3->getName() << " are different\n";
        }

        if (*item3 < *item1){
            cout << item3->getName() << " is cheaper than " << item1->getName() << "\n";
        }

        if (*item3 > *item1){
            cout << item3->getName() << " is more expensive than " << item1->getName() << "\n";
        }
}
        catch(const exception& e){
            cout << e.what() << endl;
        }

    // USE OF STL SORT ALGORITHM USING DEFAULT MECHANISM
    vector<shared_ptr<Game>> gameVector = {item1, item2, item3, item4}; // Vector to hold games

    cout << "\n-- Before Default Sort --\n";
    for (const auto& g : gameVector){
        cout << g->getName() << " ";
    }

    sort(gameVector.begin(), gameVector.end(), [](const shared_ptr<Game>& a, const shared_ptr<Game>& b){
        return a->getName() < b->getName(); // Sort by name
    });

    cout << "\n-- After Default Sort --\n";
    for (const auto& g : gameVector){
        cout << g->getName() << " ";
    }
    // END OF USE OF STL SORT ALGORITHM USING DEFAULT MECHANISM


    //USE OF STL SORT ALGORTHM WITH SORT CRITERION EXPLICITLY SPECIFIED
    cout << "\n-- Before Custom Sort (Price) --\n";
    for(const auto& g : gameVector){
        cout << g->getName() << "\n - $" << g->getPrice();
    }

    sort(gameVector.begin(), gameVector.end(), [](const shared_ptr<Game>& a, const shared_ptr<Game>& b){
        return a->getPrice() < b->getPrice(); // Sort by price
    });

    cout << "\n-- After Custom Sort --\n";
    for(const auto& g : gameVector){
        cout << g->getName() << "\n - $" << g->getPrice() << endl;
    }
    // END OF USE OF STL SORT ALGORTHM WITH SORT CRITERION EXPLICITLY SPECIFIED


    // FIND ALGORITHM
    cout << "\n-- Find Algorithm: Minecraft --\n";

    auto found = find_if(gameVector.begin(), gameVector.end(), [](const shared_ptr<Game>& g){
        return g->getName() == "Minecraft"; // Find game by name
    });

    if(found != gameVector.end()){
        cout << "Found: " << (*found)->getName() << ", Price: $" << (*found)->getPrice() << endl;
    }else{
        cout << "Game not found!" << endl;
    }
    // END OF FIND ALGORITHM


    // Handling for built in exception types 
    cout << "\n -- Exception Handling --\n";
    try{
        vector<string> devNames = {"id Software", "Re-Logic", "Mojang", "Adobe"};
        cout << "Accessing 5th developer: \n";
        string dev = devNames.at(4);
        cout << "Developer: " << dev << endl;
    }
    catch(const out_of_range& e){
        cout << "Caught built in exception: " << e.what() << endl;
    }
    // End of handling for built in exception types (5)



    // File handling
    library1.saveToFile("library1.txt");  // Save library to file
    // to keep console open...
    cout << "\nApplication finished, press enter to close...";
    cin.get();

    return 0;
}