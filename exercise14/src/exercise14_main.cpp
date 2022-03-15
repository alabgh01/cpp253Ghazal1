/**
 * @file exercise14_main.cpp
 * @author Ghazal Alabtah
 * @brief Diceware driver
 * @version 2022.3
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise14.hpp"
#include "bits/stdc++.h"
using namespace std;

int main(int argc, char** argv) {

    if (argc == 3){
        int wNumber = stoi(argv[1]);
        string fileName = argv[2];
        ReadFile(fileName, wNumber);
    }
    else{
        cout << "Invalid number of arguments given." << endl;
    }

    // string fileName;
    // int wNumber;

    // cout << "enter the file name" << endl;
    // cin >> fileName;
    // cout << "How many words would you like to have in your passphrase?" << endl;
    // cin >> wNumber;
    // while (cin.fail()){
    //     cout << 
    //     "Your answer should be an integer. Please try again." <<
    //      endl;
    //     std::cin.clear();
    //     std::cin.ignore(256,'\n');
    //     cin >> wNumber;
    // }

    // // ReadFile("data/exercise14_diceware.wordlist.no.txt", wNumber);
    // ReadFile(fileName, wNumber);

    return 0;
}