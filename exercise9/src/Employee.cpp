/**
 * @file Employee.cpp
 * @author
 * @brief Class Employee implementation
 * @version 2022.3
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Employee.hpp"

Employee::Employee(string name, string department)
    : name(name), department(department), weeklyPayment(0) {}

Employee::Employee(const Employee &e)
    : name(e.name), department(e.department), weeklyPayment(0) {}

string Employee::getName() const { /* TODO: Implement this method */
    return this->name;
}

string Employee::getDepartment() const { /* TODO: Implement this method */
    return this->department;
}

void Employee::setDepartment(
    string department) { /* TODO: Implement this method */
    this->department = department;
}

double Employee::getWeeklyPayment() const { /* TODO: Implement this method */
    return this->weeklyPayment;
}

void Employee::setWeeklyPayment(
    double weeklyPayment) { /* TODO: Implement this method */
    this->weeklyPayment = weeklyPayment;
}

ostream &operator<<(ostream &os, const Employee &e) {
  /* TODO: Implement this method */
    os << e.getName() << " from " << e.getDepartment() << " earned $" << e.getWeeklyPayment();
    return os;
}
