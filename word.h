/*
file:word.h
author: necati yesil
description: header file for word class
DoC:12/14/18
*/
#ifndef WORD_H
#define WORD_H
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

class Word
{
public:
   //converts all words to lowercase characters and assigns it to member variable
   Word(std::string word);
   //it pushes_back lines to m_line vector
   void add_line(int line);
   //it counts the how many times the word accured.
   void add_count(int count);
   //returns the member variable
   std::string get_word();
   //returns the member variable
   int get_count();
   //it the line number where the word is occures.
   void print_lines();
private:
   //member var for holding the word count
   int m_count;
   //member var for holding word
   std::string m_word;
   // member vector to hold lines from file
   std::vector<int> m_line;
};

#endif
