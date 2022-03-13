/**
 * @file exercise12.hpp
 * @author
 * @brief Exercise 12 header
 * @version 2022.3
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EXERCISE12_H
#define EXERCISE12_H

#include <bits/stdc++.h>

using namespace std;

// Declare a function that uses an array.
// takes an array and calculates the sum of its elements
int TakeArray(int arr[], int size);

// Declare a function that uses a vector.
// takes a avector of words and makes a sentence
string TakeVector(vector<string> vect);

// Declare a function that uses a deque.
// takes a deques, and does dq manipulation, add elements, remove and so on
deque<int> TakeDeque(deque<int>, int size);

// Declare a function that uses a list.
// takes a list and checks which number is smalles, also allows user to predict it
int TakeList(list<int> lst, int smallest);

// Declare a function that uses a stack.
// takes a stack and does stack manipulation and prints all stack elements
void TakeStack(stack<int> st);

// Declare a function that uses a queue.
// takes a queue and does queue manipulation
// asks user for input, add, remove and so on
string TakeQueue(queue<string> q);

// Declare a function that uses a priority_queue.
// takes a queue and does priority queue manipulation
// asks user for input, add, remove and so on
int TakePQueue(priority_queue<int> pq);

// Declare a function that uses a set.
// takes a set and edits it by adding elements
set<int> TakeSet(set<int> s);

// Declare a function that uses a map.
// takes words, rolls a dice and chooses words from
// map randomly according to the dice result
string TakeMap(int wNumber, map<string, string> wordsMap);

// Declare a function that uses any other container.
// takes a Multi set and edits it by adding elements, 
// keepeing nuber repi\etiion
int TakeMultiSet(multiset<string> s);

#endif
