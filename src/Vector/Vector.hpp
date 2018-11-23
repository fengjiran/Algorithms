//
// Created by Richard on 2018/11/23.
//

#ifndef ALGORITHMS_VECTOR_HPP
#define ALGORITHMS_VECTOR_HPP

typedef int Rank;
const int DEFAULT_CAPACITY = 3;

template<typename T>
class Vector {
protected:
    Rank _size;  //
    int _capacity;  //
    T *_elem;  //
    void copyFrom(const T *A, Rank lo, Rank hi);  //
    void expand();  //

    void shrink();  //

    bool bubble(Rank lo, Rank hi);  //

    void bubbleSort(Rank lo, Rank hi);  //
public:
    explicit Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0);

    Rank size() const;
};

template<typename T>
Vector<T>::Vector(int c, int s, T v) {
    _elem = new T[_capacity = c];
    for (T &a:_elem)
        a = v;
}

template<typename T>
Rank Vector<T>::size() const {
    return _size;
}

#endif //ALGORITHMS_VECTOR_HPP
