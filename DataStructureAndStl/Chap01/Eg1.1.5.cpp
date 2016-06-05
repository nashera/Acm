#ifndef EMPLOYEE
#define EMPLOYEE
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee
{
public:
    Employee();
    Employee(string name, double grossPay): name(name), grossPay(grossPay){};
    void readInfo();
    bool isSentinel() const; // cons
    void printOut() const;
    void getCopyOf (const Employee &otherEmployee);
    bool makesMoreThan (const Employee &otherEmployee) const;
    friend ostream &operator <<(ostream &outstream, const Employee &otherEmployee);
    ~Employee(){};
private:
    string name;
    double grossPay;
    const static string EMPTY_STRING;
    const static string NAME_SENTINEL;
    const static double GROSS_PAY_SENTINEL;
};
#endif
