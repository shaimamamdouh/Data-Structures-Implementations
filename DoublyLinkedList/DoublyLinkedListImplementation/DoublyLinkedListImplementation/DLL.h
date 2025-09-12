
#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

// Doubly Linked List class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int count;  // to keep track of size

public:
    DoublyLinkedList();            // Constructor
    ~DoublyLinkedList();           // Destructor

    bool isEmpty() const;          // check if list is empty
    int size() const;              // return number of nodes

    void insertFront(int value);   // insert at front
    void insertEnd(int value);     // insert at end
    void insertAfter(int key, int value); // insert after given key

    void deleteFront();            // delete from front
    void deleteEnd();              // delete from end
    void deleteNode(int key);      // delete by value

    void printForward() const;     // print head to tail
    void printReversed() const;    // print tail to head

    void clear();                  // delete all nodes (optional but useful)
};

#endif
