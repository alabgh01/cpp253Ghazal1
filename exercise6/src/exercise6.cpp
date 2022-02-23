/**
 * @file exercise6.cpp
 * @author
 * @brief Exercise 6 implementation
 * @version 2022.2
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise6.hpp"

void printNChars(char c, int n) {
    cout << string(n, c) << endl;
}

void printNChars(ofstream &fout, char c, int n) {
    fout.open("out.txt");
    fout << string(n, c) << endl;
    fout.flush();
    fout.close();
}

void readStates(ifstream &fileIn, vector<State> &states) {
    // fileIn.open("exercise6_stateTaxRates.txt");
    while(!fileIn.eof()){
        State st;
        getline(fileIn, st.code, '|');
        fileIn >> st.taxRate;
        fileIn.ignore(__INT_MAX__, '|');
        getline(fileIn, st.name, '\n');
        states.push_back(st);
    }
    fileIn.close();
    
}

void readInventory(ifstream &fileIn, vector<Game> &inventory) {
    while(!fileIn.eof()){
        Game gm;
        // int n = inventory.size();
        // gm.number = n;
        getline(fileIn, gm.title, '|');
        getline(fileIn, gm.publisher, '|');
        getline(fileIn, gm.platform, '|');
        fileIn >> gm.releaseYear;
        fileIn.ignore(__INT_MAX__, '|');
        fileIn >> gm.price;
        fileIn.ignore(__INT_MAX__, '\n');
        inventory.push_back(gm);
    }
    fileIn.close();
}

void displayInventory(vector<Game> inventory) {
    // for(auto i = inventory.begin(); i != inventory.end(); ++i){
    //     *i.print();
    // }
    int s = inventory.size();
    for(int i = 0; i < s; ++i){
        inventory[i].print();
        cout << "\n";
        printNChars('-', 125);
    }
}

double displayCart(vector<GameInCart> cart, double salesTax, ofstream &fout) {
    return 0.0;
}

int readANumber(int lower_bound = 0, int upper_bound = 100) {
    cout << "enter integer" << endl;
    int x;
    cin >> x;
    if (cin.fail()){
        cout << "please enter an integer" << endl;
    }
    else if (x < lower_bound or x > upper_bound){
        cout << "please enter an integer between 0 and 100" << endl;
    }
    else{
        return x;
    }
    return 0;
}

void readState(vector<State> &states, double &salesTax) {
    // cout << "enter a state" << endl;
    // string st;
    // cin >> st;
    // if (st.length() > 2){

    // }
}
