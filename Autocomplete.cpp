#include "Autocomplete.h"

vector<string> Autocomplete::getSuggestions(string partialWord)
{
    
    vector<string> words = {};
    TrieNode* currentTrie = root;
    if (currentTrie == nullptr)
    {
        return words;
    }
    for (int i = 0; i < partialWord.length(); i++)
    {
        int num = (int)partialWord[i]-97; 
        if (currentTrie->children[num] == nullptr)
        {
            return words;
        }
        currentTrie = currentTrie->children[num];
    }
    
    recursiveSearch(currentTrie, "", words);
    for (int i = 0; i < words.size() ; i++)
    {
        words[i] = partialWord+words[i];
    }
    return words;
}

void Autocomplete::recursiveSearch(TrieNode* node, string word, vector<string>& words)
{
    if (node->isEndOfWord)
    {
        words.push_back(word);
    }
    for (int i = 0; i < 26; i++)
    {
        if (node->children[i] != nullptr)
        {
            char letter = (char)(97+i);
            
            recursiveSearch(node->children[i], word+letter, words);
        }
    }
}

void Autocomplete::insert(string word)
{
    TrieNode* currentTrie = root;
    for (int i = 0; i < word.size(); i++)
    {
        int num = (int)word[i]-(int)('a'); 
        if (currentTrie->children[num] == nullptr)
        {
            currentTrie->children[num] = new TrieNode();
        }
        currentTrie = currentTrie->children[num];
    }
    currentTrie->isEndOfWord = 1;
}
