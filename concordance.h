/*
file:concordance.h
author: necati Yesil
description: header file for concordance class
DoC: 12/14/18
*/
#ifndef CONCORDANCE_H
#define CONCORDANCE_H
#include "word.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <cctype>
#include <vector>

class Concordance
{
public:
    //@ param filename, it takes the string textfile 
    //assigns to member variable filename
    Concordance(std::string filename);
    //this function is the going to take inputs as strings and use find_word()
    //to search for words and increment the count if word occurs somewhere else again
    void parse();
    //this is the function that will searh for the word as they are array of characters.
    int find_word(std::string word);
    //it will print them using print_line() function from word.h
    void print();
private:
    std::vector<Word> m_word_stats;// this is the vector of Word to store words
    std::string m_filename; // to store filename 
};

#endif
