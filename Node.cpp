#include "Node.h"

Node::Node()
{
    data = 0;
    this->link = nullptr;
}

Node::Node(int data, Node* link)
{
    this->link = link;
    this->data = data;
}

Node::~Node()
{
};

Node::Node(int data)
{
    this->link = nullptr;
    this->data = data;
}

void Node::newLink(Node* link)
{
    this->link = link;
}

Node* Node::getLink()
{
    return this->link;
}

int Node::getData()
{
    return this->data;
}

void Node::newData(int data)
{
    this->data = data;
}