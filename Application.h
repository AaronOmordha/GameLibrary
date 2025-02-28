#ifndef Application_H
#define Application_H

#include <iostream>
#include <string>
using namespace std;

class Application{
    private:
    string appName;
    double gameNum;

    public:
    Application();
    Application(const string& n, const string& rel, const string& dev, const string& type, double size, float p, const string& aN, double gN);

    void setAppName(const string&);
    string getAppName();#

    void setGameNum(double);
    double getGameNum();

    void displayInfo() override;

    protected:

};

#endif