#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "date.h"

class Employee {
public:
    Employee(const char * const,const char * const,
             const Date &, const Date &);
    ~Employee();
    void print() const;
    static int getCount(); // amount of the created objects
private:
    char firstName[25];
    char lastName[25];
    const Date birthDate;
    const Date hireDate;
    static int count;
};

#endif // EMPLOYEE_H
