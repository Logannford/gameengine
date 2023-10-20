#ifndef LINKEDLISTS_HPP
#define LINKEDLISTS_HPP
#include <iostream>

class Node
{
public:
    int data;
    Node* next;

    Node(int val);
    void addNode(Node** head, int val);
};


#endif
