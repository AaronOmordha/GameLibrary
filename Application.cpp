#include "Application.h"
#include <iostream>
#include <string>
using namespace std;

// Constructors
Application::Application() 
: LibraryItem() // Call parent class constructor
{
    subscriptionPrice = 0.0;
    free = true;
}

Application::Application(const string& n, const string& rel, const string& dev, const string& type, const string& location, double size, float subPrice, const string& subFreq)
: LibraryItem(n, rel, dev, type, location, size) // Call parent class overloaded constructor
{
    subscriptionPrice = subPrice;
    if (subPrice == 0)
    { // If subscription price is 0, application is marked as free
        free = true;
        subscriptionFrequency = "Free";
    }
    else
    {
        free = false;
        subscriptionFrequency = subFreq;
    }
}

 // Destructor
Application::~Application(){ // Destructor
    cout << "Destroying Application: " << getName() << endl;
}

// Setter Functions

void Application::setSubscriptionPrice(float subPrice, const string& subFreq)
{
    if (subPrice < 0)
    {
        cout << "Subscription price cannot be negative!" << endl;
    }
    else
    {
        subscriptionPrice = subPrice;
            if (subscriptionPrice == 0)
            {
                free = true;
                subscriptionFrequency = "Free";
            }
            else
            {
                free = false;
                subscriptionFrequency = subFreq;
            }
    }
}


// Getter Functions

float Application::getSubscriptionPrice()
{
    return subscriptionPrice;
}

string Application::getSubscriptionFrequency()
{
    return subscriptionFrequency;
}

bool Application::checkFree()
{
    return free;
}


// Other Functons

// Overriding abstract "displayInfo" function from parent class
void Application::displayInfo()
{
    LibraryItem::displayInfo();
    cout << "Item type: Application" << endl;

    if (checkFree())
    {
        cout << "This application is free!" << endl;
    }
    else
    {
        cout << "Subscription Price: $" << getSubscriptionPrice() << endl
        << "Subscription Frequency: " << getSubscriptionFrequency() << endl;
    }
}