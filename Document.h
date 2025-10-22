#include <string>
#include <map>

using namespace std;


class Document
{
private:
    int id;
    int license_limit;
    int remaining;
    string name;
public:
    Document()
    {
        this->id = 0;
        this->license_limit = 0;
        this->remaining = 0;
        this->name = "";
    }
    Document(string name, int id, int license_limit)
    {
        this->id = id;
        this->license_limit = license_limit;
        this->remaining = license_limit;
        this->name = name;
    }
    int getId()
    {
        return id;
    }
    int getRemaining()
    {
        return remaining;
    }
    int getLimit()
    {
        return license_limit;
    }
    string getName()
    {
        return name;
    }
    bool borrow()
    {
        if (remaining <= 0)
        {
            return false;
        }
        remaining--;
        return true;
    }
    void returnDoc()
    {
        remaining++;
    }
};