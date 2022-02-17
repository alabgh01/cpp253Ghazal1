/**
 * @file exercise5_main.cpp
 * @author
 * @brief Exercise 5 driver
 * @version 2022.2
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise5.hpp"

int main() {
  srand(253);
  cout << "Exercise 5: Structures" << endl;
  cout << "\nTask 1" << endl;
  /*
   * Task 1
   * TODO: Declare and initialize variables of type Contact and print their
   * values.
   * */
  Contact *contact1 = new Contact;
  contact1->name = "name1";
  contact1->phone = "123456789";
  Contact contact2;
  contact2.phone = "987654321";
  contact2.name = "name2";

  cout << contact1->name << ": " << contact1->phone << endl;
  cout << contact2.name << ": " << contact2.phone << endl;

  // TODO: Do you need the following line?
  delete contact1;

  cout << "\nTask 2" << endl;
  /*
   * Task 2
   * TODO: Declare and initialize variables of type Room and print their values.
   * */
//   Room *room1 = new Room;
  unique_ptr<Room> room1(new Room());
  room1->building = "builing1";
  room1->number = 11;
  Room room2;
  room2.building = "building2";
  room2.number = 22;

  cout << room1->building << " " << room1->number << endl;
  cout << room2.building << " " << room2.number << endl;

  // TODO: Do you need the following line?
  // NO
//   delete room1;

  cout << "\nTask 3" << endl;
  /*
   * Task 3
   * TODO: Declare and initialize a variable of type Employee and print its
   * values. The output should depend on the full-time/part-time status
   * */
  Employee employee1;
  employee1.firstName = "fname1";
  employee1.lastName = "lname1";
  employee1.salary = 100;
  employee1.isFullTime = true;
  if (employee1.isFullTime)
  {
     cout << "first name: " << employee1.firstName 
     << " last name: " << employee1.lastName 
     << " salary: " << employee1.salary
     << " " << employee1.firstName << " is a full-time worker"
     << endl;
  }
  else
  {
     cout << "first name: " << employee1.firstName 
     << "last name: " << employee1.lastName 
     << "salary: " << employee1.salary
     << " " << employee1.firstName << " is a part-time worker"
     << endl;   
  }

  // TODO: Do you need the following line?
  //   NO
  //   delete employee1;

  cout << "\nTask 4" << endl;
  /*
   * Task 4
   * TODO: Declare and initialize a variable of type Animal and print its
   * values. Weight should be a random number up to 1000
   * */
  double weight1, weight2;
  weight1 = rand() % 1000;
  weight2 = rand() % 1000;

  Animal *animal1 = new Animal;
  animal1->weight = weight1;
  Animal animal2;
  animal2.weight = weight2;

  cout << animal1->weight << endl;
  if (animal1->weight < 300)
     cout << "hungry" << endl;
  else
     cout << "full" << endl;
  cout << animal2.weight << endl;
  if (animal2.weight < 300)
     cout << "hungry" << endl;
  else
     cout << "full" << endl;

  // TODO: Do you need the following line?
  // YES
  delete animal1;

  cout << "\nTask 5" << endl;
  /*
   * Task 5
   * TODO: Declare and initialize variables of type Game and print their values.
   * TODO: Change the value of rating and print them again.
   * */
  Game *game1 = new Game;
  game1->title = "title1";
  game1->rating = 4;
  Game game2;
  game2.title = "title2";
  game2.rating = 9;

  cout << game1->title << " has a rating of " << game1->rating << endl;
  cout << game2.title << " has a rating of " << game2.rating << endl;
  cout << game1->title << " has a rating of " << game1->rating << endl;
  cout << game2.title << " has a rating of " << game2.rating << endl;

  // TODO: Do you need the following line?
  // YES
  delete game1;

  cout << "\nTask 6" << endl;
  /*
   * Task 6
   * TODO: Declare and initialize a vector of 3 Songs.
   * TODO: Print the values of all songs.
   * */
  Song song1;
  Song song2;
  Song song3;
  song1.title = "title1";
  song2.title = "title2";
  song3.title = "title3";
  song1.artist = "artis1";
  song2.artist = "artis2";  
  song3.artist = "artis3";
  vector<Song> playlist = vector<Song>();
  playlist.push_back(song1);
  playlist.push_back(song2);
  playlist.push_back(song3);

  for (int i = 0; i < 3; ++i)
  {
       cout << playlist[i].title << " " << playlist[i].artist << endl;
  }

  cout << "\nTask 7" << endl;
  /*
   * Task 7
   * TODO: Declare and instantiate a variable of type Company.
   * TODO: Use function setStockPrice() to change the value of stockPrice.
   * TODO: Use function getStockPrice() to print the value of stockPrice.
   * */
//   Company *company1 = new Company;
  unique_ptr<Company> company1(new Company());
  company1->name = "name1";
//   company1->stockPrice = 2.0;

  cout << company1->name << " stock price: " << getStockPrice(*company1)
       << endl;

//   company1->setStockPrice(company1, 3.0);
  setStockPrice(*company1, 2.0);

  cout << company1->name << " stock price: " << getStockPrice(*company1)
       << endl;

  // TODO: Do you need the following line?
  // NO
  // delete company1;

  cout << "\nTask 8" << endl;
  /*
   * Task 8
   * TODO: Declare and initialize variables of type Laptop and print their
   * values.
   * */
//   Laptop *laptop1 = new Laptop;
  unique_ptr<Laptop> laptop1(new Laptop());
  laptop1->color = "red";
  laptop1->manufacturer = "me";
  laptop1->price = 100;
  Laptop laptop2;
  laptop2.color = "yellow";
  laptop2.manufacturer = "them";
  laptop2.price = 200;

  cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs "
       << fixed << laptop1->price << endl;
  cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs "
       << fixed << laptop1->price << endl;

  cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs "
       << fixed << laptop2.price << endl;
  cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs "
       << fixed << laptop2.price << endl;

  // TODO: Do you need the following line?
  // NO
  // delete laptop1;

  cout << "\nTask 9" << endl;
  /*
   * Task 9
   * TODO: Declare and instantiate a variable of type University.
   * TODO: Change the value of rating and print it.
   * NOTE: Use functions, rather directly accessing the members of the structure
   * */
  University university1;
  university1.setName("Coolage College");
  university1.setRating(9);
  cout << university1.getName() << " has a rating of "
       << university1.getRating() << endl;
  university1.setName("Luther College");
  university1.setRating(100);
  cout << university1.getName() << " has a rating of "
       << university1.getRating() << endl;

  cout << "\nTask 10" << endl;
  /*
   * Task 10
   * TODO: Declare and populate a vector of students.
   * TODO: Read student data from the provided exercise5_in.txt
   * TODO: Store it in the vector and print information about all students
   * (Name, Major, GPA).
   * */
  Student student1;
  Student student2;
  Student student3;
  student1.name = "name1";
  student2.name = "name2";
  student3.name = "name3";
  student1.major = "major1";
  student2.major = "major2";
  student3.major = "major3";
  student1.gpa = 1.2;
  student2.gpa = 2.2;
  student3.gpa = 3.2;

  vector<Student> roster = vector<Student>();

  roster.push_back(student1);
  roster.push_back(student2);
  roster.push_back(student3);

  for (Student student : roster) {
    cout << left << setw(10) << student.name << setw(15) << student.major
         << fixed << student.gpa << endl;
  }

  return 0;
}
