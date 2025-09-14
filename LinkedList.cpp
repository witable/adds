#include "LinkedList.h"

LinkedList::LinkedList()
{
   head = nullptr;
}

LinkedList::LinkedList(int* arr, int len)
{

    head = nullptr;
    if (len <= 0)
    {
        return;
    }

    head = new Node();
    head->newData(arr[0]);
    Node* current = head;
    for (int i = 1; i < len; i++)
    {
        Node* node = new Node(arr[i]);
        current->newLink(node);
        current = current->getLink();
    }

}

void LinkedList::insertPosition(int pos, int newNum)
{
    if (pos <= 1 || head == nullptr) 
    {
        head = new Node(newNum, head);
        return;
    }

    Node* currentNode = head;
    int count = 1;

    while (count < pos - 1 && currentNode->getLink() != nullptr)
    {
        currentNode = currentNode->getLink();
        count++;
    }

    Node* node = new Node(newNum, currentNode->getLink());
    currentNode->newLink(node);
}


LinkedList::~LinkedList()
{
    Node* current = head;
    while (current)
    {
        Node* next = current->getLink();
        delete current;
        current = next;
    }
}


bool LinkedList::deletePosition(int pos)
{
    Node* oldNode = nullptr;
    Node* currentNode = head;
    Node* temp;
    if (pos < 1 || currentNode->getLink() == nullptr)
    {
        return false;
    }
    if (pos == 1)
    {
        Node* temp = head->getLink();
        delete head;
        head = temp;
        return true;
    }
    
    int count = 1;
    while (count < pos)
    {
        
        if (currentNode->getLink() == nullptr)
        {
            return false;
        } 
        oldNode = currentNode;
        currentNode = oldNode->getLink();
        count++;
    }
    if (currentNode->getLink() != nullptr)
    {
        oldNode->newLink(currentNode->getLink());
        delete currentNode;
    } else
    {
        oldNode->newLink(nullptr);
        delete currentNode;
    }
    return 1;
    
}

int LinkedList::get(int pos)
{
    Node* currentNode = head;

    
    for (int i = 1; i < pos; i++)
    {
    if (currentNode == nullptr)
    {
        return std::numeric_limits<int>::max();
    }
        currentNode = currentNode->getLink();
    }
    return currentNode->getData();
}

int LinkedList::search(int target)
{
    Node* currentNode = head;
    int pos = 0;
    
    while (currentNode->getLink() != nullptr)
    {

        if (currentNode->getData() == target)
        {
            return pos;
        }
        currentNode = currentNode->getLink();
        pos ++;
    }
    if (currentNode->getData() == target)
    {
        return pos;
    }

    return -1;
}

void LinkedList::printList()
{
    Node* currentNode = head;
    std::cout << "[";
    while (currentNode->getLink() != nullptr)
    {
        std::cout << currentNode->getData() << " ";
        currentNode = currentNode->getLink();
    }
    std::cout << currentNode->getData();
    std::cout << "]";

}