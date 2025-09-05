# Data Structures Implementation - Vector

This repository contains a custom implementation of a **dynamic array (Vector)** in C++.

---

## Features

- Dynamic allocation using pointers.
- Automatic resizing when capacity is full (`push_back` & `insert`).
- Access and modify elements (`get`, `set`).
- Insert elements at any index (`insert`).
- Add elements at the end (`push_back`).
- Find elements (`find`).
- Get first and last elements (`get_front`, `get_back`).
- Print all elements (`print`).

---

## Files

- `vector.h` - Class definition for `Vector`.
- `vector.cpp` - Implementation of `Vector` methods.
- `main.cpp` - Test file demonstrating all features.

---

## Usage

1. Clone the repository:

```bash
git clone <your-repo-link>

## Notes

- **Implemented manually** without using STL `std::vector`.
- **Memory managed dynamically** with proper cleanup in the destructor.
- **Assertions ensure safe access** to elements.
