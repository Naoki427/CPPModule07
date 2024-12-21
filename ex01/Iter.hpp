#pragma once
#include <iostream>

template<typename T>
void iter(T *arr, size_t len, void(*f)(T&)) {
    for (size_t i = 0; i < len; i++) {
       f(arr[i]);
    }
}

template<typename T>
void iter(const T *arr, size_t len, void(*f)(const T&)) {
    for (size_t i = 0; i < len; i++) {
       f(arr[i]);
    }
}

template<typename T>
void plus(T& a) {
    a++;
}

template<typename T>
void factorial(T& a) {
    a = a * a;
}

template<typename T>
void put(T& a) {
    std::cout << a;
}
