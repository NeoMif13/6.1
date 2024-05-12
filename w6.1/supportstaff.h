#pragma once


#include "person.h"
#include <string>
using namespace std;

class SupportStaff : public Person {
private:
    string position;
    int labNumber;

public:
    SupportStaff(const string& name, const string& pos, int lab);

    void setPosition(const string& pos);
    string getPosition() const;
    void setLabNumber(int lab);
    int getLabNumber() const;
    void print() const override;
};

