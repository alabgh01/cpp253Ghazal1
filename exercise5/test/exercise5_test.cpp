/**
 * @file exercise5_test.cpp
 * @author 
 * @brief Exercise 5 test
 * @version 2022.2
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#include "../../catch2/catch.hpp"
#endif

#include "../src/exercise5.hpp"

TEST_CASE("Structure Contact is implemented", "[Contact]") {
  // Task 1: Write a test for the structure Contact

  Contact contact1{"Alice", "563-555-1234"};
  Contact contact2{"Roman", "563-387-1171"};

  CHECK(contact1.name == "Alice");
  CHECK(contact1.phone == "563-555-1234");
  CHECK(contact2.name == "Roman");
  CHECK(contact2.phone == "563-387-1171"); 
}

TEST_CASE("Structure Room is implemented", "[Room]") {
  // Task 2: Write a test for the structure Room
  Room room1{"Main", 101};
  Room room2{"Olin", 202};

  CHECK(room1.building == "Main");
  CHECK(room1.number == 101);
  CHECK(room2.building == "Olin");
  CHECK(room2.number == 202);
}

TEST_CASE("Structure Employee is implemented", "[Employee]") {
  // Task 3: Write a test for the structure Employee
  Employee emp1{"Alice", "Anderson", 100000.00, true};
  CHECK(emp1.firstName == "Alice");
  CHECK(emp1.lastName == "Anderson");
  CHECK(emp1.salary == 100000.00);
  CHECK(emp1.isFullTime == true);
}

TEST_CASE("Structure Animal is implemented", "[Animal]") {
  // Task 4: Write a test for the structure Animal
  Animal animal1{444, false};
  Animal animal2{222, true};
  CHECK(animal1.weight == 444);
  CHECK(animal1.isHungry == false);
  CHECK(animal2.weight == 222);
  CHECK(animal2.isHungry == true);
}

TEST_CASE("Structure Game is implemented", "[Game]") {
  // Task 5: Write a test for the structure Game
  // string expected = "
  // The Legend of Zelda: Breath of the Wild has a rating of 9\n
  // Resident Evil 7: Biohazard has a rating of 8\n
  // The Legend of Zelda: Breath of the Wild has a rating of 10\n
  // Resident Evil 7: Biohazard has a rating of 7";
  
  // char fakeoutArr[1024];
  // stringstream fakeout(fakeoutArr);

  // streambuf *coutbuf = cout.rdbuf();
  // cout.rdbuf(fakeout.rdbuf());


  // CHECK(fakeout.str() == expected);

  // cout.rdbuf(coutbuf);

  Game game1{"The Legend of Zelda: Breath of the Wild", 2};
  Game game2{"Resident Evil 7: Biohazard", 7};
  CHECK(game1.title == "The Legend of Zelda: Breath of the Wild");
  CHECK(game2.title == "Resident Evil 7: Biohazard");
  CHECK(game1.rating == 2);
  CHECK(game2.rating == 7);
}

TEST_CASE("Structure Song is implemented", "[Song]") {
  // Task 6: Write a test for the structure Song
  // string expected = "
  // Perfect by Ed Sheeran\n
  // Finesse by Bruno Mars & Cardi B\n
  // Pray For Me by The Weeknd & Kendrick Lamar";
  
  // char fakeoutArr[1024];
  // stringstream fakeout(fakeoutArr);

  // streambuf *coutbuf = cout.rdbuf();
  // cout.rdbuf(fakeout.rdbuf());

  // CHECK(fakeout.str() == expected);

  // cout.rdbuf(coutbuf);

  Song st1{"Finesse","Bruno Mars & Cardi B"};
  CHECK(st1.title == "Finesse");
  CHECK(st1.artist == "Bruno Mars & Cardi B");
}

TEST_CASE("Structure Company is implemented", "[Company]") {
  // Task 7: Write a test for the structure Company
  Company company1{"Apple", 177.97};
  CHECK(company1.name == "Apple");
  CHECK(company1.stockPrice == 177.97);

  Company company2;
  company2.name ="Apple";
  setStockPrice(company2, 180.00);
  CHECK(company2.name == "Apple");
  CHECK(getStockPrice(company2) == 180.00);
}

TEST_CASE("Structure Laptop is implemented", "[Laptop]") {
  // Task 8: Write a test for the structure Laptop
  Laptop lap1;
  CHECK(lap1.manufacturer == "");
  CHECK(lap1.price == 0);
  CHECK(lap1.color == "");

}

TEST_CASE("Structure University is implemented", "[University]") {
  // Task 9: Write a test for the structure University
  University uni1;
  CHECK(uni1.getName() == "");
  uni1.setName("Luther College");
  uni1.setRating(100);
  CHECK(uni1.getName() == "Luther College");
  CHECK(uni1.getRating() == 100);
}

TEST_CASE("Structure Student is implemented", "[Student]") {
  // Task 10: Write a test for the structure Student
  Student st1{"Alice", "Anthropology", 3.00};
  CHECK(st1.name == "Alice");
  CHECK(st1.major == "Anthropology");
  CHECK(st1.gpa == 3.00);

}