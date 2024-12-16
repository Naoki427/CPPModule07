#pragma once 
#include <iostream>
template < class T>
class Array
{
private:
    unsigned int _size;
    T* _arr;
public:
    Array() : _size(0), _arr(new T[0]){};
    Array(unsigned int n) : _size(n), _arr(new T[n]){};
    Array(Array &origin) : _size(origin.size()), _arr(new T[origin.size()]){
        for (unsigned int i = 0; i < _size; i++) {
            _arr[i] = origin._arr[i];
        }
    }
    ~Array() {
        delete [] _arr;
    };
    Array& operator= (const Array &origin) {
        if (this == &origin)
            return *this;
        delete [] _arr;
        _size = origin.size();
        _arr = new T[_size];
        for (unsigned int i = 0; i < _size; i++) {
            _arr[i] = origin._arr[i];
        }
        return *this;
    }
    T& operator[] (unsigned int i) const {
        if (i >= _size) {
            throw std::out_of_range("Index out of range");
        }
        return _arr[i];
    }
    unsigned int size() const {
        return _size; 
    }
};

template <typename T>
std::ostream &operator<<(std::ostream &os,const Array<T>& arr) {
    for (unsigned int i = 0; i < arr.size(); i++) {
        os << "arr[" << i << "] = " << arr[i] << std::endl;
    }
    return os;
}

