#include "supportstaff.h"
#include <iostream>

SupportStaff::SupportStaff(const string& name, const string& pos, int lab)
    : Person(name), position(pos), labNumber(lab) {
    while (lab < 0 || lab > 100)
    {
        cout << " 0 - 100: ";
        cin >> lab;
    }
    labNumber = lab;
}

void SupportStaff::setPosition(const string& pos) 
{
    position = pos;
}

string SupportStaff::getPosition() const
{
    return position;
}

void SupportStaff::setLabNumber(int lab)
{
    labNumber = lab;
}

int SupportStaff::getLabNumber() const 
{
    return labNumber;
}

void SupportStaff::print() const 
{
    cout << "Support Staff: " << fullName << endl;
    cout << "Position: " << position << endl;
    cout << "Lab Number: " << labNumber << endl;
}