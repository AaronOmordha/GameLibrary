#include "Library.h"
#include <iostream>
#include <string>
#include <vector>
#include "LibraryItem.h"
#include "Game.h"
#include "Application.h"    

using namespace std;

Library::Library()
{
    libraryName = "Unknown";
}

Library::Library(const string& n)
{
    libraryName = n;
}  

Library::~Library()
{
    cout << "Library " << libraryName << " is being destroyed." << endl;
}

void Library::setLibraryName(const string& n)
{
    libraryName = n;
}

const string& Library::getLibraryName()
{
    return libraryName;
}

void Library::addItem(const LibraryItem& item)
{
    items.push_back(item);
}

/*void Library::removeItem(const LibraryItem& item)
{
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].getName() == item.getName())
        {
            items.erase(items.begin() + i);
            break;
        }
    }
}
    */