#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<cassert>
#include<iostream>

struct Node
{
    Node * next=nullptr;
    int data;
    Node(int data):data(data){}

    ~Node() {}

};

class LinkedList
{

    Node*head=nullptr;// Pointer to the first node
    Node*tail=nullptr;// Pointer to the last node
    int size=0;
public:
    LinkedList();
    ~LinkedList();
    //Print all elements in the list.
    void Print();
    //Insert a new node at the front.
    void insert_front(int data);
    //Insert a new node at the end.
    void insert_end(int data);
    //Insert a new node at a specific index.
    void insert(int data,int idx);
    //Delete the first node in the list.
    void delete_first();
    //Delete the last node in the list.
    void delete_last();
    //Delete the node at a specific index.
    void delete_nth_node(int indx);
    //return node in indx.
    Node* get_nth(int indx);
    //return Number of nodes.
    int get_size();
    //return True if empty, false otherwise.
    bool isEmpty();
    //Clear the entire list and free memory.
    void clear();








};

#endif // LINKEDLIST_H
