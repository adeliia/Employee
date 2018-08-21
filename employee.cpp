#include <iostream>
#include <cstring>
using namespace std;

#include "employee.h"
#include "date.h"

int Employee::count = 0; //static int init

int Employee::getCount(){
    return count;
}

Employee::Employee(const char * const first, const char * const last,
                   const Date &dateOfBirth, const Date &dateOfHire)
        : birthDate(dateOfBirth), hireDate(dateOfHire) //init
{
    unsigned int length = strlen(first);
    length = (length < 25 ? length : 24);
    strncpy(firstName, first, length);
    firstName[length] = '\0';

    length = strlen(last);
    length = (length < 25 ? length : 24);
    strncpy(lastName, last, length);
    lastName[length] = '\0';

    count++;

    cout << "Employee object constructor: " << firstName << ' ' << lastName << endl;
}

void Employee::print() const {
    cout << lastName << ", " << firstName << " Hired: ";
    hireDate.print();
    cout << " Birthday: ";
    birthDate.print();
    cout << endl;
}

Employee::~Employee(){
    cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
    count--;
}
