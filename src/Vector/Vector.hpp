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

    inline ~Vector() { delete[] _elem; }

    Rank size() const;

    Vector<T> &operator=(const Vector<T> &V);
};

template<typename T>
Vector<T>::Vector(int c, int s, T v):_capacity(c), _size(s) {
    _elem = new T[_capacity];
    for (int i = 0; i < _size; _elem[i++] = v);

}

template<typename T>
Rank Vector<T>::size() const {
    return _size;
}

template<typename T>
void Vector<T>::copyFrom(const T *A, Rank lo, Rank hi) {
    _capacity = 2 * (hi - lo);
    _size = 0;
    _elem = new T[_capacity];
    while (lo < hi)
        _elem[_size++] = A[lo++];
}

template<typename T>
Vector<T> &Vector<T>::operator=(const Vector<T> &V) {
    if (this == &V)
        return *this;

    if (this->_elem)
        delete[] this->_elem;

    copyFrom(V._elem, 0, V.size());
    return *this;
}

template<typename T>
void Vector<T>::expand() {
    if (_size < _capacity)
        return;
    if (_capacity < DEFAULT_CAPACITY)
        _capacity = DEFAULT_CAPACITY;

    T *oldElem = _elem;
    _capacity = _capacity << 1;
    _elem = new T[_capacity];
    for (int i = 0; i < _size; i++)
        _elem[i] = oldElem[i];
    delete[] oldElem;
}

#endif //ALGORITHMS_VECTOR_HPP
