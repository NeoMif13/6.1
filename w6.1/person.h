#pragma once


#include <string>
using namespace std;

class Person {
protected:
    string fullName;

public:
    Person(const string& name);

    void setFullName(const string& name);
    string getFullName() const;
    virtual void print() const;
};

