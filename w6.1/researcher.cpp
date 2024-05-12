#include "researcher.h"
#include <iostream>

Researcher::Researcher(const string& name, const string& deg, const string& contract)
    : Person(name), degree(deg), contractNumber(contract) {}

void Researcher::setDegree(const string& deg) 
{
    degree = deg;
}

string Researcher::getDegree() const 
{
    return degree;
}

void Researcher::setContractNumber(const string& contract) 
{
    contractNumber = contract;
}

string Researcher::getContractNumber() const 
{
    return contractNumber;
}

void Researcher::print() const 
{
    cout << "Researcher: " << fullName << endl;
    cout << "Degree: " << degree << endl;
    cout << "Contract Number: " << contractNumber << endl;
}