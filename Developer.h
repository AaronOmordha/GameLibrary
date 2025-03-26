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

    // ASSIGNMENT 2 INSTALLATIONS
    Developer(const Developer& other);
    Developer& operator = (const Developer& other);

    bool operator == (const Developer& other) const;
    bool operator != (const Developer& other) const;
    bool operator < (const Developer& other) const;
    bool operator > (const Developer& other) const;

    friend ostream& operator << (ostream& os, const Developer& dev);
    friend istream& operator >> (istream& is, Developer& dev);
};

#endif