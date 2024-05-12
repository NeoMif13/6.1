#pragma once

#include <string>
#include "person.h"
using namespace std;

class GraduateStudent : public Person {
private:
    int graduationYear;
    long studentID;
    double averageScore;

public:
    GraduateStudent(const std::string& name, int year, long id, double score);

    void setGraduationYear(int year);
    int getGraduationYear() const;
    void setStudentID(long id);
    long getStudentID() const;
    void setAverageScore(double score);
    double getAverageScore() const;
    void print() const override;
};

