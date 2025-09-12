# Doubly Linked List Implementation in C++

## 📌 Overview  
This project demonstrates the implementation of a **Doubly Linked List (DLL)** in C++.  
A doubly linked list is a linear data structure where each node contains a data part and two pointers:
- One pointing to the **next node**
- One pointing to the **previous node**

This allows traversal in **both directions** (forward and backward).

---

## ⚙️ Implemented Functions  

### Node Operations  
- `insertFront(int value)` → Insert at the beginning.  
- `insertEnd(int value)` → Insert at the end.  
- `insertAfter(Node* node, int value)` → Insert after a specific node.  
- `deleteNode(int value)` → Delete a node by value.  

### Traversal Operations  
- `displayForward()` → Traverse from head to tail.  
- `displayBackward()` → Traverse from tail to head.  

### Utility  
- `getSize()` → Return the number of nodes.  

---

## 📊 Time Complexity  

| Operation                | Average Case | Worst Case |
| ------------------------- | ------------ | ---------- |
| Insert at Beginning       | O(1)         | O(1)       |
| Insert at End             | O(1)         | O(1)       |
| Insert After a Node       | O(1)         | O(1)       |
| Delete by Value           | O(n)         | O(n)       |
| Traverse Forward/Backward | O(n)         | O(n)       |
| Get Size                  | O(1)         | O(1)       |

---

## 🌟 Features  
- Supports **insertion** at beginning, end, and after a specific node.  
- Supports **deletion** of nodes by value.  
- Can **traverse** in both directions.  
- Maintains a **count** of nodes for quick size retrieval.  
- Efficient **O(1)** operations for most insertions.  

---

## 🔄 Difference: Singly vs Doubly Linked List  

| Feature                 | Singly Linked List (SLL) | Doubly Linked List (DLL) |
| ------------------------ | ------------------------- | ------------------------- |
| Pointer per Node         | 1 (next)                 | 2 (next + prev)          |
| Memory Usage             | Less (one pointer only)  | More (extra prev pointer)|
| Traversal                | Forward only             | Forward & Backward       |
| Deletion (by value)      | O(n), need prev pointer  | O(n), easier since `prev` exists |
| Insertion at End         | O(n) unless tail pointer | O(1) if tail is tracked  |
| Flexibility              | Less flexible            | More flexible            |

---

## 🤔 When to Use Which?  

- **Use Singly Linked List (SLL) when:**
  - Memory is limited (needs less space).  
  - You only need **forward traversal**.  
  - Simpler structure is preferred.  

- **Use Doubly Linked List (DLL) when:**
  - You need to **traverse in both directions**.  
  - Deletions are frequent (no need to track previous node manually).  
  - You want efficient insertions/deletions at both ends.  
  - Extra memory is not a big issue.  

---

