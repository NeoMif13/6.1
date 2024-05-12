#pragma once

#include "person.h"
#include <string>
using namespace std;

class Researcher : public Person {
private:
       string degree;
    string contractNumber;

public:
    Researcher(const string& name, const string& deg, const string& contract);

    void setDegree(const string& deg);
    string getDegree() const;
    void setContractNumber(const string& contract);
    string getContractNumber() const;
    void print() const override;
};

