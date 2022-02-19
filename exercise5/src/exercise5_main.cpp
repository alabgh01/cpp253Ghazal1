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
  contact1->name = "Alice";
  contact1->phone = "563-555-1234";
  Contact contact2{"Roman", "563-387-1171"};

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
  room1->building = "Main";
  room1->number = 101;
  Room room2;
  room2.building = "Olin";
  room2.number = 202;

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
  employee1.firstName = "Alice";
  employee1.lastName = "Anderson";
  employee1.salary = 100000.00;
  employee1.isFullTime = true;
  Employee employee2;
  employee2.firstName = "Bob";
  employee2.lastName = "Black";
  employee2.salary = 50000.00;
  employee2.isFullTime = false;
  if (employee1.isFullTime)
  {
     cout << employee1.firstName << employee1.lastName 
     << " is a full-time worker earning "
     << employee1.salary
     << endl;
  }
  else
  {
     cout << employee1.firstName << " " << employee1.lastName 
     << " is a part-time worker earning "
     << employee1.salary
     << endl;   
  }
  if (employee2.isFullTime)
  {
     cout << employee2.firstName << employee2.lastName 
     << " is a full-time worker earning "
     << employee2.salary
     << endl;
  }
  else
  {
     cout << employee2.firstName << " " << employee2.lastName 
     << " is a part-time worker earning "
     << employee2.salary
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

//   Animal *animal1 = new Animal;
  unique_ptr<Animal> animal1(new Animal());
  animal1->weight = weight1;
  Animal animal2;
  animal2.weight = weight2;

  if (animal1->weight < 400)
       cout << "Hungry animal weights " << animal1->weight << endl;
  else
       cout << "Well-fed animal weights " << animal1->weight << endl;
  if (animal2.weight < 400)
       cout << "Hungry animal weights " << animal2.weight << endl;
  else
       cout << "Well-fed animal weights " << animal2.weight << endl;

  // TODO: Do you need the following line?
  // NO
//   delete animal1;

  cout << "\nTask 5" << endl;
  /*
   * Task 5
   * TODO: Declare and initialize variables of type Game and print their values.
   * TODO: Change the value of rating and print them again.
   * */
//   Game *game1 = new Game;
  unique_ptr<Game> game1(new Game());
  game1->title = "The Legend of Zelda: Breath of the Wild";
  game1->rating = 9;
  Game game2;
  game2.title = "Resident Evil 7: Biohazard ";
  game2.rating = 8;

  cout << game1->title << " has a rating of " << game1->rating << endl;
  cout << game2.title << " has a rating of " << game2.rating << endl;
  
  game1->rating = 10;
  game2.rating = 7;
  
  cout << game1->title << " has a rating of " << game1->rating << endl;
  cout << game2.title << " has a rating of " << game2.rating << endl;

  // TODO: Do you need the following line?
  // YES
//   delete game1;

  cout << "\nTask 6" << endl;
  /*
   * Task 6
   * TODO: Declare and initialize a vector of 3 Songs.
   * TODO: Print the values of all songs.
   * */
  Song song1;
  Song song2;
  Song song3;
  song1.title = "Perfect";
  song2.title = "Finesse";
  song3.title = "Pray For Me";
  song1.artist = "Ed Sheeran";
  song2.artist = "Bruno Mars & Cardi B";  
  song3.artist = "The Weeknd & Kendrick Lamar";
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
  company1->name = "Apple";
//   company1->stockPrice = 2.0;
  setStockPrice(*company1, 177.97);

  cout << company1->name << " stock price: " << getStockPrice(*company1)
       << endl;

//   company1->setStockPrice(company1, 3.0);
  setStockPrice(*company1, 180.00);

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
  Laptop laptop2;
  

  cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs "
       << fixed << laptop1->price << endl;

  laptop1->color = "Silver";
  laptop1->manufacturer = "Apple";
  laptop1->price = 1499.99;

  cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs "
       << fixed << laptop1->price << endl;

  cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs "
       << fixed << laptop2.price << endl;

  laptop2.color = "Red";
  laptop2.manufacturer = "Dell";
  laptop2.price = 499.99;

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
//   university1.setName("Coolage College");
//   university1.setRating(9);
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
  Student student4;
  Student student5;
  Student student6;
  Student student7;
  Student student8;

  student1.name = "Alice";
  student2.name = "Bob";
  student3.name = "Chuck";
  student4.name = "Dave";
  student5.name = "Eve";
  student6.name = "Fred";
  student7.name = "George";
  student8.name = "Hillary";

  student1.major = "Anthropology";
  student2.major = "Biology";
  student3.major = "Computers";
  student4.major = "Dance";
  student5.major = "Environment";
  student6.major = "French";
  student7.major = "German";
  student8.major = "History";

  student1.gpa = 3.00;
  student2.gpa = 3.20;
  student3.gpa = 3.50;
  student4.gpa = 2.50;
  student5.gpa = 2.50;
  student6.gpa = 3.20;
  student7.gpa = 2.00;
  student8.gpa = 2.00;

  vector<Student> roster = vector<Student>();

  roster.push_back(student1);
  roster.push_back(student2);
  roster.push_back(student3);
  roster.push_back(student4);
  roster.push_back(student5);
  roster.push_back(student6);
  roster.push_back(student7);
  roster.push_back(student8);

  for (Student student : roster) {
    cout << left << setw(10) << student.name << setw(15) << student.major
         << fixed << student.gpa << endl;
  }

  return 0;
}
