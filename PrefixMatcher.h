#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include <vector>
#include <iostream>
using namespace std;

struct TrieNode {
    int routerNumber = -1;
    TrieNode* children[2] = {nullptr};
    ~TrieNode()
    {
        for (int i = 0; i < 2; i++)
        {
            if (children[i] != nullptr)
            {
                delete children[i];
            }
            
        }
    }
};

class PrefixMatcher
{
private:
    TrieNode* root;
    void recursiveSearch(TrieNode* node, int& routerNumber);
public:
    PrefixMatcher()
    {
        root = new TrieNode();
    }
    ~PrefixMatcher()
    {
        delete root;
    }
    int selectRouter(string networkAddress);  // return the router with the longest matching prefix
    // We've made this a string for ease of implementation, if you'd like to work with binary numbers in your implementation feel free but for testing you need to provide an interface that takes a string
    void insert(string address, int routerNumber); // add a router address
};



#endif 