/**
file: main.cpp
author:necati yesil
description: this code will take input from text file and i will search for words and will print out every single word that was in the text file and will tell you how many times they accured in the file
DoC: 12/14/18
**/
#include "concordance.h"

int main()
{

   Concordance con("alice.txt");//concordance object with file name from the repository
   con.parse(); //searches for the word  
   con.print(); // prints the results
   return 0;
}
