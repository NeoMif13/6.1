#include "graduatestudent.h"
#include <iostream>

GraduateStudent::GraduateStudent(const string& name, int year, long id, double score)
    : Person(name), graduationYear(year), studentID(id), averageScore(score) 
{
    while (year < 1900 || year > 2100) 
    {
        cout << "1900 - 2100 : ";
        cin >> year;
    }

    string idString;

    while (true)
    {
        cout << "Enter 9-digit ID: ";
        cin >> idString;

        if (idString.length() == 9)
        {
            bool isValid = true;
            for (char digit : idString)
            {
                if (!isdigit(digit))
                {
                    isValid = false;
                    break;
                }
            }

            if (isValid) 
            {
                studentID = stol(idString);
                break;
            }
        }

        cout << "Invalid input. Please enter a 9-digit number." << endl;
        cin.clear();               
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  
    }
    while (score < 0 || score > 100) 
    {
        cout << " 0 - 100: ";
        cin >> score;
    }

    graduationYear = year;
  
    averageScore = score;
}


void GraduateStudent::setGraduationYear(int year) 
{
    graduationYear = year;
}

int GraduateStudent::getGraduationYear() const 
{
    return graduationYear;
}

void GraduateStudent::setStudentID(long id)
{
    studentID = id;
}

long GraduateStudent::getStudentID() const 
{
    return studentID;
}

void GraduateStudent::setAverageScore(double score) 
{
    averageScore = score;
}

double GraduateStudent::getAverageScore() const 
{
    return averageScore;
}

void GraduateStudent::print() const
{
    cout << "Graduate Student: " << fullName << endl;
  cout << "Graduation Year: " << graduationYear << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Average Score: " << averageScore << endl;
}