/**
 * @file exercise14.cpp
 * @author 
 * @brief Diceware implementation
 * @version 2022.3
 * @date 
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise14.hpp"
#include "bits/stdc++.h"
using namespace std;


void ReadFile(string filename, int wNumber){
    // read file, generate dictionary
    // according to the result of roll dice, pick the word
    // according the given number of words, return words
    // change the void return to what is needed
    filename = "data/" + filename + ".txt";
    cout << "opening file " << filename << "...\n" << endl;
    ifstream wordsFile(filename.c_str());
    if (wordsFile.fail()){
        cout << 
        "Could not open file. The file name you entered may be misspelled. Please try again." <<
         endl;
        exit(1);
    }
    if(filename == "data/exercise14_diceware.wordlist.txt"){
        wordsFile.ignore(__INT_MAX__, '\n');
        wordsFile.ignore(__INT_MAX__, '\n');
    }
    map<string, string> wordsMap;
    while(!wordsFile.eof()){
        string dice;
        string word;
        getline(wordsFile, dice, '	');
        getline(wordsFile, word, '\n');
        wordsMap.insert({dice, word});  
    }
    vector<string> cands;
    for(int i = 0; i < 10; ++i){
        if(i < 7){
            string pass = "\033[3" + to_string(i+1) + "m" + GetWords(wNumber, wordsMap);
            cands.push_back(pass);
        }
        else{
            string pass = "\033[3" + to_string(i-6) + "m" + GetWords(wNumber, wordsMap);
            cands.push_back(pass);
        }
    }
    // vector<string> colors {"\033[31m", "\033[32m", "\033[33m", "\033[34m", "\033[35m", "\033[36m", "\033[37m", "\033[38m", "\033[39m", "\033[40m"};

    cout << "Our candidates for you are:" << endl;
    for(auto it = cands.begin(); it != cands.end(); ++it){
        cout << *it << endl;
    }
}

string GetWords(int wNumber, map<string, string> wordsMap){
    // make a list of the words
    // call RollDice
    // return to ReadFile
    // called by readFile and use the wordmap
    string phrase = "";
    for (int i = 0; i < wNumber; ++i){
        string diceRes = RollDice();
        // cout << diceRes << endl;
        auto wordRes = wordsMap.find(diceRes);
        phrase = phrase + wordRes->second + " ";
    }
    return phrase;
}

string RollDice(){
    // roll dice 5 times and keep result in a string
    // give result to GetWords

    random_device rd;
    mt19937 gen(rd()); 
    uniform_int_distribution<> distr(1, 6);

    string rolled = "";
    // srand (time(0));
    for (int i = 0; i < 5; ++i){
        // int roll = 1 + (rand() % 6);
        int roll = distr(gen);
        rolled += to_string(roll);
    }
    return rolled;
}

