#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
    Vector v(5);

    for(int i=0; i<v.get_size(); ++i)
    {
        v.set(i,i+1);
    }

    cout<<"Initial Vector: ";
    v.print();

    v.push_back(6);
    v.push_back(7);
    cout<<"After push_back: ";
    v.print();

    v.insert(0, 100);
    v.insert(3, 200);
    cout<<"After insertions: ";
    v.print();

    cout<<"Front element: "<< v.get_front()<< endl;
    cout<<"Back element: "<< v.get_back()<< endl;

    cout<<"Index of 200: "<< v.find(200)<< endl;
    cout<<"Index of 999 (not in vector): "<< v.find(999)<< endl;

    cout<<"Element at index 2: "<< v.get(2)<< endl;

    return 0;
}
