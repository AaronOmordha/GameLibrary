#include "LibraryItem.h"
#include <iostream>
#include <string>   
using namespace std;

LibraryItem::LibraryItem()
{
    name = "Unknown";
    releaseDate = "Unknown";
    devName = "Unknown";
    devType = "Unknown";
    fileSize = 0.0;
}

LibraryItem::LibraryItem(const string& n, const string& rel, const string& dev, const string& type, double size)
{
    name = n;
    releaseDate = rel;
    devName = dev;
    devType = type;
    fileSize = size;
}

void LibraryItem::setName(const string& n)
{
    name = n;
}

const string& LibraryItem::getName()
{
    return name;
}

void LibraryItem::setReleaseDate(const string& rel)
{
    releaseDate = rel;
}

const string& LibraryItem::getReleaseDate()
{
    return releaseDate;
}

void LibraryItem::setDevName(const string& dev)
{
    devName = dev;
}

const string& LibraryItem::getDevName()
{
    return devName;
}

void LibraryItem::setDeveloperType(const string& type)
{
    devType = type;
}

const string& LibraryItem::getDeveloperType()
{
    return devType;
}

void LibraryItem::setFileSize(double size)
{
    fileSize = size;
}

double LibraryItem::getFileSize()
{
    return fileSize;
}

void LibraryItem::displayInfo()
{
        cout << "\nName: " << getName() << 
        "\nRelease Date: " << getReleaseDate() << 
        "\nDeveloper:" << getDevName() << 
        "\nDeveloper Type: " << getDeveloperType() << 
        "\nFile Size: " << getFileSize() 
        << endl;
    }

LibraryItem::~LibraryItem()
{
    cout << "Destroyed in the destructor! \n";
}