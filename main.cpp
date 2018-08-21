#include <iostream>
using namespace std;

#include "employee.h"

int main()
{
    cout << "Amount of employees " << Employee::getCount() << endl;

    Date birth1 (7, 24, 1949);
    Date hire1 (3,12,1988);
    Date birth2 (7, 24, 1952);
    Date hire2 (3,12,2000);
    Employee manager ("Bob", "Blue" , birth1, hire1);
    Employee driver ("James", "Brown" , birth2, hire2);

    cout << endl;
    manager.print();
    driver.print();

    cout << "Amount of employees " << manager.getCount() << endl;

    cout << "\nTest Date constuctor with invalid values:\n";
    Date lastDayOff(14, 35, 1994);
    cout << endl;

    return 0;
}
