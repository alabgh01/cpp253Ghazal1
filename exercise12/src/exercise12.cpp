/**
 * @file exercise12.cpp
 * @author 
 * @brief Exercise 12 implementation
 * @version 2022.3
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise12.hpp"

// Define a function that uses an array.
int TakeArray(int arr[], int size){
    int sumAll = 0;
    for(int i = 0; i < size; ++i){
        sumAll += arr[i];
    }
    return sumAll;
}

// Define a function that uses a vector.
string TakeVector(vector<string> vect){
    string sentence = "";
    for(auto it = vect.begin(); it != vect.end(); ++it){
        sentence += *it + " ";
    }
    return sentence;
}

// Define a function that uses a deque.
deque<int> TakeDeque(deque<int> dq, int size){
    for(int i = 0; i < size; ++i){
        dq.push_back(dq[0]); 
        dq.pop_front();
        // dq.push_back(popped); 
        // for (uint n = 2; n < i; ++n)
        //     if (n % i != 0){
        //         dq.push_back(i);
        //     }
    }
    return dq;
}

// Define a function that uses a list.
int TakeList(list<int> lst, int smallest){
    int smaller = 0;
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        if (*it < smallest) {
        smaller = *it;
        }
    }
    return smaller;
}

// Define a function that uses a stack.
void TakeStack(stack<int> st){
    while(!st.empty()){
        cout << "stack not empty, we have: " << st.top() << endl;
        st.pop();
    }
}

// Define a function that uses a queue.
string TakeQueue(queue<string> q){
    while(!q.empty()){
        string ar;
        cout << "front of queue is: " << 
        q.front() << " and back is: " << 
        q.back() << '\n' << 
        "what do you want to do? (add, remove, or stop)" << 
        endl;
        cin >> ar;
        if (ar == "add"){
            string el;
            cout << "enter the element." << endl;
            cin >> el;
            q.push(el);
            cout << el << " has been added." << endl;
        }else if (ar == "remove"){
            q.pop();
            cout << 
            "the element at the end of the queue has been removed." << 
            endl;
        }else if (ar == "stop"){
            cout << "stopped" << endl;
            break;
        }
        else{
            cout << "invalid input. please try again." <<
            endl;
        }
    }
    return q.front();
}

// Define a function that uses a priority_queue.
int TakePQueue(priority_queue<int> pq){
    while(!pq.empty()){
        string ar;
        cout << "prioritized element of queue is: " << 
        pq.top() <<
        '\n' << 
        "what do you want to do? (add, remove, or stop)" << 
        endl;
        cin >> ar;
        if (ar == "add"){
            int el;
            cout << "enter the element. Note going to be ordered in the queue according to how high it is" << endl;
            cin >> el;
            pq.push(el); 
            cout << el << " has been added." << endl;
        }else if (ar == "remove"){
            cout << pq.top() << " will be removed." << endl;
            pq.pop();
            cout << 
            "the element with the highest priority of the queue has been removed." << 
            endl;
        }else if (ar == "stop"){
            cout << "stopped" << endl;
            break;
        }
        else{
            cout << "invalid input. please try again." <<
            endl;
        }
    }
    return pq.top();
}

// Define a function that uses a set.
set<int> TakeSet(set<int> s){
    if(!s.empty()){
        // for (auto it : s){
        //     cout << it << endl;
        // }
        cout << "max size is: " << s.max_size() << endl;
    }
    else{
        cout << "set is empty" << endl;
    }
    string add;
    cout << "do you want to add to the set?" << endl;
    cin >> add;
    if (add == "yes"){
        int el;
        cout << "enter the element you want to add: " << endl;
        cin >> el;
        s.insert(el);
    }else{
        cout << "stopped" << endl;
    }
    return s;
}

// Define a function that uses a map.
string TakeMap(int wNumber, map<string, string> wordsMap){
    string phrase = "";
    for (int i = 0; i < wNumber; ++i){
        string dice = to_string(rand() % 6 + 1);
        auto wordRes = wordsMap.find(dice);
        phrase = phrase + wordRes->second + " ";
    }
    return phrase;
}

// Define a function that uses any other container.
int TakeMultiSet(multiset<string> sm){
    string sAll = "";
    if(!sm.empty()){
        for (auto it : sm){
            sAll += it + " ";
        }
        cout << "the sentence is: " << sAll << endl;
    }
    else{
        cout << "set is empty" << endl;
    }
    string add;
    cout << "do you want to add to the set?" << endl;
    cin >> add;
    if (add == "yes"){
        string el;
        cout << "enter the element you want to add: " << endl;
        cin >> el;
        sm.insert(el);
        cout << sAll << el << endl;
    }else{
        cout << "stopped" << endl;
    }

    int ssi = sm.size();
    return ssi;
}

