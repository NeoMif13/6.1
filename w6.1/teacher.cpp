#include "teacher.h"
#include <iostream>

Teacher::Teacher(const string& name, const string& pos, const string& degree)
    : Person(name), position(pos), academicDegree(degree){}

void Teacher::setPosition(const string& pos)
{
    position = pos;
}

string Teacher::getPosition() const
{
    return position;
}

void Teacher::setAcademicDegree(const string& degree) 
{
    academicDegree = degree;
}

string Teacher::getAcademicDegree() const 
{
    return academicDegree;
}

void Teacher::print() const 
{
    cout << "Teacher: " << fullName << endl;
    cout << "Position: " << position << endl;
    cout << "academicDegree: " << academicDegree <<endl;
}