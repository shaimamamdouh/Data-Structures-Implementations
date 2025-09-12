#include "DLL.h"
#include <iostream>
using namespace std;

int main() {
    DoublyLinkedList dll;

    cout << "=== Insert at front ===" << endl;
    dll.insertFront(10);
    dll.insertFront(20);
    dll.insertFront(30);
    dll.printForward();   // 30 20 10
    dll.printReversed();  // 10 20 30

    cout << "\n=== Insert at end ===" << endl;
    dll.insertEnd(40);
    dll.insertEnd(50);
    dll.printForward();   // 30 20 10 40 50

    cout << "\n=== Delete front ===" << endl;
    dll.deleteFront();
    dll.printForward();   // 20 10 40 50

    cout << "\n=== Delete end ===" << endl;
    dll.deleteEnd();
    dll.printForward();   // 20 10 40

    cout << "\n=== Delete node with key ===" << endl;
    dll.deleteNode(10);
    dll.printForward();   // 20 40

    cout << "\n=== Insert after ===" << endl;
    dll.insertAfter(20, 35);
    dll.printForward();   // 20 35 40

    cout << "\n=== Size and Empty Check ===" << endl;
    cout << "Size: " << dll.size() << endl;   // 3
    cout << "Is empty? " << (dll.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
