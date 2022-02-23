/**
 * @file exercise6.hpp
 * @author
 * @brief Exercise 6 header
 * @version 2022.2
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EXERCISE6_H
#define EXERCISE6_H

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <vector>

using namespace std;

/**
 * @brief Structure Game to store game properties: title, publisher, platform,
 * release year, and price
 *
 * TODO: Implement this structure
 */
struct Game {
  // int number;
  string title;
  string publisher;
  string platform;
  int releaseYear;
  double price;

  /**
   * @brief Display game properties (title, publisher, platform, release year,
   * price) on the standard output (console)
   *
   * TODO: Implement this function
   */
  // void print(Game g) {
  //   cout << g.title << endl;
  //   cout << g.publisher << endl;
  //   cout << g.platform << endl;
  //   cout << g.releaseYear << endl;
  //   cout << g.price << endl;
  // }
  void print() {
    // cout << setw(3) << number << setw(3) << '|';
    cout << setw(20) << title << setw(5) << '|';
    cout << setw(20) << publisher << setw(5) << '|';
    cout << setw(20) << platform << setw(5) << '|';
    cout << setw(20) << releaseYear << setw(5) << '|';
    cout << setw(20) << price << setw(5) << '|';
  }
};

/**
 * @brief Structure to store State properties: code (two letters), tax rate, and
 * name
 *
 * TODO: Implement this structure
 */
struct State {
  string code;
  double taxRate;
  string name;
};

/**
 * @brief Structure to store games in cart and its properties: game and quantity
 *
 * TODO: Implement this structure
 */
struct GameInCart {
  Game game;
  int quantity;
  
  /**
   * @brief Display game properties (title, platform, price, quantity) on the
   * standard output (console)
   *
   * TODO: Implement this function
   *
   */
  void print(GameInCart g) {
    cout << g.game.title << endl;
    cout << g.game.platform << endl;
    cout << g.game.price << endl;
    cout << g.quantity << endl;
  }
  /**
   * @brief Save game properties (title, platform, price, quantity) to the file
   * (fout)
   *
   * @param fout
   * TODO: Implement this function
   */
  void save(ofstream &fout) {
    fout.open("out.txt");
    fout << game.title << endl;
    fout << game.platform << endl;
    fout << game.price << endl;
    fout << quantity << endl;
    fout.flush();
    fout.close();
  }
};

/**
 * @brief Print n characters c
 *
 * @param c
 * @param n
 * TODO: Implement this function
 */
void printNChars(char c, int n);
/**
 * @brief Print n characters c to a file
 *
 * @param fout
 * @param c
 * @param n
 * TODO: Implement this function
 */
void printNChars(ofstream &fout, char c, int n);
/**
 * @brief Read state information into a vector
 *
 * @param fileIn
 * @param states
 * TODO: Implement this function
 */
void readStates(ifstream &fileIn, vector<State> &states);
/**
 * @brief Read the inventory into a vector
 *
 * @param fileIn
 * @param inventory
 * TODO: Implement this function
 */
void readInventory(ifstream &fileIn, vector<Game> &inventory);
/**
 * @brief Display inventory
 *
 * @param inventory
 * TODO: Implement this function
 */
void displayInventory(vector<Game> inventory);
/**
 * @brief Display the shopping cart
 *
 * @param cart
 * @param salesTax
 * @param fout
 * @return double
 * TODO: Implement this function
 */
double displayCart(vector<GameInCart> cart, double salesTax, ofstream &fout);
/**
 * @brief Read an integer within the specified boundaries
 *
 * @param lower_bound
 * @param upper_bound
 * @return int
 * TODO: Implement this function
 */
int readANumber(int lower_bound, int upper_bound);
/**
 * @brief Read the state code
 *
 * @param states
 * @param salesTax
 * TODO: Implement this function
 */
void readState(vector<State> &states, double &salesTax);

#endif
