
#include"LinkedList.h"
using namespace std;


// Constructor: initializes an empty linked list
LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}


void LinkedList::delete_first()
{

    if(!head)// If list is empty
        return;

    Node*temp=head;
    head=head->next;// Move head to next node

    delete temp;   // Free memory

    if(!head) tail=nullptr;// If list became empty, reset tail
    size--;
}

void LinkedList::clear()
{
    while (head)
    {
        delete_first();
    }
}

LinkedList::~LinkedList()
{
    clear();
}

void LinkedList::Print()
{

    for(Node* cur=head; cur; cur=cur->next)
    {
        cout<<cur->data<<" ";
    }
    cout<<endl;
}

void LinkedList::insert_front(int data)
{
    Node*current=new Node(data);
    current->next=head;
    head=current;
    size++;
    if(size==1) tail=head;// If first node, tail = head

}

void LinkedList::insert_end(int data)
{
    Node*current=new Node(data);
    if(!head)// If list is empty
        head=tail=current;
    else
    {
        tail->next=current;
        tail=current;
    }
    size++;
}

// Get the nth node (0-based index)
Node* LinkedList::get_nth(int indx)
{
    if (indx < 0 || indx >= size)
        return nullptr;
    int cnt=0;
    for(Node*cur=head; cur; cur=cur->next)
        if(++cnt==indx)
            return cur;
    return nullptr;

}

void LinkedList::delete_last()
{

    if (!head) return;// Empty list

    if (size == 1)// Only one node
    {
        delete head;
        head = tail = nullptr;
        size = 0;
        return;
    }
    Node*temp=get_nth(size-2);// Get node before last
    delete tail;
    tail=temp;
    tail->next=nullptr;
    size--;

}

void LinkedList::delete_nth_node(int indx)
{
    if (indx<0||indx>=size) return;

    if (indx==0)
    {
        delete_first();
        return;
    }
    if (indx==size-1)
    {
        delete_last();
        return;
    }
    Node*prev=get_nth(indx-1);
    Node *curr=prev->next;
    prev->next=curr->next;
    delete curr;
    size--;

}

int LinkedList::get_size()
{
    return size;
}

bool LinkedList:: isEmpty()
{

    return (size==0);
}

void LinkedList::insert(int data, int idx)
{
    if (idx < 0 || idx > size) return;

    if (idx == 0)
    {
        insert_front(data);
        return;
    }
    if (idx == size)
    {
        insert_end(data);
        return;
    }

    Node* prev = get_nth(idx - 1);
    Node* newNode = new Node(data);
    newNode->next = prev->next;
    prev->next = newNode;
    size++;
}
