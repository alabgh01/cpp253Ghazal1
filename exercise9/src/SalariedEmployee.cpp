/**
 * @file SalariedEmployee.cpp
 * @author
 * @brief Class SalariedEmployee implementation
 * @version 2022.3
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "SalariedEmployee.hpp"

SalariedEmployee::SalariedEmployee(string name, string department, double salary)
    : Employee(name, department), salary(salary) {
  /*TODO: Implement this method*/
  this->setWeeklyPayment(getWeeklyPayment());
}

SalariedEmployee::SalariedEmployee(const SalariedEmployee &se)
    : Employee(se), salary(se.salary) {
  /*TODO: Implement this method*/
    this->setDepartment(se.getDepartment());
    this->setSalary(se.getSalary());
    this->setWeeklyPayment(se.getWeeklyPayment());
}

double SalariedEmployee::getSalary() const { /*TODO: Implement this method*/
  return this->salary;
}

void SalariedEmployee::setSalary(double salary) {
  /*TODO: Implement this method*/
  this->salary = salary;
}

ostream &operator<<(ostream &os, const SalariedEmployee &se) {
  /*TODO: Implement this method*/
  os << se.getName() << " from " << se.getDepartment() <<
  " earned $" << se.getWeeklyPayment() << " this week with the annual contract of $" <<
  fixed << setprecision(2) << se.getSalary();
  return os;
}
