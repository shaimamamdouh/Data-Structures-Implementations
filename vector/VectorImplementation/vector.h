#ifndef VECTOR_H
#define VECTOR_H

#include<cassert>
#include<iostream>

class Vector
{

private:
    int*arr=nullptr;
    int size=0;// İí ßÇã ÚäÕÑ ãæÌæÏ
    int capacity=0;// ÇáÍÌã ÈÊÇÚ ÇáãÕİæİÉ İí ÇáãíãæÑí ßÇã

    void expand_capacity();

public:

    Vector(int size);
    ~Vector();
    // return size of array
    int get_size();

// return item in this index
    int get(int idx);

// put val in this index
    void set(int idx, int val);

// print all items of array
    void print();

// return index of this item, or -1 if not found
    int find(int value);

// return first item
    int get_front();

// return last item
    int get_back();

// put item in last index in array
    void push_back(int value);

// put val in idx and shift right other items
    void insert(int idx, int value);


};
#endif
