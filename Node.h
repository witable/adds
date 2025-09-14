#ifndef NODE_H
#define NODE_H
class Node
{
private:
    int data;
    Node* link;
public:
    Node();
    ~Node();
    Node(int data);
    Node(int data, Node* link);
    Node* getLink();
    int getData();
    void newData(int data);
    void newLink(Node* link);
    
};

#endif