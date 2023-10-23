// all methods written in gameengine/src/linkedLists.cpp

#ifndef LINKEDLISTS_HPP
#define LINKEDLISTS_HPP
#include <iostream>

class Node
{
    public:
        int data;
        Node* next;

        // Constructor to create a new node - pass a value to the constructor
        Node(int val);

        // method declarations
        void unshift(Node** head, int val);
        void push(Node** head, int val);
        void remove(Node** head, int val_to_remove);

        // sorting methods
        void merge_sort(Node** head);

        // friend function to overload the << operator

        friend std::ostream& operator<<(std::ostream& os, const Node& n);
};


#endif
