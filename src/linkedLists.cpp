#include "../include/linkedLists.hpp"

// Constructor to create a new node - pass a value to the constructor
Node::Node(int val)
{
    data = val;
    next = nullptr;
}

void Node::addNode(Node** head, int val)
{
    // creating a new node
    Node* new_node = new Node(val);

    // making the data of the new node the
    new_node->data = val;

    // making the next of the new node the head
    new_node->next = (*head);

    // making the head the new node
    (*head) = new_node;
}
