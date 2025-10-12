#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include <vector>
#include <iostream>
using namespace std;

struct TrieNode {
    bool isEndOfWord = false;
    TrieNode* children[26] = {nullptr};
};

class Autocomplete
{
private:
    void recursiveSearch(TrieNode* node, string word, vector<string>& vect);
    TrieNode* root;
public:
    Autocomplete()
    {
        root = new TrieNode();
    }
    vector<string> getSuggestions(string partialWord);  // return the known words that start with partialWord
    void insert(string word); // add a word to the known words
};

#endif