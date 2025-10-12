#include "PrefixMatcher.h"

int PrefixMatcher::selectRouter(string networkAddress)
{
    int currRouterNumber = -1;
    TrieNode* currentTrie = root;
    if (currentTrie == nullptr)
    {
        return currRouterNumber;
    }

    for (int i = 0; i < networkAddress.length(); i++)
    {
        if (currentTrie->routerNumber != -1)
        {
            currRouterNumber = currentTrie->routerNumber;
        }
        int num = (int)(networkAddress[i]-'0');
        if (currentTrie->children[num] == nullptr)
        {
            return currRouterNumber;
        }
        currentTrie = currentTrie->children[num];
    }
    return currRouterNumber;
}

void PrefixMatcher::insert(string address, int routerNumber)
{
    TrieNode* currentTrie = root;
    for (int i = 0; i < address.size(); i++)
    {
        int num = (int)(address[i]-'0'); 
        if (currentTrie->children[num] == nullptr)
        {
            currentTrie->children[num] = new TrieNode();
        }
        currentTrie = currentTrie->children[num];
    }
    currentTrie->routerNumber = routerNumber;
}