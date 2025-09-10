#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
    LinkedList list;

    // Check if the list is empty
    cout << "Is the list empty? " << (list.isEmpty() ? "Yes" : "No") << endl;

    // Insert at the front
    list.insert_front(10);
    list.insert_front(20);
    list.insert_front(30);
    cout << "After insert_front: ";
    list.Print();   // 30 20 10

    // Insert at the end
    list.insert_end(40);
    list.insert_end(50);
    cout << "After insert_end: ";
    list.Print();   // 30 20 10 40 50

    // Insert at a specific index
    list.insert(25, 2);  // insert at index = 2
    cout << "After insert(25, 2): ";
    list.Print();   // 30 20 25 10 40 50

    // Get the current size
    cout << "Current size: " << list.get_size() << endl;

    // Get the element at index 3
    Node* node = list.get_nth(3);
    if(node)
        cout << "Element at index 3: " << node->data << endl;

    // Delete the first node
    list.delete_first();
    cout << "After delete_first: ";
    list.Print();   // 20 25 10 40 50

    // Delete the last node
    list.delete_last();
    cout << "After delete_last: ";
    list.Print();   // 20 25 10 40

    // Delete a node at index 1
    list.delete_nth_node(1); // removes 25
    cout << "After delete_nth_node(1): ";
    list.Print();   // 20 10 40

    // Clear the entire list
    list.clear();
    cout << "After clear: ";
    list.Print();   // should be empty
    cout << "Current size: " << list.get_size() << endl;
    cout << "Is the list empty? " << (list.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
