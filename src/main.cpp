#include <iostream>
#include "linkedLists.cpp"

int main()
{
    Node* test = nullptr;
    test->unshift(&test, 10);
    test->unshift(&test, 20);
    test->push(&test, 5);
    test->push(&test, 1);
    test->push(&test, 30);

    std::cout << *test << std::endl;

    test->remove(&test, 20);

    std::cout << *test << std::endl;
    return 0;
}