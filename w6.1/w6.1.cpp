#include <iostream>
#include <string>
#include "graduatestudent.h"
#include "teacher.h"
#include "supportstaff.h"
#include "researcher.h"
using namespace std;

int main() {
    string fullName;
    int graduationYear;
    long studentID;
    double averageScore;
    string position;
    string academicDegree;
    int labNumber;
    string degree;
    string contractNumber;

    cout << "Enter Graduate Student information:" << endl;
    cout << "Full Name: ";
    getline(cin, fullName);
    cout << "Graduation Year: ";
    cin >> graduationYear;
    cout << "Student ID: ";
    cin >> studentID;
    cout << "Average Score: ";
    cin >> averageScore;
    cin.ignore();

    GraduateStudent graduateStudent(fullName, graduationYear, studentID, averageScore);

    cout << endl << "Enter Teacher information:" << endl;
    cout << "Full Name: ";
    cin.ignore();
    getline(cin, fullName);
    cout << "Position: ";
    getline(cin, position);
    cout << "Academic Degree: ";
    getline(cin, academicDegree);

    Teacher teacher(fullName, position, academicDegree);

    cout << endl << "Enter Support Staff information:" << endl;
    cout << "Full Name: ";
    getline(cin, fullName);
    cout << "Position: ";
    getline(cin, position);
    cout << "Lab Number: ";
    cin >> labNumber;
    cin.ignore();

    SupportStaff supportStaff(fullName, position, labNumber);

    cout <<endl << "Enter Researcher information:" << endl;
    cout << "Full Name: ";
    cin.ignore();
    getline(cin, fullName);
    cout << "Degree: ";
    getline(cin, degree);
    cout << "Contract Number: ";
    getline(cin, contractNumber);

    Researcher researcher(fullName, degree, contractNumber);

    cout <<endl << "Graduate Student Information:" << endl;
    graduateStudent.print();

    cout <<endl << "Teacher Information:" << endl;
    teacher.print();

    cout << endl << "Support Staff Information:" << endl;
    supportStaff.print();

    cout << endl << "Researcher Information:" << endl;
    researcher.print();

    return 0;
}