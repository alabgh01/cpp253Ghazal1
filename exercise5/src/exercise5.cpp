/**
 * @file exercise5.cpp
 * @author 
 * @brief Exercise 5 implementation
 * @version 2022.2
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise5.hpp"

double getStockPrice(Company c) { /*TODO*/

  return c.stockPrice;
}
void setStockPrice(Company &c, double newStockPrice) { /*TODO*/

  c.stockPrice = newStockPrice;
}

void initLaptop(Laptop &item, string _manufacturer, double _price,
                string _color) {
  /*TODO*/
  item.manufacturer = _manufacturer;
  item.price = _price;
  item.color = _color;
}

string University::getName() const { /*TODO*/
  return name;
}
void University::setName(string newName) { /*TODO*/
  name = newName;
}
int University::getRating() const { /*TODO*/
  return rating;
}
void University::setRating(int newRating) { /*TODO*/
  rating = newRating;
}
