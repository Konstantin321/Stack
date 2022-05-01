#include "VectorStack.h"


VectorStack::VectorStack(const ValueType* rawArray, const size_t size) 
{
    _vector.insert(_vector.begin(), rawArray, rawArray + size);
}

void VectorStack::push(const ValueType& value) {
    _vector.push_back(value);
}

void VectorStack::pop() {
    _vector.pop_back();
}

const ValueType& VectorStack::top() const {
    return  _vector[size() - 1];
}

bool VectorStack::isEmpty() const {    
    return _vector.size() == 0;
}

size_t VectorStack::size() const {
    return _vector.size();
}