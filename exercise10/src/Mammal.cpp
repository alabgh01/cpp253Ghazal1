/**
 * @file Mammal.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Mammal.hpp"

// TODO: implement the class constructor
Mammal::Mammal(string name, int age, string habitat, bool carnivore)
  :Animal(name, age, habitat){
    this->carnivore = carnivore;
  };

string Mammal::move() const { return "runs"; }

ostream &operator<<(ostream &os, const Mammal &m) {
  // TODO: implement the operator overload
  if(m.isCarnivore()){
    // os << "eats meat" << endl;
    os << m.getAge() << " years old " << m.className << 
    " " << m.getName() << " says " << m.sound() << 
    " and " << m.move() << " back to " << m.getHabitat() <<
    " to eat meat";
  }
  else{
    // os << "eats grass" << endl;
    os << m.getAge() << " years old " << m.className << 
    " " << m.getName() << " says " << m.sound() << 
    " and " << m.move() << " back to " << m.getHabitat() <<
    " to eat grass";
  }
  return os;
}
