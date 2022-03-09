/**
 * @file HourlyEmployee.cpp
 * @author 
 * @brief Class HourlyEmployee implementation
 * @version 2022.3
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "HourlyEmployee.hpp"

HourlyEmployee::HourlyEmployee(string name, string department, double rate,
                               double hours)
    : Employee(name, department), rate(rate), hours(hours) {
  /* TODO: Implement this method */
  this->setWeeklyPayment(getWeeklyPayment());
}

HourlyEmployee::HourlyEmployee(const HourlyEmployee &he)
    : Employee(he), rate(he.rate), hours(he.hours) {
  /* TODO: Implement this method */
  this->setDepartment(he.getDepartment());
  this->setHours(he.getHours());
  this->setRate(he.getRate());
  this->setWeeklyPayment(he.getWeeklyPayment());
}

void HourlyEmployee::setRate(double rate) { /* TODO: Implement this method */
  this->rate = rate;
}

double HourlyEmployee::getRate() const { /* TODO: Implement this method */
  return this->rate;
}

void HourlyEmployee::setHours(double hours) {
  /* TODO: Implement this method */
  this->hours = hours;
}

double HourlyEmployee::getHours() const { /* TODO: Implement this method */
  return this->hours;
}

ostream &operator<<(ostream &os, const HourlyEmployee &he) {
  /* TODO: Implement this method */
  os << he.getName() << " from " << he.getDepartment() <<
  " earned $" << he.getRate() << " this week after working " <<
  fixed << setprecision(2) << he.getHours() << " hours";
  return os;
}
