#ifndef DEVELOPER_H
#define DEVELOPER_H

#include <iostream>
#include <string>
#include <vector>
#include "LibraryItem.h"

using namespace std;

class Developer{
    
    private:
    string name;
    string developerType;
    vector<LibraryItem*> createdItems;

    public:
    Developer();
    Developer(const string& devName, const string& devType);
    ~Developer();

    void setName(const string& devName);
    void setDeveloperType(const string& devType);

    const string& getName()const;
    const string& getDeveloperType()const;
    
    void addItem(LibraryItem* item);
    void displayDeveloperInfo()const;
};

#endif