/**
 * @file HouseCat.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-03-03
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "HouseCat.hpp"

// TODO: implement the class constructor
HouseCat::HouseCat(string name, int age, bool carnivore)
:Feline(name, age, "House", carnivore){
    className = __FUNCTION__;
};
