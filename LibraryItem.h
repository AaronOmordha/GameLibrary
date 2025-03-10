#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAX_SIZE = 5;

class LibraryItem{
    private:
        string name;
        string releaseDate;
        string devName;
        //string MAX_GAMES[MAX_SIZE];
        string devType;
        string fileLocation;
        double fileSize;

    public:
        LibraryItem();
        LibraryItem(const string& n, const string& rel, const string& dev, const string& type, const string& location, double size);
        virtual ~LibraryItem();

        void setName(const string&);
        const string& getName();

        void setReleaseDate(const string&);
        const string& getReleaseDate();

        void setDevName(const string&);
        const string& getDevName();

        void setDeveloperType(const string&);
        const string& getDeveloperType();
        
        void setFileLocation(const string&);
        const string& getFileLocation();

        void setFileSize(double);
        double getFileSize();

        virtual void displayInfo();

    protected:

};

#endif