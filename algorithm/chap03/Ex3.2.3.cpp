#include <iostream>
#include <cstdlib>
const int DefaultSize = 100;
template <typename Type> class Aarry
{
    Type *elements;
    int ArraySize;
    void getArray();
public:
    Array(int Size=DefaultSize);
    Array(const Array<Type> &x);
    ~Array(){
        delete [] elements;
    };
    Array<Type> &operator = {const Array<Type> &A};
    Type &operator [] (int i);
    int length () const { return ArraySize; }
    void ReSize (int sz);
    
};
