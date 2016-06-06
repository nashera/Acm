#ifndef HOURLY_EMPLOYEE
#define HOURLY_EMPLOYEE
#include "Eg1.1.5.cpp"
class HourlyEmployee:public Employee
{
public:
    HourlyEmployee();
    ~HourlyEmployee(){};
    bool isSentinel() const;
protected:
    int hoursWorked;
    double payRate;
    const static int HOURS_WORKED_SENTINEL;
    const static double PAY_RATE_SENTINEL;
};
#endif