#include <vector>
#include <unordered_map>
#include <iostream>
#include <set>
#include "Document.h"
using namespace std;


class DocumentManager
{
private:
    map<int, Document> docList;
    set<int> patronList;
    unordered_map<string,int> docNameToId;
public:
    void addDocument(string name, int id, int license_limit)
    {
        docList.insert(std::pair<int,Document>(id,Document(name,id,license_limit)));
        docNameToId.insert(std::pair<string,int>(name,id));
    }

    void addPatron(int patronID)
    {
        patronList.insert(patronID);
    }

    // returns docid if name is in the document collection or 0 if the name is not in the collection
    int search(string name) 
    {
        int id = docNameToId[name];
        auto it = docList.find(id);
        if (it != docList.end())
        {
            return id;
        } else
        {
            return 0;
        }
    }

    // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
    bool borrowDocument(int docid, int patronID)  
    {
        auto it = patronList.find(patronID);
        if (it != patronList.end())
        {
            if (docList[docid].borrow())
            {
                return true;
            }
        }
        return false;
    }

    void returnDocument(int docid, int patronID)
    {
        auto it = patronList.find(patronID);
        if (it != patronList.end())
        {
            docList[docid].returnDoc();
        }
    }
};

int main()
{
    DocumentManager docManager;
    docManager.addPatron(1);
    docManager.addDocument("arad",1,1);
    cout << docManager.borrowDocument(1,1) << "\n";
    cout << docManager.borrowDocument(1,1) << "\n";
    cout << docManager.search("ara2d") << "\n";
}