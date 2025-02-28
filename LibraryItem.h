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
        double fileSize;

    public:
        LibraryItem();
        LibraryItem(const string& n, const string& rel, const string& dev, const string& type, double size);
        virtual ~LibraryItem();

        void setName(string);
        string getName();

        void setReleaseDate(string);
        string getReleaseDate();

        void setDevName(string);
        string getDevName();

        void setDeveloperType(string);
        string getDeveloperType();

        void setFileSize(double);
        double getFileSize();

        virtual void displayInfo();

    protected:

};

#endif