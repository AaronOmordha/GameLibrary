#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class LibraryItem{
    private:
        string name;
        string releaseDate;
        string devName;
        bool devType;
        double fileSize;

    public:
        //LibraryItem();
        LibraryItem(string, string, string, bool, double);
        //~LibraryItem();

        void setName(string);
        string getName();

        void setReleaseDate(string);
        string getReleaseDate();

        void setDevName(string);
        string getDevName();

        void setDeveloperType(bool);
        bool getDeveloperType();

        void setFileSize(double);
        double getFileSize();

    protected:

};

#endif