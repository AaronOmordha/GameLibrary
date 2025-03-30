#ifndef Application_H
#define Application_H

#include "LibraryItem.h"
#include <iostream>
#include <string>
using namespace std;

class Application : public LibraryItem{  // Declare Game as a child class of LibraryItem

    private:

    float subscriptionPrice;
    string subscriptionFrequency;
    bool free;

    public:
    static int appCount;
    // Constructors
    Application();
    Application(const string& n, const string& rel, const string& dev, const string& type, const string& location, double size, float subPrice, const string& subFreq);
    ~Application() override; // Destructor
    
    // Setter and Getter functions
    void setSubscriptionPrice(float subPrice, const string& subFreq);

    float getSubscriptionPrice();
    string getSubscriptionFrequency();
    bool checkFree();
    void displayInfo() override; // Overriding abstract function from parent class


    protected:

};

#endif