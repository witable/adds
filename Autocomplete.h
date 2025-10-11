#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <vector>
#include <iostream>
using namespace std;

class Autocomplete
{
private:

public:
    vector<string> getSuggestions(string partialWord);  // return the known words that start with partialWord

    void insert(string word); // add a word to the known words
};

#endif