/**
 * @file exercise7.cpp
 * @author 
 * @brief Exercise 7 implementation
 * @version 2022.2
 * @date 2022-02-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise7.hpp"
Book::Book(string title, string author, double price) {
  this->title = title;
  this->author = author;
  this->price = price;
}

ostream &operator<<(ostream &os, const Book &b) { 
  os << b.title << " by " << b.author << " costs $" << b.price;
  return os; }

Room::Room(string building, int number) {
  this->building = building;
  this->number = number;
}

ostream &operator<<(ostream &os, const Room &r) { 
  os << r.building << " " << r.number;
  return os; }

Employee::Employee(string firstName, string lastName, double salary,
                   bool isFullTime) {
                     this->firstName = firstName;
                     this->lastName = lastName;
                     this->salary = salary;
                     this->isFullTime = isFullTime;
                   }

ostream &operator<<(ostream &os, const Employee &e) { 
  os << e.firstName << " " << e.lastName << " earns $" << fixed << setprecision(2) << e.salary << " and works ";
  if (e.isFullTime){
    os << "full-time";
  }else{
    os << "part-time";
  }
  return os; }

Customer::Customer(double loan, int term) {
  this->loan = loan;
  this->term = term;
}

ostream &operator<<(ostream &os, const Customer &c) { 
  os << "Loan: $" << fixed << setprecision(2) << c.loan << "; Term: " << c.term << " months";
  return os; }

Game::Game(string title, int rating) {
  this->title = title;
  this->rating = rating;
}

ostream &operator<<(ostream &os, const Game &g) { 
  os << "The rating of " << g.title << " is " << g.rating;
  return os; }

Song::Song(string title, string artist) {
  this->title = title;
  this->artist = artist;
}

ostream &operator<<(ostream &os, const Song &s) { 
  os << s.title << " by " << s.artist;
  return os; }

Company::Company(string name, double stockPrice) {
  this->name = name;
  this->stockPrice = stockPrice;
}

ostream &operator<<(ostream &os, const Company &c) { 
  os << c.name << "'s stock price is $" << fixed << setprecision(2) << c.stockPrice;
  return os; }

College::College(string name, int rank) {
  this->name = name;
  this->rank = rank;
}

ostream &operator<<(ostream &os, const College &c) { 
  os << c.name << " is ranked #" << c.rank;
  return os; }

void changeCollegeRank(College &college, int rank) { 
  college.setRank(rank);
  }

Laptop::Laptop(string manufacturer, double price, string color) {
  this->manufacturer = manufacturer;
  this->price = price;
  this->color = color;
}

ostream &operator<<(ostream &os, const Laptop &l) { 
  os << l.color << " laptop by " << l.manufacturer << " costs $" << fixed << setprecision(2) << l.price;
  return os; }

Student::Student(string name, string major, double gpa) {
  this->name = name;
  this->major = major;
  this->gpa = gpa;
}

ostream &operator<<(ostream &os, const Student &s) { 
  os << s.name << " (" << fixed << setprecision(2) << s.gpa << ") majors in " << s.major;
  return os; }

Roster::Roster(const char *filename) {
  vector<Student> studentList;
  ifstream fileIn;
  fileIn.open(filename);
  string n;
  string m;
  double g;
  while(!fileIn.eof()){
        getline(fileIn, n, ',');
        getline(fileIn, m, ',');
        fileIn >> g;
        fileIn.ignore(__INT_MAX__, '\n');
        Student s = Student(n,m,g);
        studentList.push_back(s);
    }
  fileIn.close();
  this->studentList = studentList;
}

ostream &operator<<(ostream &os, const Roster &r) {
  for (uint i = 0; i < r.studentList.size(); i++) {
    os << r.studentList.at(i) << endl;
  }
  return os;
}
