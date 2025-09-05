#include "vector.h"


void Vector::expand_capacity()
{
    // Double the current capacity to make room for more elements
    capacity*=2;
    // Allocate a new array in heap with the updated capacity
    int* arr2=new int[capacity];
    //Copy all existing elements from the old array to the new one
    for(int i=0; i<size; ++i)
    {
        arr2[i]=arr[i];
    }
    //Swap pointers: now arr points to the new bigger array
    std::swap(arr,arr2);
    //Delete the old smaller array to free memory
    delete[] arr2;
}


Vector::Vector(int size):size(size)
{
    // Ensure the size is at least 1
    if(size<0)
        this->size=1;
    // Add extra capacity to minimize reallocations
    capacity=this->size+10;
    // Allocate dynamic array in heap
    arr=new int [capacity];
}

Vector::~Vector()
{
    // Free the dynamically allocated memory in heap
    delete[]arr;
    // Avoid dangling pointer
    arr=nullptr;
}

int Vector::get_size()
{
    // Return the number of elements currently stored in the vector
    return size;
}

int Vector::get(int idx)
{
    // Ensure the index is within valid range
    assert(idx<size&&idx>=0);
    // Return the element at the given index
    return arr[idx];
}

void Vector ::set(int idx,int val)
{
    assert(idx<size&&idx>=0);
    // Set the element at the given index to the new value
    arr[idx]=val;
}

void Vector::print()
{
    // Print all elements in the vector
    for(int i=0; i<size; ++i)
    {
        std::cout<< arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int Vector::find(int val)
{
    // Search for the first occurrence of val in the vector
    for(int i=0; i<size; ++i)
    {
        if(arr[i]==val)
            return i;// Return the index where the value was found
    }
    // If not found, return -1 as a sentinel value
    return -1;
}

int Vector::get_front()
{
    assert(size > 0); // Ensure the vector is not empty
    return arr[0];
}


int Vector::get_back()
{
    assert(size > 0); // Ensure the vector is not empty
    return arr[size-1];
}

void Vector::push_back(int val)
{
    // Expand capacity if the array is full
    if(size==capacity)
        expand_capacity();
    // Add the new element at the end
    arr[size++]=val;

}

void Vector::insert(int idx,int val)
{
    // Ensure index is valid
    assert(0 <= idx && idx <size);
    // Expand capacity if full
    if(size==capacity)
        expand_capacity();
    // Shift elements to the right to make space for the new element
    for(int i=size-1; i>=idx; --i)
        arr[i+1]=arr[i];
    // Insert the new element at the given index
    arr[idx]=val;
    // Increase the size
    ++size;



}










