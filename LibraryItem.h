#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class LibraryItem{
    private:
   // Static variable to keep track of the number of LibraryItem objects created
        string name;
        string releaseDate;
        string devName;
        string devType;
        string fileLocation;
        double fileSize;

    public:      
    static int libraryItemCount;
    // Constructors and Destructor
    LibraryItem();
    LibraryItem(const string& n, const string& rel, const string& dev, const string& type, const string& location, double size);
    virtual ~LibraryItem();


    // Setter and Getter functions
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

    //-------------------ASSIGNMENT 2 INSTALLATIONS-------------------
    LibraryItem(const LibraryItem& other);
    LibraryItem& operator = (const LibraryItem& other);

    bool operator == (const LibraryItem& other) const;
    bool operator != (const LibraryItem& other) const;
    bool operator < (const LibraryItem& other) const;
    bool operator > (const LibraryItem& other) const;

    friend ostream& operator << (ostream& os, const LibraryItem& item);
    friend istream& operator >> (istream& is, LibraryItem& item);

    protected:

};

#endif