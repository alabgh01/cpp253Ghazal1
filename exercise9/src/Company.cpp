/**
 * @file Company.cpp
 * @author
 * @brief Class Company implementation
 * @version 2022.3
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Company.hpp"

Company::Company(string name, string filename) : name(name), size(0) {
  readCompanyFromFile(filename);
}

void Company::readCompanyFromFile(string filename) {
  /* TODO:  Create either an Hourly or a Salaried employee from each line */
  ifstream empFile(filename.c_str());
  char sep = ',';
  while(!empFile.eof()){
    string line;
    string name;
    string dept;
    // long salary;
    string salarystr;
    // long rate;
    string ratestr;
    // double hours;
    string hourstr;
    getline(empFile, line, '\n');
    int commas = count(line.begin(), line.end(), sep);
    cout << line << endl;
    if(commas == 2){
      istringstream lineStream(line);
      getline(lineStream, name, sep);
      getline(lineStream, dept, sep);
      getline(lineStream, salarystr);  
      // cout << name << " from " << dept << " earns $" <<
      // stoi(salarystr) << endl;   
      SalariedEmployee se = SalariedEmployee(name, dept, stoi(salarystr));
      this->se_vec.push_back(se); 
    }
    else if(commas == 3){
      istringstream linestream(line);
      getline(linestream, name, sep);
      getline(linestream, dept, sep);
      getline(linestream, ratestr,sep);
      getline(linestream, hourstr, sep);
      HourlyEmployee he = HourlyEmployee(name, dept, stof(ratestr), stof(hourstr));
      this->he_vec.push_back(he);
    }
    int sevec = this->se_vec.size();
    int hevec = this->he_vec.size();
    this->size = sevec + hevec;
  }
}

ostream &operator<<(ostream &os, const Company &c) {
  os << "There are " << c.size << " employees in " << c.name << endl;
  /* TODO: Print all salaried employees first and then all hourly employees */
  os << "Salaried Emplyees\n";
  for(auto emp: c.se_vec){
    os << emp << endl;
  }
  os << "Houlry Emplyees\n";
  for(auto emp: c.he_vec){
    os << emp << endl;
  }
  return os;
}
