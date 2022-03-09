/**
 * @file Bird.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "Bird.hpp"

// TODO: implement the class constructor
Bird::Bird(string name, int age, string habitat, int eggs)
  :Animal(name, age, habitat){
    this->eggs = eggs;
}


ostream &operator<<(ostream &os, const Bird &b) {
  // TODO: implement the operator overload
  // os << "lays " << b.eggs << endl;
  if(b.eggs == 1){
    os << b.getAge() << " years old " << b.className <<
    " " << b.getName() << " says " << b.sound() << " and " << 
    b.move() << " back to " << b.getHabitat() << " to lay " << 
    b.getEggs() << " egg";
  }else{
    os << b.getAge() << " years old " << b.className <<
    " " << b.getName() << " says " << b.sound() << " and " << 
    b.move() << " back to " << b.getHabitat() << " to lay " << 
    b.getEggs() << " eggs";
  }
  return os;
}
