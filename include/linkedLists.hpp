#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include <iostream>

class Node
{
public:
    int data;
    Node* next;

    Node(int val) : data{ val } {};
}

#endif
