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
};

#endif //ALGORITHMS_VECTOR_HPP
