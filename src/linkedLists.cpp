#include "../include/linkedLists.hpp"

// Constructor to create a new node - pass a value to the constructor
Node::Node(int val)
{
    data = val;
    next = nullptr;
}

// Linked List Methods - manipulation of the list

void Node::unshift(Node** head, int val)
{
    // creating a new node
    Node* new_node = new Node(val);

    // making the data of the new node the
    new_node->data = val;

    // making the next of the new node the head
    new_node->next = (*head);

    // making the head the new node
    (*head) = new_node;

    return;
}

void Node::push(Node** head, int val)
{
    // create a new node to append to the end of the list
    Node* new_node = new Node(val);

    // create a pointer to the head of the list
    Node* current = *head;

    // if the list is empty, make the new node the head
    if(*head == nullptr)
    {
        *head = new_node;
        return;
    }

    // traverse the list until we reach the end
    while(current->next != nullptr)
    {
        current = current->next;
    }

    // make the next of the last node the new node
    current->next = new_node;

    return;
}

void Node::remove(Node** head, int val_to_remove)
{
    // create a pointer to the head of the list
    Node* current = *head;

    // if the head is the node to remove
    if(current->data == val_to_remove)
    {
        // make the head the next node
        *head = current->next;

        // delete the current node
        delete current;

        return;
    }

    // traverse the list until we reach the end
    while(current->next != nullptr)
    {
        // if the next node is the node to remove
        if(current->next->data == val_to_remove)
        {
            // create a pointer to the node after the node to remove
            Node* node_after = current->next->next;

            // delete the node to remove
            delete current->next;

            // make the next node the node after the node to remove
            current->next = node_after;

            return;
        }

        // set the current node to the next node
        current = current->next;
    }
}

// Sorting methods

/**
    Dividing the list into two halves
    Sorting the two halves recursively
    Merging the two sorted halves
*/
void Node::merge_sort(Node** head)
{
    if(*head == nullptr || (*head)->next == nullptr)
        return;
}

// operator overload

std::ostream& operator<<(std::ostream& os, const Node& n)
{
    // create a pointer to a reference of the head of the list
    const Node* current = &n;

    // while the current node is not null
    while (current != nullptr)
    {
        // we print the data of the current node
        if(current->next == nullptr)
            os << current->data;
        else
            os << current->data << "->";

        // we set the current node to the next node
        current = current->next;
    }
    return os;
}