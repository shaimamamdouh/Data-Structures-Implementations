# Dynamic Array Implementation - Vector

## Overview

This repository contains a custom implementation of a **dynamic array (Vector)** in C++, manually implemented **without using STL `std::vector`**.

A **Vector** allows dynamic resizing and provides methods to access, modify, and manipulate elements efficiently.

---

## Features

- Dynamic memory allocation using pointers.
- Automatic resizing when capacity is full (`push_back` & `insert`).
- Access and modify elements (`get`, `set`).
- Insert elements at any index (`insert`).
- Add elements at the end (`push_back`).
- Find elements (`find`).
- Get first and last elements (`get_front`, `get_back`).
- Print all elements (`print`).

---

## Why Use a Vector Over an Array?

Arrays require a fixed size and contiguous memory, which can lead to inefficient memory use or resizing issues:

- **Fixed Size**: Arrays must have a predefined size.
- **Resizing Overhead**: Expanding an array at runtime requires creating a new array and copying elements.
- **Contiguous Memory**: Large arrays may be difficult to allocate in fragmented memory.
- **Insertion/Deletion Overhead**: Inserting or deleting in the middle requires shifting elements.

**Advantages of Vector Implementation:**

- **Dynamic Resizing**: The vector automatically increases its capacity when needed.
- **Non-Contiguous Allocation**: Memory is managed dynamically and efficiently.
- **Efficient Insertion/Deletion**: Adding/removing elements is easier than in arrays.
- **Safe Access**: Assertions ensure elements are accessed safely.

---

## Files

- `vector.h` - Class definition for `Vector`.
- `vector.cpp` - Implementation of `Vector` methods.
- `main.cpp` - Test file demonstrating all features.

---

## Usage

1. Clone the repository:

```bash
git clone <https://github.com/shaimamamdouh/Data-Structures-Implementations>
