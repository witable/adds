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
    Node* currentNode = head;

    if (pos <= 1)
    {
        Node* node;
        node = new Node(newNum,head);
        head = node;
        return;

    } else
    {
        
        while (currentNode->getLink() != nullptr)
        {
            
            if (currentNode->getLink() == nullptr)
            {
                Node* node;
                node = new Node(newNum);
                currentNode->newLink(node);
                pos = 0;
            } else
            {
                currentNode = currentNode->getLink();
            }
        }
        if (pos != 0)
        {
                Node* node;
                node = new Node(newNum);
                currentNode->newLink(node);
        }
    }
}


LinkedList::~LinkedList()
{
    if (head == nullptr)
    {
        return;
    }
    Node* current = head;
    Node* link;
    while(current->getLink() != nullptr)
    {
        link = current->getLink();
        delete current;
        current = link;
    }
    link = current->getLink();
    delete current;

}


bool LinkedList::deletePosition(int pos)
{
    Node* oldNode = nullptr;
    Node* currentNode = head;
    Node* temp;
    if (pos < 1 || currentNode->getLink() == nullptr)
    {
        return false;
    } else if (pos == 1)
    {
        temp = head->getLink();
        delete head;
        head = temp;
        return 1;
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

    
    for (int i = 0; i < pos; i++)
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
    
    while (currentNode->getLink() != nullptr)
    {
        std::cout << currentNode->getData() << " ";
        currentNode = currentNode->getLink();
    }
    std::cout << currentNode->getData() << " ";

}