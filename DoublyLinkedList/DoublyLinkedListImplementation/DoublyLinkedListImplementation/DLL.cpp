
#include "DLL.h"

// Constructor
DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr;
    tail = nullptr;
    count = 0;
}

// Destructor
DoublyLinkedList::~DoublyLinkedList()
{
    clear();
}

// check if list is empty
bool DoublyLinkedList::isEmpty() const
{
    return head == nullptr;
}

// return number of nodes
int DoublyLinkedList::size() const
{
    return count;
}

// insert at front
void DoublyLinkedList::insertFront(int value)
{
    Node* newNode = new Node(value);// create new node
    if (isEmpty())
    {
        head = tail = newNode; // list was empty
    }
    else
    {
        newNode->next = head;  // link new node with head
        head->prev = newNode; // link old head back to new node
        head = newNode;      // update head
    }
    count++;
}

// insert at end
void DoublyLinkedList::insertEnd(int value)
{
    Node* newNode = new Node(value);
    if (isEmpty())
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode; // link old tail to new node
        newNode->prev = tail; // link new node back to old tail
        tail = newNode;       // update tail
    }
    count++;
}

// insert after given node
void DoublyLinkedList::insertAfter(int key, int value)
{

    Node* node = head;
    while (node && node->data != key) {
        node = node->next;
    }

    if (node == nullptr) return;   // no node given

    Node* newNode = new Node(value);
    newNode->next = node->next;  // new node points to node->next
    newNode->prev = node;        // new node points back to node

    if (node->next != nullptr)   // if node wasn't the last one
    {
        node->next->prev = newNode;  // link next node back to new node
    }
    else
    {
        tail = newNode; // if node was tail, update tail
    }
    node->next = newNode; // link node forward to new node
    count++;
}


// delete from front
void DoublyLinkedList::deleteFront()
{
    if (isEmpty()) return;

    Node* temp = head;  // store node to delete
    if (head == tail)   // only one node
    {
        head = tail = nullptr;
    }
    else
    {
        head = head->next; // move head forward
        head->prev = nullptr; // unlink new head from old one
    }
    delete temp;   // free memory
    count--;
}

// delete from end
void DoublyLinkedList::deleteEnd()
{
    if (isEmpty()) return;

    Node* temp = tail;
    if (head == tail)
    {
        head = tail = nullptr;
    }
    else
    {
        tail = tail->prev;   // move tail backward
        tail->next = nullptr;  // unlink new tail from old one
    }
    delete temp;
    count--;
}

// delete by key
void DoublyLinkedList::deleteNode(int key)
{
    if (isEmpty()) return;

    if(head->data==key)deleteFront();  // if key is at head
    else if(tail->data==key)deleteEnd();  // if key is at tail
    else
    {
        Node* temp = head;
        while(temp&&key!=temp->data)  // search for node containing key
        {
            temp=temp->next;
        }
        if (temp == nullptr) return;  // key not found

        // unlink node
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        delete temp;
        count--;

    }
}

// print head to tail
void DoublyLinkedList::printForward() const
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// print tail to head
void DoublyLinkedList::printReversed() const
{
    Node* current = tail;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->prev;
    }
    cout << endl;
}

// clear all nodes
void DoublyLinkedList::clear()
{
    while (!isEmpty())
    {
        deleteFront();   // repeatedly delete head
    }
}
