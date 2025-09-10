# Singly Linked List Implementation in C++

## 📌 Overview
This project is a simple implementation of a **Singly Linked List** in C++.  
The linked list is built using a custom `Node` structure and a `LinkedList` class that supports common operations like insertion, deletion, traversal, and clearing the list.

A **Linked List** is a linear data structure where elements (nodes) are stored dynamically in memory. Each node contains:
- `data`: The value stored in the node.
- `next`: A pointer to the next node in the list.

The last node points to `nullptr`, marking the end of the list.

---

## ⚙️ Features Implemented

### **1. Print Elements**
- `void Print()` → Traverses the list and prints all node values.

### **2. Insert Operations**
- `void insert_front(int data)` → Insert a node at the beginning.  
- `void insert_end(int data)` → Insert a node at the end.  
- `void insert(int data, int idx)` → Insert a node at a specific index.

### **3. Delete Operations**
- `void delete_first()` → Delete the first node.  
- `void delete_last()` → Delete the last node.  
- `void delete_nth_node(int idx)` → Delete a node at a specific index.

### **4. Access & Utility**
- `Node* get_nth(int idx)` → Get the node at a specific index.  
- `int get_size()` → Return the current size of the list.  
- `bool isEmpty()` → Check if the list is empty.  
- `void clear()` → Clear all nodes in the list and free memory.  

---

## 🔧 How It Works
Each operation updates pointers (`head`, `tail`) and manages dynamic memory using `new` and `delete`.  
The class ensures proper memory cleanup with:

```cpp
LinkedList::~LinkedList() {
    clear();
}
```

---

## ⏱️ Time Complexity

| Operation                         | Average Case | Worst Case |
| --------------------------------- | ------------ | ---------- |
| Access (by index)                 | O(n)         | O(n)       |
| Search (by value)                 | O(n)         | O(n)       |
| Insert at front                   | O(1)         | O(1)       |
| Insert at end (with tail pointer) | O(1)         | O(1)       |
| Insert at index                   | O(n)         | O(n)       |
| Delete first                      | O(1)         | O(1)       |
| Delete last                       | O(n)         | O(n)       |
| Delete at index                   | O(n)         | O(n)       |

---

## ✅ Advantages of This Implementation
- Dynamic memory allocation → no need to predefine size.  
- Efficient insertions/deletions at the beginning.  
- Efficient insertions at the end (using tail pointer).  
- Proper memory management with destructor and `clear()` function.  

---

## ⚠️ Limitations
- Sequential access only (no random access by index like arrays).  
- Extra memory required for storing the pointer in each node.  
- Deletion from the end requires traversal (O(n)).  
