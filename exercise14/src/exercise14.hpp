/**
 * @file exercise14.hpp
 * @author 
 * @brief Diceware header
 * @version 2022.3
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EXERCISE14_H
#define EXERCISE14_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <map>

using namespace std;

void ReadFile(string filename, int wNumber);

string RollDice();

string GetWords(int wNumber, map<string, string> wordsMap);

#endif
