#include <iostream>
#include "linkedLists.cpp"

int main()
{
    std::cout << "Hello World!" << std::endl;

    Node* test = nullptr;
    test->addNode(&test, 10);

    std::cout << test->data << std::endl;
    return 0;
}