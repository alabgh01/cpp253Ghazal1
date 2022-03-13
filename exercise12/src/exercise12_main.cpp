/**
 * @file exercise12_main.cpp
 * @author Ghazal Alabtah
 * @brief Exercise 12 driver
 * @version 2022.3
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise12.hpp"

int main() {
  cout << "Exercise 12" << endl;
  cout << "Pass all tests" << endl;

  cout << "ARRAY" << endl;
  int arr[] = {1, 2, 3, 4, 5};
  cout << TakeArray(arr, 5) << endl;

  cout << "VECTOR" << endl;
  vector<string> vect{"I", "like", "c++"};
  cout << TakeVector(vect) << endl;

  cout << "DEQUEUE" << endl;
  deque<int> dq(1, 2);
  deque<int> ndq = TakeDeque(dq, 2);
  cout << ndq[0] << ", " << ndq[1] << endl;

  cout << "LIST" << endl;
  list<int> lst;
  for (int i = 0; i < 5; ++i) {
    lst.push_back(i);
  }
  cout << TakeList(lst, 2) << endl;

  cout << "STACK" << endl;
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.pop();
  TakeStack(st);

  cout << "QUEUE" << endl;
  queue<string> q;
  q.push("str1");
  q.push("str2");
  q.push("str3");
  q.push("str4");
  cout << TakeQueue(q)<< endl;

  cout << "PRIORITY QUEUE" << endl;
  priority_queue<int> pq;
  pq.push(3);
  pq.push(1);
  pq.push(2);
  pq.push(4);
  cout << TakePQueue(pq) << endl;

  cout << "SET" << endl;
  set<int> s;
  s.insert(3);
  s.insert(1);
  s.insert(2);
  s.insert(4);
  set<int> ss = TakeSet(s);
  for(auto it : ss){
    cout << it << endl;
  }

  cout << "MAP" << endl;
  map<string, string> wordsMap;
  wordsMap.insert({"1", "cpp"});
  wordsMap.insert({"2", "253"});
  wordsMap.insert({"3", "Luther"});
  wordsMap.insert({"4", "College"});
  wordsMap.insert({"5", "Iowa"});
  wordsMap.insert({"6", "Decorah"});
  cout << TakeMap(2, wordsMap) << endl; 
  
  cout << "MULTI SET" << endl;
  multiset<string> sm;
  sm.insert("It");
  sm.insert("is");
  sm.insert("nice");
  sm.insert("today");
  TakeMultiSet(sm);
  



  return 0;
}